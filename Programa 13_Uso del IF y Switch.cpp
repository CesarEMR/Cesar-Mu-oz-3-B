#include <iostream>
using namespace std;

int main()
{
	int km = 0, tiempo_estancia = 0;
	cout << "Ingresa el tiempo de estancia en dias: \n>";
	cin >> tiempo_estancia;
	cout << "Ingresa los kilometros: \n>";
	cin >> km;
	if (km > 800 && tiempo_estancia > 7)
	{
		cout << "Costo: $" << (km * 0.17)*0.75 << "\n>";
	}
	else
	{
		cout << "Costo: $" << (km * 0.17) << "\n>";
	}
	system("PAUSE");
    return 0;
}
