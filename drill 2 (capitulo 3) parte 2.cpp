#include <iostream>
#include <string>
using namespace std;
int main()
{
	string nombre;
	cout << "hola usuario porfavor introdusca su nombre" << endl;
	cin >> nombre;
	cout << "hola "  << nombre << " Bienvenido a este programa "<< endl;
	cout << "Disculpe " << nombre << " como se siente hoy?" << endl;
	cout << nombre<< " Ya comio sus alimentos del desayuno?" << endl;
	cout << "Yo digo que prepare carnita asada o no "<<nombre << endl;
	cout << "la alarma de esta tarde sonara a las 6:30 quedo entendido? "<<nombre<<" ni-chan" << endl;
	cout << "Querido " << nombre << " lamentamos informarle que esta es la ultima linea de codigo por lo cual este finalizara cuando presiona enter " << endl;

	cin.ignore();
	cin.get();
	return 0;
}