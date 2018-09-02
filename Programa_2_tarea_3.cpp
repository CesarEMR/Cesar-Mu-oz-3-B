/*Leer un numero base y una potencia y mediante ciclos obtener el resultado de 
elevar el numero base a la potencia indicada. 
Ejemplo base=3, potencia = 4, el resultado es 3^4, es decir = 3 x 3 x 3 x 3=81 */
#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	float num,suma=1;
	int potencia;
	cout << "\nIngresa un numero: \n>";
	cin >> num;
	cout << "\nIngresa una potencia: \n>";
	cin >> potencia;
	for (int i = 1; i<=potencia ; i++)
	{
		suma *= num;
	}
	cout << "Resultado: " << suma;
	getchar();
	getchar();
	return 0;
}