// CMSC 430 Compiler Theory and Design
// Project 4 Skeleton
// UMGC CITE
// Summer 2023

// This file contains the bodies of the type checking functions

#include <string>
#include <vector>
#include <algorithm>
#include <iostream>


using namespace std;

#include "types.h"
#include "listing.h"

void checkAssignment(Types lValue, Types rValue, string message) {
	if (lValue != MISMATCH && rValue != MISMATCH && lValue != rValue)
		appendError(GENERAL_SEMANTIC, "Type Mismatch on " + message);
}

Types checkWhen(Types true_, Types false_) {
	if (true_ == MISMATCH || false_ == MISMATCH)
		return MISMATCH;
	if (true_ != false_)
		appendError(GENERAL_SEMANTIC, "When Types Mismatch ");
	return true_;
}

Types checkSwitch(Types case_, Types when, Types other) {
	if (case_ != INT_TYPE)
		appendError(GENERAL_SEMANTIC, "Switch Expression Not Integer");
	return checkCases(when, other);
}

Types checkCases(Types left, Types right) {
	if (left == MISMATCH || right == MISMATCH)
		return MISMATCH;
	if (left == NONE || left == right)
		return right;
	appendError(GENERAL_SEMANTIC, "Case Types Mismatch");
	return MISMATCH;
}

Types checkArithmetic(Types left, Types right) {
    if (left == MISMATCH || right == MISMATCH)
        return MISMATCH;
    if (left == CHAR_TYPE || right == CHAR_TYPE) {
        appendError(GENERAL_SEMANTIC, "Arithmetic Operator Requires Numeric Types");
        return MISMATCH;
    }
    if (left == INT_TYPE && right == INT_TYPE)
        return INT_TYPE;
    if ((left == INT_TYPE && right == REAL_TYPE) || (left == REAL_TYPE && right == INT_TYPE))
        return REAL_TYPE;
    appendError(GENERAL_SEMANTIC, "Arithmetic Operator Requires Numeric Type"s);
    return MISMATCH;
}


Types checkModulusTypes(Types left, Types right) {
    if (left == MISMATCH || right == MISMATCH)
        return MISMATCH;

    if (left == INT_TYPE && right == INT_TYPE)
        return INT_TYPE;

    appendError(GENERAL_SEMANTIC, "Remainder Operator Requires Integer Operands");
    return MISMATCH;
}

Types checkIFThen(Types expression, Types left, Types right){
	std::cout << "\n " << std::endl;
	std::cout << "Expression type: " << typeToString(expression) << std::endl;
    std::cout << "Left type: " << typeToString(left) << std::endl;
    std::cout << "Right type: " << typeToString(right) << std::endl;
	if (expression != BOOL_TYPE){
		appendError(GENERAL_SEMANTIC, "If Expression Must Be Boolean");
		return MISMATCH;
	} else {
		if (left != BOOL_TYPE || right !=BOOL_TYPE){
			appendError(GENERAL_SEMANTIC, "If-Then Type Mismatch");
			return MISMATCH;
		}
		if ((left == INT_TYPE && right == REAL_TYPE) || (left == REAL_TYPE && right == INT_TYPE)){
		appendError(GENERAL_SEMANTIC, "Illegal Narrowing Function Return");
		return MISMATCH;
		}
		return INT_TYPE;
	}
	return BOOL_TYPE;
}

Types checkIFThenElsifElse(Types conditionType, Types thenType, Types elsifType, Types elseType) {
    if (conditionType != BOOL_TYPE) {
        appendError(GENERAL_SEMANTIC, "Initial IF condition must be boolean");
        return MISMATCH;
    }
    if (thenType == MISMATCH || elsifType == MISMATCH || elseType == MISMATCH) {
        appendError(GENERAL_SEMANTIC, "Type mmismatch in IF-ELSIF-ELSE statement");
        return MISMATCH;
    }	
    if (thenType != elsifType || thenType != elseType) {
        appendError(GENERAL_SEMANTIC, "Type mismatch between THEN, ELSIF, and ELSE parts");
        return MISMATCH;
    }
    return thenType;
}



Types checkRelation(Types left, Types right) {
    if (left == MISMATCH || right == MISMATCH)
        return MISMATCH;
    if (left == right)
        return BOOL_TYPE;  
    appendError(GENERAL_SEMANTIC, "Character Literals Cannot be Compared to Numeric Expressions");
    return MISMATCH;
}


Types checkNegation(Types operandType) {
    if (operandType == MISMATCH) {
        return MISMATCH;  
    }
    if (operandType == INT_TYPE || operandType == REAL_TYPE) {
        return operandType;
    }
    if (operandType == CHAR_TYPE) {
        appendError(GENERAL_SEMANTIC, "Arithmetic Operator Requires Numeric Types");
        return MISMATCH;
    }
    appendError(GENERAL_SEMANTIC, "Arithmetic Operator Requires Numeric Type");
    return MISMATCH;
}


string typeToString(Types type) {
    switch (type) {
        case MISMATCH:
            return "MISMATCH";
        case BOOL_TYPE:
            return "BOOL_TYPE";
        case FLOAT_TYPE:
            return "FLOAT_TYPE";
        case INT_TYPE:
            return "INT_TYPE";
        case REAL_TYPE:
            return "REAL_TYPE";
        case CHAR_TYPE:
            return "CHAR_TYPE";
        default:
            return "UNKNOWN_TYPE";
    }
}




// => Marked for deletion 
/*
Types checkCharacterComparison(Types leftType, Types rightType) {
    if (leftType == CHAR_TYPE && rightType == CHAR_TYPE) {
        return BOOL_TYPE; 
    } else if (leftType == CHAR_TYPE || rightType == CHAR_TYPE) {
        appendError(GENERAL_SEMANTIC, "Character literals cannot be compared to numeric expressions");
        return MISMATCH; 
    }
    return BOOL_TYPE; 
}
*/

    

