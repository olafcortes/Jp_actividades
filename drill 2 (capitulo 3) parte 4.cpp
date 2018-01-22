#include <iostream>
#include <string>
using namespace std;
int main()
{
	string nombre;
	string amigo;
	char genero
	cout << "hola usuario porfavor introdusca su nombre" << endl;
	cin >> nombre;
	cout << "hola "  << nombre << " Bienvenido a este programa "<< endl;
	cout << "Disculpe " << nombre << " como se siente hoy?" << endl;
	cout << nombre<< " Ya comio sus alimentos del desayuno?" << endl;
	cout << "Yo digo que prepare carnita asada o no "<<nombre << endl;
	cout << "la alarma de esta tarde sonara a las 6:30 quedo entendido? "<<nombre<<" ni-chan" << endl;
	cout << "escribe el nombre de un amigo que tengas" << endl;
	cin >> amigo;
	cout << "Es hombre(h) o mujer(m)? " << endl;
	cin >> genero;
	if (genero == m)
	{
		cout << "porfavor dile a ella que me tiene que llamar"<<endl;
	}
	else
	{
		if (genero == h) 
		{
			cout << "porfavor dile a el que me tiene que llamar" << endl;
		}
		else
		{
			cout << "Seguro que es uno de los 2 generos?" << endl;
		}
	}
	cout << "Recuerda que tienes un pendiente con "<<amigo << endl;
	cout << "Querido " << nombre << " lamentamos informarle que esta es la ultima linea de codigo por lo cual este finalizara cuando presiona enter " << endl;

	cin.ignore();
	cin.get();
	return 0;
}