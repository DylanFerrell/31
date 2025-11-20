
#include <iostream>


void fizzbuzz(int count)
{
	//iterates for the integar given 
	for (int i{ 1 }; i <= count; ++i)
	{	
		bool valid{true};
		while (valid) //while and if the integar is divisble by 3, 5, or 7 then print the accociated fizz buzz or pop
		{
			{
			std::cout << '\n'; //makes sure we are always on a new line 
			if (i % 3 == 0)
				std::cout << "fizz";
			}
			{
			if (i % 5 == 0)
				std::cout << "buzz";
			}
			{
			if (i % 7 == 0)
				std::cout << "pop";
			}
			{
			if (i % 3 != 0 && i % 5 != 0 && i % 7 != 0) //condition for printing raw number 
				std::cout << i;
				valid = false;
			}
			
		} 
	}
}
int main()
{
	fizzbuzz(150);

	return 0;
}