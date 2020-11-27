#include <cassert>
#include <iostream>


typedef long long number_t;

number_t fibonacci_recursiv(number_t n)
{
	assert(n >= 1);

	if (n == 1)
	{
		return 0;
	}

	if (n == 2)
	{
		return 1;
	}

	return fibonacci_recursiv(n - 2) + fibonacci_recursiv(n - 1);
}

number_t fibonacci_iterativ(number_t n)
{
	assert(n >= 1);

	if (n == 1)
	{
		return 0;
	}

	if (n == 2)
	{
		return 1;
	}

	number_t fibo_n_minus_2 = 0;
	number_t fibo_n_minus_1 = 1;
	number_t fibo_n;

	for (number_t i = 3; i <= n; ++i)
	{
		fibo_n = fibo_n_minus_2 + fibo_n_minus_1;
		fibo_n_minus_2 = fibo_n_minus_1;
		fibo_n_minus_1 = fibo_n;
	}

	return fibo_n;
}


int main()
{
	number_t n;
	std::cout << "n = " << std::flush; std::cin >> n;

	for (number_t i = 1; i <= n; ++i)
	{
//		std::cout << "rekursiv fibonacci(" << i << ") = " << fibonacci_recursiv(i) << std::endl;
		std::cout << "iterativ fibonacci(" << i << ") = " << fibonacci_iterativ(i) << std::endl;
	}


	return 0;
}
