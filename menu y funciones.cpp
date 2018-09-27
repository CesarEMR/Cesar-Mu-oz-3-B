#include "stdafx.h"
#include <iostream>
#include <string>
#include <time.h>
#include <stdlib.h>
#include <math.h>
using namespace std;

int menu();
int main()
{
	int op;
	op = menu();
	if (op == 1)
	{
		float x, y;
		cout << "Ingresa el valor maximo de x: \n>";
		cin >> x;
		cout << "| x |  f(x)\n";
		for(int i=0; i<=x; i++)
		{
			y = (2.0 / 3.0 * (2.0 * ((float)i*(float)i))) / (2.0 * ((float)i)) - 3.0;
			cout << "| " << i << " | => " << y << " \n";
		}

	}
	else if (op == 2)
	{
		int x, y,f;
		cout << " x | y | f(x,y) \n";
		for(y = 1; y <= 5; y++)
		{
			for (int x = 1; x <= 5; x++)
			{
				f = 2 * x*y - 3 * y;
				cout << " " << x << " | " << y << " | " << f << "\n";
			}
		}

	}
	else if (op == 3)
	{
		int x,f;
		cout << "Ingresa el valor maximo de x: \n>";
		cin >> x;
		if(x>0)
		{
			cout << "| x |  f(x)\n";
			for (int i = 0; i <= x; i++)
			{
				f = 2 * (i*i*i);
				cout << "| " << i << " | => " << f << " \n";
			}
		}
		else
		{
			cout << "| x  |   f(x)\n";
			for (int i = x; i <= 0; i++)
			{
				f = 2 * (i*i);
				cout << "| " << i << " | => " << f << " \n";
			}
		}

	}
	
	cin.get();
	cin.get();
	return 0;
}

int menu()
{
	int opcion = 0;
	
	cout << "1.- f(x) = 3v2x^2 / 2x - 3.\n";
	cout << "2.- f(x,y) = 2xy - 3y.\n";
	cout << "3.- si x>0 2x^3 y si x<=0 3x^2.\n";
	cout << "Ingresa el numero de la funcion: \n>";
	cin >> opcion;
	if(!(opcion==1 || opcion == 2 || opcion == 3))
	{
		do
		{
			cout << "Ingresa una opcion valida 1,2 o 3: \n>";
			cin >> opcion;
		}
		while (!(opcion == 1 || opcion == 2 || opcion == 3));
	}
	return opcion;
}