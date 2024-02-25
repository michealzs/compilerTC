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
	std::cout << "\n " << std::endl;
    std::cout << "==== >> Left Val: " << typeToString(lValue) << std::endl;
    std::cout << "==== >> Right Val: " << typeToString(rValue) << std::endl;

    if (lValue == MISMATCH || rValue == MISMATCH){
		appendError(GENERAL_SEMANTIC, "Type Mismatch on " + message);
        return;
    }
    if (lValue == INT_TYPE && rValue == REAL_TYPE ) {
        appendError(GENERAL_SEMANTIC, "llegal Narrowing " + message);
        return;
    } else if (lValue != rValue) {
        appendError(GENERAL_SEMANTIC, "Type Mismatch on " + message);
        return;
    }
    /*mine compared to skeleton default 
    if (lValue != rValue) {
        // Check for specific cases of narrowing
        if (lValue == INT_TYPE && rValue == REAL_TYPE) {
            appendError(GENERAL_SEMANTIC, "Narrowing conversion from real to int on " + message);
        } else {
            appendError(GENERAL_SEMANTIC, "Type Mismatch on " + message);
        }
    }*/

}

void checkFunctionAssignment(Types lValue, Types rValue, string message) {
    std::cout << "\n " << std::endl;
    std::cout << "==== >> Left Val: " << typeToString(lValue) << std::endl;
    std::cout << "==== >> Right Val: " << typeToString(rValue) << std::endl;

    if (lValue == INT_TYPE && rValue == REAL_TYPE ) {
        appendError(GENERAL_SEMANTIC, "llegal Narrowing " + message);
        return;
    } 
}

Types checkWhen(Types expression, Types expression_) {
    std::cout << "\n" << std::endl;
    std::cout << "lexpression: " << typeToString(expression) << std::endl;
    std::cout << "rexpression: " << typeToString(expression_) << std::endl;
	if (expression == MISMATCH || expression_ == MISMATCH)
		return MISMATCH;
	if (expression != expression_)
		appendError(GENERAL_SEMANTIC, "When Types Mismatch ");
	return expression;
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

Types checkIFThen(Types expression, Types left, Types right) {
    std::cout << "\nExpression type: " << typeToString(expression) << std::endl;
    std::cout << "Left typee: " << typeToString(left) << std::endl;
    std::cout << "Right typee: " << typeToString(right) << std::endl;

    if (expression != BOOL_TYPE) {
        appendError(GENERAL_SEMANTIC, "If Expression Must Be Boolean");
        return MISMATCH;
    } 

    if (left != right) {
        appendError(GENERAL_SEMANTIC, "If-Then Type Mismatch");
        return MISMATCH;
    }

    return left; 
}


Types checkIFThenElsifElse(Types conditionType, Types thenType, Types elsifType, Types elseType) {
    /*std::cout << "\n " << std::endl;
    std::cout << "Then type: " << typeToString(thenType) << std::endl;
    std::cout << "Elsif type: " << typeToString(elsifType) << std::endl;
    std::cout << "Else type: " << typeToString(elseType) << std::endl;*/
    if (conditionType != BOOL_TYPE) {
        return MISMATCH;
    }
    if (thenType == MISMATCH || elsifType == MISMATCH || elseType == MISMATCH) {
        return MISMATCH;
    }	
    if (thenType != elsifType || thenType != elseType) {
        appendError(GENERAL_SEMANTIC, "If-Elsif-Else Type Mismatch");
        return MISMATCH;
    }
    return thenType;
}



Types checkRelation(Types left, Types right) {
    std::cout << "\n " << std::endl;
    std::cout << "Left typecr: " << typeToString(left) << std::endl;
    std::cout << "Right typecr: " << typeToString(right) << std::endl;
    if (left == MISMATCH || right == MISMATCH){
        return MISMATCH;
    }
    if (left == right){
        return BOOL_TYPE;  
    }
    if (left == UNKNOWN_TYPE){
        appendError(GENERAL_SEMANTIC, "Undeclared Scalar name");
        return MISMATCH;
    }
    if (left == CHAR_TYPE && right == INT_TYPE){
        appendError(GENERAL_SEMANTIC, "Character Literals Cannot be Compared to Numeric Expressions");
        return MISMATCH;
    }
    return MISMATCH;
}

Types check(Types left) {
    std::cout << "\n " << std::endl;
    std::cout << "Left type: " << typeToString(left) << std::endl;
    
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
        return operandType;
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




/*

// => Marked for deletion 
Types checkElsif(Types previousElsifType, Types conditionType, Types currentStatementType) {
    
    if (previousElsifType == NONE) {
        return currentStatementType; // First 'elsif' after 'then'
    }
    if (previousElsifType != currentStatementType) {
        appendError(GENERAL_SEMANTIC, "Type mismatch in ELSIF clauses");
        return MISMATCH;
    }
    return currentStatementType;
}



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

    

