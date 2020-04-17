// Honor Pledge:
//
// I pledge that I have neither given nor received any help
// on this assignment.

#include "Num_Command.h"

Num_Command::Num_Command (Stack <int> & s, int n)
	: s_ (s)
	, n_ (n)
{
	
}

Num_Command::~Num_Command (void)
{
	//leave empty
}

void Num_Command::execute (void)
{
	s_.push (this->n_);
}
