//==============================================================================
/**
 * Honor Pledge:
 *
 * I pledge that I have neither given nor received any help
 * on this assignment.
 */
//==============================================================================

#include "Calculator.h"

Calculator::Calculator (void)
{
	//leave empty
}

Calculator::~Calculator (void)
{
	//leave empty
}

//evaluates the postfix and returns an int data type to main to print out
//also cleans up memory before next loop in main
int Calculator::evaluate (std::string infix)
{
	Stack <int> result;
	Stack_Expr_Command_Factory factory (result);
	Array <Expr_Command *> postfix;
	
	infix_to_postfix(infix, factory, postfix);
	
	//runs through postfix array and executes commands with results going to result stack
	for (int i=0; i < postfix.size(); i++)
	{
		postfix[i]->execute();
		delete postfix[i];
	}
	return result.top();
}

//changes the infix to postfix for evaluating
void Calculator::infix_to_postfix(const std::string & infix, Stack_Expr_Command_Factory & factory, Array <Expr_Command *> & postfix)
{
	std::istringstream input(infix);
	std::string token;
	int index = 0;
	
	Expr_Command * cmd = 0;
	Stack <Expr_Command *> temp;
	
// COMMENT No where in the code are you creating the commands representation
// of the operators and operands in the expression.
// Fix: Created the abstract factories correctly to be able to use them in the infix_to_postfix
	
	while (!input.eof ())
	{
		input >> token;
		if (token == "+")
		{
			cmd = factory.create_add_command();
		}
		else if (token == "-")
		{
			cmd = factory.create_subtract_command();
		}
		else if (token == "/")
		{
			cmd = factory.create_divide_command();
		}
		else if (token == "*")
		{
			cmd = factory.create_multiply_command();
		}
		else if (token == "%")
		{
			cmd = factory.create_modulus_command();
		}
		//since parentheses aren't a command we have to do something different than just push on stack
		//first thing that comes to mind is either recursion or making another stack then returning that value
		//may also just create a parenthesis command that doesn't execute anything
		else if (token == "(")
		{
			
		}
		//pop operators off temp stack until the ( is found then pop that off and delete it
		else if (token == ")")
		{
			
		}
		//since number is not an operator it can just go straight to postfix array
		else
		{
			cmd = factory.create_number_command(std::stoi(token));
			postfix.resize(index + 1);
			postfix[index++] = cmd;
			//have to have this continue or else cmd is trying to be added to operator temp stack
			continue;
		}
// COMMENT: You should implement the precedence function on
// the command object since it is better place there. Otherwise,
// it is hard to add new commands without having to change the
// underlying algorithm. Also, you are using if-else statements
// as opposed to inheritance and polymorphism, which is a code
// smell.
// Fix: Fixed the abstract factories so they may be used in place of if/else statements
// Also went back and added a precendence value to each command so the code is simply call precendence of command

		//precedence check on temp after new command is made
		while (!temp.is_empty() && temp.top()->precedence() >= cmd->precedence())
		{
			postfix.resize(index + 1);
			postfix[index++] = temp.top();
			temp.pop();
		}
		//push command after
		temp.push(cmd);
	}
	
	//after loop is finished pop remaining operations off and add to postfix
	while (!temp.is_empty())
	{
		postfix.resize(index + 1);
		postfix[index++] = temp.top();
		temp.pop();
	}
}
// COMMENT: You should implement the precedence function on
// the command object since it is better place there. Otherwise,
// it is hard to add new commands without having to change the
// underlying algorithm. Also, you are using if-else statements
// as opposed to inheritance and polymorphism, which is a code
// smell.
// Fix: Deleted extra code but answered question above