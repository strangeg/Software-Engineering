//==============================================================================
/**
 * Honor Pledge:
 *
 * I pledge that I have neither given nor received any help
 * on this assignment.
 */
//==============================================================================

#ifndef _Mod_Command_H_
#define _Mod_Command_H_

#include "Binary_Op_Command.h"
/**
 * @class Mod_Command
 *
 *
 */
class Mod_Command : public Binary_Op_Command
{
public:
	//default constructor
	Mod_Command (Stack <int> & s);
	
	int evaluate (int n1, int n2) const;
	
	//destructor
	~Mod_Command (void);
};
#endif