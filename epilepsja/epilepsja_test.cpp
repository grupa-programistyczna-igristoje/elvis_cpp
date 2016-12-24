/*=====================
test nie wiem rysowania
grupa programistyczna "igristoje"
kapi ochmanski
main.cpp
=======================*/
#include <string>		  // wiadomo 
#include <iostream>       // wiadomo też
#include <thread>         // std::this_thread::sleep_for
#include <chrono>         // std::chrono::seconds

std::string jeden, dwa, trzy;

void ladowanie(long long k, long long l, long long m)
{
	for (int i = 0; i < l; i++)
	{
		jeden = jeden + "|";
		dwa = dwa + "/";
		trzy = trzy + "\\";
	}
	for (int i = 0; i < k; i++)
	{
		std::cout << "\r[>" << jeden << "<]";
		std::this_thread::sleep_for(std::chrono::milliseconds(m));
		std::cout << "\r[>" << dwa << "<]";
		std::this_thread::sleep_for(std::chrono::milliseconds(m));
		std::cout << "\r[>" << trzy << "<]";
		std::this_thread::sleep_for(std::chrono::milliseconds(m));
		//std::cout << "\r"
	}
	//std::cout << "\r\r\r";
	jeden, dwa, trzy = "";
}
int main()
{
	long long jd, ii, ms;
	std::cout << "jak dlugo?\n";
	std::cin >> jd;
	std::cout << "ile?(wartosc powyzej 116 daje fajne efekty\n";
	std::cin >> ii;
	std::cout << "jak szybko?(wartosc w milisekundach)\n";
	std::cin >> ms;
	ladowanie(jd, ii, ms);
	std::cout << "\n\n\t";
	//ile(10);
	return 0;
}
