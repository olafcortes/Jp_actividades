#include <iostream>
#include <string>
using namespace std;
int numeros(int a, int b)
{
	
	if (a<b) 
	{
		cout << a << endl;
		cout << b << endl;
		
	}
	else
	{
		cout << b << endl;
		cout << a << endl;
	}

	return 0;
};

int main()
{
	int a;
	int b;
	int fin;
	cout << "Escoge  numeros a ordenar ordenar " << endl;
	cout << "Escribe el primero " << endl;
	cin >> a;
	cout << "Escribe el segundo " << endl;
	cin >> b;
	int arreglo[2] = { a,b };
	
	cout << "tus numeros ordenados son: " << endl;
	numeros(a,b);
	cout<<numeros<<endl;
	cout << "Presiona enter para cerrar" << endl;
	cin.ignore();
	cin.get();
	return 0;
}