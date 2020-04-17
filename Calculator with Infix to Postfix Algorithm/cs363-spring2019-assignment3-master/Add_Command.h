//==============================================================================
/**
 * Honor Pledge:
 *
 * I pledge that I have neither given nor received any help
 * on this assignment.
 */
//==============================================================================

#ifndef _Add_Command_H_
#define _Add_Command_H_

#include "Binary_Op_Command.h"

/**
 * @class Add_Command
 *
 *
 */
class Add_Command : public Binary_Op_Command
{
public:
	//default constructor
	Add_Command (Stack <int> & s);
	
	int evaluate (int n1, int n2) const;
	
	//destructor
	~Add_Command (void);
};
#endif