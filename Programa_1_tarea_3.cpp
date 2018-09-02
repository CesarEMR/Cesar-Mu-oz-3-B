/*Leer un numero y mostrar el factorial del numero, mismo que se describe con el símbolo n!ejemplo:
5!y se obtiene multiplicando todos los números de el 1 al numero = 1 * 2 * 3 * 4 * 5 = 120.
No probar con números mayores a 19.*/
#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	int num, suma = 1;
	cout << "\nIngresa un numero: \n>";
	cin >> num;
	for (int i = 1; i<=num ; i++)
	{
		suma *= i;
	}
	cout << "Factorial: " << suma;
	getchar();
	getchar();
	return 0;
}