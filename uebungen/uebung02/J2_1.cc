#include <iostream>
#include <cmath>

void Nullstellen(double a, double b, double c)
{
	double d = b*b-4*a*c;
	if(d==0){std::cout<<"Es gibt eine Lösung bei x= " << (-b/(2*a)) << std::endl;}
	if(d<0) {std::cout<< "Diese Funktion hat keine Lösung" << std::endl;}
	else
	{
		std::cout<<"Es gibt zwei Lösungen, bei x= " << (-b+sqrt(d))/(2*a) << " und bei x= " << (-b-sqrt(d))/(2*a) << std::endl;
	}
}

int main(int argc, char** argv)
{
	double a;
	double b;
	double c;
	
	std::cout<< "a= " <<std::flush;
	std::cin>> a;
	std::cout<< "b= " <<std::flush;
	std::cin>> b;
	std::cout<< "c= " <<std::flush;
	std::cin>> c;
	
	if (a==b && b==0)
	{
		std::cout<< "Es gibt keine Eindeutige Lösung" << std::endl;
	}

	else
	{
		Nullstellen(a,b,c);
	}
}
