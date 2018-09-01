#include <iostream>
using namespace std;

int main()
{
	int num1=0, num2=0;
	cout << "Ingresa el Primer numero: \n>";
	cin >> num1;
	cout << "Ingresa el segundo numero: \n>";
	cin >> num2;
	if(num1 % num2 == 0)
	{ 
		cout << "\nEl numero 1 si es multiplo del numero 2.\n\n";
	}
	else
	{
		cout << "\nEl numero 1 no es multiplo del numero 2.\n\n";
	}
	system("PAUSE");
    return 0;
}