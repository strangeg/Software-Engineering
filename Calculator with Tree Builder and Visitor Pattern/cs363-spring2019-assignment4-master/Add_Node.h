//==============================================================================
/**
 * Honor Pledge:
 *
 * I pledge that I have neither given nor received any help
 * on this assignment.
 */
//==============================================================================

#ifndef _Add_Node_H_
#define _Add_Node_H_

#include "Binary_Node.h"

class Add_Node : public Binary_Node
{
public:
	Add_Node (void);
	Add_Node (Node * left, Node * right);
	virtual ~Add_Node (void);
	
	virtual void accept (Node_Visitor & v);
};
#endif