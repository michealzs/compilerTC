// CMSC 430 Compiler Theory and Design
// Project 4 Skeleton
// UMGC CITE
// Summer 2023

// This file contains the bodies of the type checking functions

#include <string>
#include <vector>

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
    if (left == INT_TYPE && right == INT_TYPE)
        return INT_TYPE;
    if ((left == INT_TYPE && right == REAL_TYPE) || (left == REAL_TYPE && right == INT_TYPE))
        return REAL_TYPE;
    appendError(GENERAL_SEMANTIC, "Arithmetic operations require integer or real types");
    return MISMATCH;
}



Types checkIFThen(Types expression, Types left, Types right)
{
	if (expression != BOOL_TYPE)
	{
		appendError(GENERAL_SEMANTIC, "If Expression Must Be Boolean");
		return MISMATCH;
	} else
	{
		if (left != BOOL_TYPE || right !=BOOL_TYPE)
		{
			appendError(GENERAL_SEMANTIC, "If-Then Type Mismatch");
			return MISMATCH;
		}
			if ((left == INT_TYPE && right == REAL_TYPE) || (left == REAL_TYPE && right == INT_TYPE))
	{
		appendError(GENERAL_SEMANTIC, "Illegal Narrowing Function Return");
		return MISMATCH;
	}
	return INT_TYPE;
	}
	return BOOL_TYPE;
}

Types checkRelational(Types left, Types right)
{
	if (checkArithmetic(left, right) == MISMATCH)
		return MISMATCH;
	return BOOL_TYPE;
}


Types checkNegation(Types operandType) {
    if (operandType == MISMATCH) {
        return MISMATCH;  // Cannot negate if the operand type is already a mismatch
    }

    // Allow negation for integer and real types
    if (operandType == INT_TYPE || operandType == REAL_TYPE) {
        return operandType;
    }

    // For any other type, negation is not supported
    appendError(GENERAL_SEMANTIC, "Negation Not Supported for This Type");
    return MISMATCH;
}
