#include <iostream>

bool even(int n)
{
	return n % 2 == 0;
}


void collatz(int number)
{
	int n = number;
	do
	{
		std::cout << "number = " << n << std::endl;

		if (even(n))
		{
			n = n / 2;
		}
		else
		{
			n = n * 3 + 1;
		}

	} while (n != 1 && n != 0 && n != -1 &&	n != -5 && n != -17);

	std::cout << "collatz(" << number << ") = " << n << std::endl;
}


int main()
{
	int number;
	std::cout << "number = " << std::flush; std::cin >> number;

	collatz(number);

	return 0;
}
