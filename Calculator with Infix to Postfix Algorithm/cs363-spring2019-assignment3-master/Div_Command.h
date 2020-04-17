//==============================================================================
/**
 * Honor Pledge:
 *
 * I pledge that I have neither given nor received any help
 * on this assignment.
 */
//==============================================================================

#ifndef _Div_Command_H_
#define _Div_Command_H_

#include "Binary_Op_Command.h"

/**
 * @class Div_Command
 *
 *
 */
class Div_Command : public Binary_Op_Command
{
public:
	//default constructor
	Div_Command (Stack <int> & s);
	
	int evaluate (int n1, int n2) const;
	
	//destructor
	~Div_Command (void);
};
#endif