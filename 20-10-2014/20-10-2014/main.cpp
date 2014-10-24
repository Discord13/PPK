

#include <iostream>
#include <math.h>

using namespace std;

int silnia(int);
bool pierwsza(int);
void choinka(int);
void tabliczka();
int fib(int);
void menu();

int main()
{
	menu();
	return 0;
}

int silnia(int n)
{
	for (int i = n - 1; i != 0; i--)
		n *= i;
	return n;
}

bool pierwsza(int n)
{
	int l = 0;
	for (int i = 2; i < n; i++)
	{
		if (n%i == 0)
			l++;
	}
	if (!l)
		return true;
	else
		return false;
}

void choinka(int h)
{
	for (int i = 1; i <= h; i++)
	{
		for (int j = h - i; j != 0; j--)
			cout << " ";
		for (int k = 2 * i - 1; k != 0; k--)
			cout << "*";
		cout << endl;
	}
}

void tabliczka()
{
	for (int i = 1; i <= 10; i++)
	{
		for (int j = 1; j <= 10; j++)
		{
			cout.width(6);
			cout << left << i*j << " ";
		}
		cout << endl;
	}
}

int fib(int n)
{
	if (n == 1 || n == 2)
		return 1;
	else
	{
		int fib1 = 1;
		int fib2 = 1;
		int fib3 = 0;
		for (int i = 3; i <= n; i++)
		{
			fib3 = fib1 + fib2;
			fib1 = fib2;
			fib2 = fib3;
		}
		return fib3;
	}
}

void menu()
{
	int n = 0;
	while (true)
	{
		system("CLS");
		cout << "Wybierz polecenie: " << endl
			<< "1. Silnia" << endl
			<< "2. Liczba pierwsza" << endl
			<< "3. Choinka" << endl
			<< "4. Tabliczka mnozenia" << endl
			<< "5. Ciag Fibonacciego" << endl
			<< "6. Wyjscie z programu" << endl
			<< "Co rozkazesz, Panie?: ";
		int wybor = 0;
		cin >> wybor;
		cout << endl;
		switch (wybor)
		{
		case 1:
		{
				  cout << "Silnia - podaj n: ";
				  cin >> n;
				  cout << "Silnia z " << n << " wynosi: " << silnia(n);
				  cout << endl << endl;
				  system("PAUSE");
				  break;
		}
		case 2:
		{
				  cout << "Liczba pierwsza - podaj n: ";
				  cin >> n;
				  if (pierwsza(n))
					  cout << "Liczba " << n << " jest liczba pierwsza";
				  else
					  cout << "Liczba " << n << " nie jest liczba pierwsza";
				  cout << endl << endl;
				  system("PAUSE");
				  break;
		}
		case 3:
		{
				  cout << "Choinka - podaj wysokosc: ";
				  cin >> n;
				  choinka(n);
				  cout << endl << endl;
				  system("PAUSE");
				  break;
		}
		case 4:
		{
				  cout << "Tabliczka mnozenia 10x10: " << endl;
				  tabliczka();
				  cout << endl << endl;
				  system("PAUSE");
				  break;
		}
		case 5:
		{
				  cout << "Fibonacci - podaj n: ";
				  cin >> n;
				  cout << "Element " << n << " ciagu fibonacciego wynosi: " << fib(n);
				  cout << endl << endl;
				  system("PAUSE");
				  break;
		}
		case 6:
		{
				  exit(0);
		}
		default:
		{
				   cout << "Nie kak da!" << endl << endl;
				   system("PAUSE");
		}
		}
	}
}

