//==============================================================================
/**
 * Honor Pledge:
 *
 * I pledge that I have neither given nor received any help
 * on this assignment.
 */
//==============================================================================

#ifndef _Eval_Tree_H_
#define _Eval_Tree_H_

#include "Node_Visitor.h"
#include "Add_Node.h"
#include "Sub_Node.h"
#include "Number_Node.h"
#include "Mult_Node.h"
#include "Mod_Node.h"
#include "Div_Node.h"
#include "Stack.h"

class Eval_Tree : public Node_Visitor
{
public:
	Eval_Tree (void);
	virtual ~Eval_Tree (void);
	
	virtual void Visit_Add_Node (const Add_Node & node);
	virtual void Visit_Sub_Node (const Sub_Node & node);
	virtual void Visit_Mult_Node (const Mult_Node & node);
	virtual void Visit_Mod_Node (const Mod_Node & node);
	virtual void Visit_Div_Node (const Div_Node & node);
	virtual void Visit_Number_Node (const Number_Node & node);
	
	
	int result (void) const;

private:
	int result_;
	int left_node_;
	int right_node_;
	Stack <int> num_stack_;
	//moved Op_Node_Visit to private since its only used in this class
	void Op_Node_Visit (const Binary_Node & node);
};
#endif