// Honor Pledge:
//
// I pledge that I have neither given nor received any help
// on this assignment.

Square_Root_Command::Square_Root_Command (void)
{
	
}

int evaluate (int n1)
{
	//checks if n1 is 1 or 0 to return the same since square root of 1 and 0 is 0
	if (n1 == 0 || n1 == 1)
	{
		return n1
	}
	
	//increments through each number starting from 1 to find which number is equal or greater than number
	//doesnt calculate decimal values, only roots that are whole ints or less if not equal
	int i = 1;
	int result = 1;
	
	while (result <= n1)
	{
		i++;
		result = i * i;
	}
	return i - 1;
}

Square_Root_Command::~Square_Root_Command (void)
{
	
}