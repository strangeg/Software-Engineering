//==============================================================================
/**
 * Honor Pledge:
 *
 * I pledge that I have neither given nor received any help
 * on this assignment.
 */
//==============================================================================
#ifndef _Op_Node_H_
#define _Op_Node_H_

#include "Node.h"

class Op_Node : public Node
{
public:
	Op_Node (void);
	virtual ~Op_Node (void);
	
	virtual void accept (Node_Visitor & v) = 0;
};
#endif