//==============================================================================
/**
 * Honor Pledge:
 *
 * I pledge that I have neither given nor received any help
 * on this assignment.
 */
//==============================================================================

#include "Div_Node.h"

Div_Node::Div_Node (void)
	: Binary_Node ()
{
	
}

Div_Node::Div_Node (Node * left, Node * right)
	: Binary_Node (left, right)
{
	
}

Div_Node::~Div_Node (void)
{
	
}

void Div_Node::accept (Node_Visitor & v)
{
	v.Visit_Div_Node (*this);
}