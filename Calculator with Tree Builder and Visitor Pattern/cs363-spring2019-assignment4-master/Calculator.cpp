//==============================================================================
/**
 * Honor Pledge:
 *
 * I pledge that I have neither given nor received any help
 * on this assignment.
 */
//==============================================================================

#include "Calculator.h"

#define ASCII_ALPHA_VALUE 65

Calculator::Calculator (Tree_Builder & builder)
	: builder_ (builder)
{
	//leave empty
}

Calculator::~Calculator (void)
{
	
}

//pulls in infix expression and starts the builder
//also does some basic error handling
int Calculator::evaluate (const std::string & infix)
{
	var_map.clear();
	if (var_check (infix))
	{
		parse_var();
	}
	
	Eval_Tree eval;
	
	Node * expr_tree = builder_.get_expression();
	
	expr_tree->accept(eval);
}

//uses the infix and builder to create each operator like the factories from assignment 3
//changed void to bool so error handling in evaluate works correctly
bool Calculator::parse_expr (const std::string & infix)
{
	std::istringstream input (infix);
	std::string token;
	
	builder_.start_expression ();
	while (!input.eof ())
	{
		input >> token;
		
		if (token == "+")
		{
			this->builder_.build_add_operator ();
		}
		else if (token == "-")
		{
			this->builder_.build_sub_operator ();
		}
		else if (token == "*")
		{
			this->builder_.build_mult_operator ();
		}
		else if (token == "/")
		{
			this->builder_.build_div_operator ();
		}
		else if (token == "%")
		{
			this->builder_.build_mod_operator ();
		}
		else if (token == "(")
		{
			this->builder_.build_open_parent ();
		}
		else if (token == ")")
		{
			this->builder_.build_close_parent ();
		}
		//this checks the token for its asci value and if its greater than or = to 65 which correlates to letters in asci
		else if (token[0] >= ASCII_ALPHA_VALUE)
		{
			//changed to do a number builder instead of var_builder
			//takes var_map and finds int value using token as key
			this->builder_.build_number(var_map[token]);
		}
		else
		{
			//puts token straight into integer and builds number node off it
			this->builder_.build_number(std::stoi(token));
		}
	}
	
	//connects all nodes together to form tree at the end.
	builder_.connect_expression();
	
	return true;
}

//checks input for variables and if true executes parse_var which will then prompt user to enter variable values
bool Calculator::var_check (const std::string & infix)
{
	std::istringstream input (infix);
	std::string token;
	while (!input.eof ())
	{
		input >> token;
		if (token[0] >= ASCII_ALPHA_VALUE)
		{
			//if token is an ascii value the token is inserted into the variable map
			//paired to 0 as a placeholder till user inputs actual variable
			var_map.insert(std::make_pair(token, 0));
		}
	}
	return true;
}

//executes after var_check to assign all variables in alphabetical order to int values
void Calculator::parse_var (void)
{
	std::map<std::string, int>::iterator iter;
	
	for (iter = var_map.begin(); iter != var_map.end(); iter++)
	{
		//prompts user for inputs in alphabetical order and stores into map using letter/word as key
		int var_input;
		std::cout << iter->first << " = ";
		std::cin >> var_input;
		iter->second = var_input;
	}
}
