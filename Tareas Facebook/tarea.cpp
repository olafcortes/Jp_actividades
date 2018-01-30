#include <iostream>
#include <string>
using namespace std;
int area;

int perimetro;
int operaciones(int a, int b, int& area, int& perimetro)
{
	perimetro = (a * 2) + (b * 2);
	area = a*b;
	return 0;
};
int main()
{
	int a;
	int b;
	
	cout << "ingrese el valor del largo del rectangulo " << endl;
	cin >> a;
	cout << "ingrese el valor del ancho del rectangulo " << endl;
	cin >> b;
	operaciones( a, b, area, perimetro);
	cout << "El perimetro de su rectangulo es: "<<perimetro <<endl;
	cout << "El area de su rectangulo es: "<< area << endl;
	cin.ignore();
	cout << "Presiona enter para cerrar" << endl;
	cin.get();

	return 0;
}
