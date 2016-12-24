/*
=======================
test bibliotek
grupa programistyczna "igristoje"
zrodlo.cpp
=======================
*/

#include <iostream>
#include "poleprostokata.h"

double la1, la2;

int main()
{
	std::cout << "Podaj dlugosc a: \n";
	std::cin >> la1;
	std::cout << "Podaj dlugosc b: \n";
	std::cin >> la2;
	std::cout << "\nPole prostokata o bokach:\na = " << la1 << "\nb = " << la2 << std::endl;
	std::cout << "wynosi " << polepro(la1, la2) << std::endl;
	return 0;
}
