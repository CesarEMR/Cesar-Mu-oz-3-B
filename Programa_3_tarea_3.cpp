/* Realice un programa que permita dar como salida la poblaci�n de dos pa�ses (a y b),
teniendo en cuenta para tal prop�sito lo siguiente:
* En el Primer A�o el Pa�s �a� tiene menos poblaci�n que el pa�s �b�
* Las Tazas de crecimiento de los pa�ses �a� y �b� son de 6% y 3% anuales respectivamente.
* Se debe dar como salidas las poblaciones desde el segundo a�o hasta que la poblaci�n de �a� 
exceda a la poblaci�n de �b�, adem�s la cantidad de a�os que transcurrieron para que esto sucediera */
#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	int year=2;
	float poblaA, poblaB;
	cout << "\nIngresa la poblacion del pais A: \n>";
	cin >> poblaA;
	cout << "\nIngresa la poblacion del pais B: \n>";
	cin >> poblaB;
	do
	{
		poblaA *= 1.06;
		cout << "\nPoblacion del pais A en el a�o " << year <<": " << poblaA;
		poblaB *= 1.03;
		cout << "\nPoblacion del pais B en el a�o " << year << ": " << poblaB << "\n";
		year++;
	} while (poblaA < poblaB);
	cout << "\nA�os transcurridos: " << year-2;
	getchar();
	getchar();
	return 0;
}