//==============================================================================
/**
 * Honor Pledge:
 *
 * I pledge that I have neither given nor received any help
 * on this assignment.
 */
//==============================================================================

#ifndef _Mult_Command_H_
#define _Mult_Command_H_

#include "Binary_Op_Command.h"

/**
 * @class Mult_Command
 *
 *
 */
class Mult_Command : public Binary_Op_Command
{
public:
	//default constructor
	Mult_Command (Stack <int> & s);
	
	int evaluate (int n1, int n2) const;
	
	//destructor
	~Mult_Command (void);
};
#endif