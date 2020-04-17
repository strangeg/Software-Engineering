//==============================================================================
/**
 * Honor Pledge:
 *
 * I pledge that I have neither given nor received any help
 * on this assignment.
 */
//==============================================================================

#include "Expr_Command.h"

Expr_Command::~Expr_Command (void)
{
	
}

int Expr_Command::precedence (void) const
{
	return prec_value;
}