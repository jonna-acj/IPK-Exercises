#include <cmath>
#include <iostream>


bool Mitternachtsformel(double a, double b, double c, double& n1, double& n2)
{
	if (a == 0)
	{
		if (b == 0)
		{
			return false;
		}

		// Lineare Gleichung
		//
		n1 = n2 = -(c/b);
		return true;
	}

	double x = b*b - 4*a*c;
	if (x < 0)
	{
		// Komplexe Lösung
		//
		return false;
	}

	double sqrtx = sqrt(x);

	// Nullstellen
	//
	n1 = (-b - sqrtx) / (2*a);
	n2 = (-b + sqrtx) / (2*a);

	return true;
}


int main()
{
	double a, b, c, n1, n2;
	std::cout << "a = " << std::flush; std::cin >> a;
	std::cout << "b = " << std::flush; std::cin >> b;
	std::cout << "c = " << std::flush; std::cin >> c;

	std::cout << "Gleichung " << a << "*x^2 + " << b << "*x" << " + " << c << " = 0  ->  ";

	if (!Mitternachtsformel(a, b, c, n1, n2))
	{
		if (a == 0.0 && b == 0.0)
		{
			std::cout << "Keine eindeutige Loesung" << std::endl;
			return 2;
		}

		std::cout << "Loesung ist komplex" << std::endl;
		return 1;
	}

	std::cout << "Nullstellen (" << n1 << ", " << n2 << ")" << std::endl;
	return 0;
}
