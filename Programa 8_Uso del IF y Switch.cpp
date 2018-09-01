#include <iostream>
using namespace std;

int main()
{
	int num1=0;
	cout << "Ingresa un numero entero de 5 digitos: \n>";
	cin >> num1;

	if (num1 > 9999 && num1 < 100000)
	{
		cout << num1 / 10000 << " ";
		cout << (num1 % 10000) / 1000 << " ";
		cout << ((num1 % 10000) % 1000) / 100 << " ";
		cout << (((num1 % 10000) % 1000) % 100) / 10 << " ";
		cout << ((((num1 % 10000) % 1000) % 100) % 100) % 10 << " \n";
	}
	else
	{
		cout << "Error!\n>";
	}
	system("PAUSE");
    return 0;
}