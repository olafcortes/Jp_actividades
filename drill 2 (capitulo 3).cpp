#include <iostream>
#include <string>
using namespace std;
int main()
{
	string nombre;
	cout << "hola usuario porfavor introdusca su nombre" << endl;
	cin >> nombre;
	cout << "hola "  << nombre << " Bienvenido a este programa "<< endl;
	cout << "Querido " << nombre << " lamentamos informarle que esta es la ultima linea de codigo por lo cual este finalizara cuando presiona enter " << endl;
	cin.ignore();
	cin.get();
	return 0;
}