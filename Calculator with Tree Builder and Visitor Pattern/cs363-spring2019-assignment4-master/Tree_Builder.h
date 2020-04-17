//==============================================================================
/**
 * Honor Pledge:
 *
 * I pledge that I have neither given nor received any help
 * on this assignment.
 */
//==============================================================================

#ifndef _Tree_Builder_H_
#define _Tree_Builder_H_

#include "Expr_Builder.h"
#include "Number_Node.h"
#include "Add_Node.h"
#include "Sub_Node.h"
#include "Mult_Node.h"
#include "Div_Node.h"
#include "Mod_Node.h"
#include "Stack.h"

class Tree_Builder : public Expr_Builder
{
public:
	Tree_Builder (void);
	virtual ~Tree_Builder (void);
	
	virtual void start_expression (void);
	virtual void build_number (int n);
	virtual void build_add_operator (void);
	virtual void build_sub_operator (void);
	virtual void build_mult_operator (void);
	virtual void build_div_operator (void);
	virtual void build_mod_operator (void);
	virtual void build_open_parent (void);
	virtual void build_close_parent (void);
	
	void connect_expression (void);
	virtual Node * get_expression (void);
	
private:
	Node * tree_;
	Stack <Binary_Node *> bin_stack_;
	Stack <Node *> output_;
	
};
#endif