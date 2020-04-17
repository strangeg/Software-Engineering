// Honor Pledge:
//
// I pledge that I have neither given nor received any help
// on this assignment.

#include "Sub_Command.h"

Sub_Command::Sub_Command (Stack <int> & s)
	: Binary_Op_Command (s)
{
	//precendece value will be 1 for mult/div/mod and 0 for add/sub
	prec_value = 0;
}

int Sub_Command::evaluate (int n1, int n2) const
{
	return n1 - n2;
}

Sub_Command::~Sub_Command (void)
{
	
}