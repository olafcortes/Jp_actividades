
#include <iostream>
#include <string>
#include <cmath>
using namespace std;
int pedir(int a,int b)
{
	cin >> a >> b;
	return 0;
}
float suma(float a, float b)
{
	float r;
	r = a + b;
	return r;
}
int multi(int a, int b)
{
	float r;
	r = a * b;
	return r;
}
int division(int a, int b)
{
	float r;
	r = a / b;
	return r;
}
int potencia(int a, int b)
{
	float r;
	r = pow( a, b);
	return r;
}
float raiz(float a)
{
	float r;
	r = sqrt(a);
	return r;
}

int main()
{
	int x, y;
	cout << "Bienvenido a la calculadora" << endl;
	cout << "Ingresa el prinmer numero" << endl;
	cin >> x;
	cout << "Ingresa el segundo" << endl;
	cin >> y;
	cout << "La suma de esos numero es  " << suma(x, y);
	cout << "La multiplicacion de esos numero es  " << multi(x, y);
	cout << "La division de esos numero es  " << division(x, y);
	cout << "La potencia de esos numero es  " << potencia(x, y);
	cout << "La raiz de esos numero es  " << raiz(x);

	cin.ignore();
	cin.get();
	return 0;


}