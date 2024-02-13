// CMSC 430 Compiler Theory and Design
// Project 4 Skeleton
// UMGC CITE
// Summer 2023

// This file contains type definitions and the function
// prototypes for the type checking functions
#include <string>
#include <vector>

typedef char* CharPtr;

enum Types { MISMATCH,BOOL_TYPE,FLOAT_TYPE, INT_TYPE,REAL_TYPE, CHAR_TYPE, NONE};

void checkAssignment(Types lValue, Types rValue, string message);
Types checkWhen(Types true_, Types false_);
Types checkSwitch(Types case_, Types when, Types other);
Types checkCases(Types left, Types right);
Types checkArithmetic(Types left, Types right);
Types checkIFThen(Types expression, Types left, Types right);
Types checkRelation(Types left, Types right);
Types checkNegation(Types operandType);
string typeToString(Types type);
Types checkCharacterComparison(Types leftType, Types rightType);
Types checkIFThenElsifElse(Types conditionType, Types thenType, Types elsifType, Types elseType);
