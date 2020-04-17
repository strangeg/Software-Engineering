//==============================================================================
/**
 * Honor Pledge:
 *
 * I pledge that I have neither given nor received any help
 * on this assignment.
 */
//==============================================================================

#ifndef _Mult_Node_H_
#define _Mult_Node_H_

#include "Binary_Node.h"

class Mult_Node : public Binary_Node
{
public:
	Mult_Node (void);
	Mult_Node (Node * left, Node * right);
	virtual ~Mult_Node (void);
	
	virtual void accept (Node_Visitor & v);
};
#endif