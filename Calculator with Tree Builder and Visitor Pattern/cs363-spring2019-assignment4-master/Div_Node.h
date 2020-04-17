//==============================================================================
/**
 * Honor Pledge:
 *
 * I pledge that I have neither given nor received any help
 * on this assignment.
 */
//==============================================================================

#ifndef _Div_Node_H_
#define _Div_Node_H_

#include "Binary_Node.h"

class Div_Node : public Binary_Node
{
public:
	Div_Node (void);
	Div_Node (Node * left, Node * right);
	virtual ~Div_Node (void);
	
	virtual void accept (Node_Visitor & v);
};
#endif