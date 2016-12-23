/*=====================
gra konsolowa unikanie
grupa programistyczna "igristoje"
kapi ochmanski 2016
main.cpp
=======================*/
#include <iostream> //wiadomo
#include <string> //string
#include "siatka.h" //siatka
#include <algorithm> //swap, replace, fill


int main()
{
	do
	{
		int arg1, arg2;
		std::cout << "\n\n\nNapisz liczby\nnajlepiej zeby byly one przeciwnych znakow\n\nodstep: ";
		std::cin >> arg1;
		std::cout << "parametr: ";
		std::cin >> arg2;
		rys_siatka(false, arg1, arg2); //pierwszy argument aktywuje wyœwietlanie informacji o mapie, drugi okreœla odstêp, ostatni to parametr
		std::cin.ignore(1);

	} while (true);

	//printf("%s\n", siatka[SZEROKOSC][7]);

	/*printf("%s ", siatka[0][0]);
	std::cin.ignore(1);
	siatka[0][0] = '0';
	printf("%s ", gdzie_siatka);
	std::cin.ignore(1);
	printf("%c ", siatka[0][0]); */

	/*
	std::cout << gdzie_siatka;
	std::cin.ignore(10);
	std::cout << gdzie_siatka;
	*/

	//rys_siatka();

	return 0;
}