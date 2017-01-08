#include <iostream>
#include <conio.h>

using namespace std;

int in;
int element;
int *tablica ;
tablica = new int [in];       //tworzy tablice z miejscami [in], z tego co zrozumialem btw w visualu czepia się slowa tablica w tym wierszu

int main()
{
	cout << "Podaj liczbe elementow do zapisania w pamieci" << endl;
	cin >> in;

	for (int i = 0; i < in; i++)
	{
		cout << "Element do zapisania" << endl;      //pyta tyle razy ile jest miejsc + ile wybral user
		cin >> element [in];
		in++;
	}
	_getch();


	for (int i = 0; i < in; i++)
    {
        cout << "Twoje elementy to\t" << element[in] << endl;  //podaje wpisane elementy, in++ ma dzialac jako przesuwa do nastenego miejsca 
        in++;
    }
 _getch();
}
