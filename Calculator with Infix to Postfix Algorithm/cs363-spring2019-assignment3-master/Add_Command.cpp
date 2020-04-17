// Honor Pledge:
//
// I pledge that I have neither given nor received any help
// on this assignment.

#include "Add_Command.h"

Add_Command::Add_Command (Stack <int> & s)
	: Binary_Op_Command (s)
{
	//precendece value will be 1 for mult/div/mod and 0 for add/sub
	prec_value = 0;
}

int Add_Command::evaluate (int n1, int n2) const
{
	return n1 + n2;
}

Add_Command::~Add_Command (void)
{
	
}