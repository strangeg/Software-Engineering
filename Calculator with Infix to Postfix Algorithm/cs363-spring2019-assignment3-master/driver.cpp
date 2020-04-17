//==============================================================================
/**
 * Honor Pledge:
 *
 * I pledge that I have neither given nor received any help
 * on this assignment.
 */
//==============================================================================
#include "Calculator.h"
#include <iostream>



// COMMENT: Instead of using C functions to implement parts of the
// calculator. It would be better suited to use a Wrapper Facade.
// FIX: Moved most of the code into a Calculator object which will just call evualate and such on the expression entered

int main (int argc, char * argv [])
{
	std::string infix;
	int result;
	
	Calculator userCalculator;
	
	//loops until user types QUIT case sensitive
	while (true)
	{
		std::cout << "Enter an equation: ";
		//needed getline here for some reason, cin wasnt pulling everything in that was entered
		getline(std::cin, infix);
		if (infix == "QUIT")
		{
			break;
		}
		//sends infix expression to calculator class instead of user calling infix_to_postfix
		//returns an int to std::cout
		result = userCalculator.evaluate(infix);
		std::cout << result << "\n";
	}
	
	return 0;
}