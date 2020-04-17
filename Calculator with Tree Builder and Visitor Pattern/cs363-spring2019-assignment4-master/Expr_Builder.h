//==============================================================================
/**
 * Honor Pledge:
 *
 * I pledge that I have neither given nor received any help
 * on this assignment.
 */
//==============================================================================

#ifndef _Expr_Builder_H_
#define _Expr_Builder_H_

#include "Node.h"

class Expr_Builder
{
public:
	Expr_Builder (void);
	virtual ~Expr_Builder (void);
	
	virtual void start_expression (void) = 0;
	virtual void build_number (int n) = 0;
	virtual void build_add_operator (void) = 0;
	virtual void build_sub_operator (void) = 0;
	virtual void build_mult_operator (void) = 0;
	virtual void build_div_operator (void) = 0;
	virtual void build_mod_operator (void) = 0;
	virtual void build_open_parent (void) = 0;
	virtual void build_close_parent (void) = 0;
	
	virtual void connect_expression (void) = 0;
	virtual Node * get_expression (void) = 0;
	
};
#endif