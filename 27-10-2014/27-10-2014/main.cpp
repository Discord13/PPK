#include <iostream>
#include <time.h>
#include <algorithm>

using namespace std;

const int quantity = 100;
//const int range = 10;
const int myMin = 20;
const int myMax = 50;
const int tableSize = 4;

int tab[quantity];
int tab2[tableSize][tableSize];

void menu();
void fill123();
void showTab();
void fillrand();
void swapMin();
void sortCho();
void mulTable();
void mulSeeSaw();

int main()
{
	srand(time(NULL));
	menu();
	return 0;
}

void menu()
{
	system("CLS");
	cout << "Co robic, jak zyc?" << endl
		<< "TABLICA JEDNOWYMIAROWA:" << endl
		<< "1. Wypelnianie 1 2 3" << endl
		<< "2. Wyswietlnanie tablicy" << endl
		<< "3. Wypelnianie tablicy losowymi" << endl
		<< "4. Zamien element minimalny z elementem pierwszym" << endl
		<< "5. Sortowanie przez wybieranie" << endl
		<< "TABLICA DWUWYMIAROWA:" << endl
		<< "6. Tabliczka mnozenia" << endl
		<< "7. Tabliczka mnozenia tam i nazad" << endl
		<< "666. Wyjscie z programu" << endl;
	int wybor = 0;
	cin >> wybor;
	switch (wybor)
	{
	case 1:
	{
			  fill123();
			  menu();
	}
	case 2:
	{
			  showTab();
			  menu();
	}
	case 3:
	{
			  fillrand();
			  menu();
	}
	case 4:
	{
			  swapMin();
			  menu();
	}
	case 5:
	{
			  sortCho();
			  menu();
	}
	case 6:
	{
			  mulTable();
			  menu();
	}
	case 7:
	{
			  mulSeeSaw();
			  menu();
	}
	case 666:
	{
				exit(0);
	}
	default:
	{
			   cout << "Nie da rady" << endl;
			   system("PAUSE");
			   menu();
	}
	}
}

void fill123()
{
	for (int i = 0; i<quantity; i++)
		tab[i] = i + 1;
	system("PAUSE");
}

void showTab()
{
	for (int i = 0; i<quantity; i++)
		cout << tab[i] << endl;
	system("PAUSE");
}

void fillrand()
{
	for (int i = 0; i<quantity; i++)
		tab[i] = rand() % (myMax - myMin) + myMin;
	system("PAUSE");
}

void swapMin()
{
	int nMin = 0;
	for (int i = 1; i<quantity; i++)
	{
		if (tab[i]<tab[nMin])
			nMin = i;
	}
	swap(tab[0], tab[nMin]);
	system("PAUSE");
}

void sortCho()
{
	int nMin = 0;
	for (int i = 0; i<quantity; i++)
	{
		nMin = i;
		for (int j = i + 1; j < quantity; j++)
		{
			if (tab[j] < tab[nMin])
				nMin = j;
		}
		swap(tab[i], tab[nMin]);
	}
	system("PAUSE");
}

void mulTable()
{
	for (int i = 0; i < tableSize; i++)
	{
		for (int j = 0; j < tableSize; j++)
			tab2[i][j] = (i+1)*(j+1);
	}
	for (int i = 0; i < tableSize; i++)
	{
		for (int j = 0; j < tableSize; j++)
		{
			cout.width(4);
			cout << right << tab2[i][j] << " ";
		}
		cout << endl;
	}
	system("PAUSE");
}

void mulSeeSaw()
{
	for (int i = 0; i < tableSize; i++)
	{
		for (int j = 0; j < tableSize; j++)
		{
			if (i==0 && i%2==0)
				tab2[i][j] = (i + 1)*(j + 1);
			else
				tab2[i][tableSize-j] = (i + 1)*(j + 1);
		}
	}
	for (int i = 0; i < tableSize; i++)
	{
		for (int j = 0; j < tableSize; j++)
		{
			cout.width(4);
			cout << right << tab2[i][j] << " ";
		}
		cout << endl;
	}
	system("PAUSE");
}