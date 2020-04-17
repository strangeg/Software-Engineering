//==============================================================================
/**
 * Honor Pledge:
 *
 * I pledge that I have neither given nor received any help
 * on this assignment.
 */
//==============================================================================
#ifndef _Binary_Node_H_
#define _Binary_Node_H_

#include "Op_Node.h"

class Binary_Node : public Op_Node
{
public:
	Binary_Node (void);
	Binary_Node (Node * left, Node * right);
	virtual ~Binary_Node (void);
	
	virtual void accept(Node_Visitor & v) = 0;
	
	//used for visitor
	Node * get_left_node (void) const ;
	Node * get_right_node (void) const;
	
	//used for builder
	void set_left_node (Node * left);
	void set_right_node (Node * right);
	
protected:
	Node * right_;
	Node * left_;
};
#endif