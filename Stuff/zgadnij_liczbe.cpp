#include <iostream>
#include <time.h>
#include <stdlib.h>
using namespace std;

int main()
{
	srand(time(NULL));
	int liczba=rand()%100+1, zgadywana;
	for (int i = 0; i < 10; i++)
	{
		system("CLS");
		cout << "Podejscie: " << i+1 << endl;
		cout << "Zgadnij liczbe: ";
		cin >> zgadywana;
		if (zgadywana==liczba)
		{
			cout << "Udalo ci sie odgadnac!" << endl;
			break;
		}
		else
		{
			cout << "Niestety...\n";
			if (zgadywana>liczba)	cout << "Musisz podac mniejsza\n";
		}
		else if (i==10)
			cout << "Nie udalo ci sie odgadnac liczby, byla to liczba: " << liczba << endl;
		else
			cout << "Musisz podac wieksza\n";	
		}
		system("PAUSE");	
	}
	return 0;	
}
