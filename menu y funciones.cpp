#include <iostream>
#include <string>
#include <time.h>
#include <stdlib.h>
#include <math.h>
using namespace std;

int menu();
float funcion1(int x);
void tabularf1_hasta(int x);
float funcion2(int x, int y);
void tabularf2_hasta(int limx, int limy);
float funcion3(int x);
void tabularf3_hasta(int x);


int main()
{
	int op;
	op = menu();
	if (op == 1)
	{
		float x;
		cout << "Ingresa el valor maximo de x: \n>";
		cin >> x;
		tabularf1_hasta(x);
	}
	else if (op == 2)
	{
		tabularf2_hasta(5, 5);
	}
	else if (op == 3)
	{
		int x, f;
		cout << "Ingresa el valor maximo de x: \n>";
		cin >> x;
		tabularf3_hasta(x);
	}

	cin.get();
	cin.get();
	return 0;
}

int menu()
{
	int opcion = 0;

	cout << "1.- f(x) = 3√2x^2 / 2x - 3.\n";
	cout << "2.- f(x,y) = 2xy - 3y.\n";
	cout << "3.- si x>0 2x^3 y si x<=0 3x^2.\n";
	cout << "Ingresa el numero de la funcion: \n>";
	cin >> opcion;
	if (!(opcion == 1 || opcion == 2 || opcion == 3))
	{
		do
		{
			cout << "Ingresa una opcion valida 1,2 o 3: \n>";
			cin >> opcion;
		} while (!(opcion == 1 || opcion == 2 || opcion == 3));
	}
	return opcion;
}

float funcion1(int x)
{
	float y;
	y = pow(2 * (float)x * (float)x, 1 / 3) / (2 * (float)x - 3);
	return y;
}

void tabularf1_hasta(int x)
{
	cout << "| x |  f(x)\n";
	for (int i = 0; i <= x; i++)
	{
		cout << "| " << i << " | => " << funcion1(i) << " \n";
	}
}

float funcion2(int x, int y)
{
	float f;
	f = (2 * (float)x * (float)y) - (3 * (float)y);
	return f;
}

void tabularf2_hasta(int limx, int limy)
{
	cout << " x | y | f(x,y) \n";
	for (int y = 1; y <= limy; y++)
	{
		for (int x = 1; x <= limy; x++)
		{
			cout << " " << x << " | " << y << " | " << funcion2(x, y) << "\n";
		}
	}
}
float funcion3(int x)
{
	float f;
	if ((float)x > 0)
	{
		f = 2 * ((float)x*(float)x*(float)x);
	}
	else
	{
		f = 2 * ((float)x*(float)x);
	}
	return f;
}

void tabularf3_hasta(int x)
{
	cout << "| x |  f(x)\n";
	for (int i = 0; i <= x; i++)
	{
		cout << "| " << i << " | => " << funcion3(i) << " \n";
	}
}
