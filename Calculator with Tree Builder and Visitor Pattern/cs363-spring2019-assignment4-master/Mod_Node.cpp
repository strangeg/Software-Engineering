//==============================================================================
/**
 * Honor Pledge:
 *
 * I pledge that I have neither given nor received any help
 * on this assignment.
 */
//==============================================================================

#include "Mod_Node.h"

Mod_Node::Mod_Node (void)
	: Binary_Node ()
{
	
}

Mod_Node::Mod_Node (Node * left, Node * right)
	: Binary_Node (left, right)
{
	
}

Mod_Node::~Mod_Node (void)
{
	
}

void Mod_Node::accept (Node_Visitor & v)
{
	v.Visit_Mod_Node (*this);
}