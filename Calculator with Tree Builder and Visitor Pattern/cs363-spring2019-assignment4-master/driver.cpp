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

int main (int argc, char * argv [])
{
	std::string infix;
	int result;
	
	Tree_Builder builder;
	
	//loops until user types QUIT case sensitive
	while (true)
	{
		Calculator * userCalculator = new Calculator(builder);
		std::cout << "Enter an equation: ";
		//needed getline here for some reason, cin wasnt pulling everything in that was entered
		getline(std::cin, infix);
		if (infix == "QUIT")
		{
			break;
		}
		//need to catch errors thrown from calculator class
		result = userCalculator->evaluate(infix);
		std::cout << result << "\n";
	}
	
	return 0;
}