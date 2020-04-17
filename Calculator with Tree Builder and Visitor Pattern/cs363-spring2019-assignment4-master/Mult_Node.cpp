//==============================================================================
/**
 * Honor Pledge:
 *
 * I pledge that I have neither given nor received any help
 * on this assignment.
 */
//==============================================================================

#include "Mult_Node.h"

Mult_Node::Mult_Node (void)
	: Binary_Node ()
{
	
}

Mult_Node::Mult_Node (Node * left, Node * right)
	: Binary_Node (left, right)
{
	
}

Mult_Node::~Mult_Node (void)
{
	
}

void Mult_Node::accept (Node_Visitor & v)
{
	v.Visit_Mult_Node (*this);
}