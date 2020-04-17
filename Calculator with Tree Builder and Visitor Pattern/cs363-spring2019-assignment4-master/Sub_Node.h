//==============================================================================
/**
 * Honor Pledge:
 *
 * I pledge that I have neither given nor received any help
 * on this assignment.
 */
//==============================================================================

#ifndef _Sub_Node_H_
#define _Sub_Node_H_

#include "Binary_Node.h"

class Sub_Node : public Binary_Node
{
public:
	Sub_Node (void);
	Sub_Node (Node * left, Node * right);
	virtual ~Sub_Node (void);
	
	virtual void accept (Node_Visitor & v);
};
#endif