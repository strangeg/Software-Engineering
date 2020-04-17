//==============================================================================
/**
 * Honor Pledge:
 *
 * I pledge that I have neither given nor received any help
 * on this assignment.
 */
//==============================================================================

#ifndef _Mod_Node_H_
#define _Mod_Node_H_

#include "Binary_Node.h"

class Mod_Node : public Binary_Node
{
public:
	Mod_Node (void);
	Mod_Node (Node * left, Node * right);
	virtual ~Mod_Node (void);
	
	virtual void accept (Node_Visitor & v);
};
#endif