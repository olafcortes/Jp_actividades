#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	int numero, cantidad, resultado,vsumado=-1;
	cout << "que numero quieres multiplicar? " << endl; cin >> numero;
	cout << "por cuanto lo vas a multiplicar? " << endl; cin >> cantidad;
	while (vsumado == cantidad);
	{
		resultado = numero + numero;

		cout <<"El resultado de su multiplicacion es: "<< resultado << endl;
		vsumado = vsumado ++;
	}
	cin.ignore();
	cout << "Presiona enter para salir" << endl;
	cin.get();
}