//==============================================================================
/**
 * Honor Pledge:
 *
 * I pledge that I have neither given nor received any help
 * on this assignment.
 */
//==============================================================================
#ifndef _Node_H_
#define _Node_H_

#include "Node_Visitor.h"

class Node
{
public:
	Node (void);
	virtual ~Node (void);
	
	virtual void accept (Node_Visitor & v) = 0;
};

class Node_Visitor;
#endif