#include <string>
#include <vector>
#include <iostream>
#include <fstream>
using namespace std;
void crear_partida()
{
	ofstream(partida);
	int edad;
	string(heroe);
	cout << "Ingresa el nombre de a partida: ";
	getline(cin,heroe);

	partida.open(heroe.c_str(), ios::out);//crea un archivo nuevo 00
	if (partida.fail())
	{
		cout << "tu gfa no se abrio " << endl;
		exit(1);
	}
	partida << "miau" << endl;
	int vida=10;
	cout << "dime tu edad: " << endl; cin >> edad;
	partida << edad << endl;
	partida << vida << endl;
	partida.close();//cierra el archivo
}
int main()
{
	crear_partida();
	bool vivo = true;
	string respuesta;
	string morir;
	cout << "que quieres hacer " << endl;// comandos caminar buscar agarrar ver mapa ver inventario 

	cout << "historia chida  " << endl;

	while (vivo)
	{
		cin >> morir;
		

		//caragar charreton 
		if (morir == "si")
		{
			vivo = false;
		}
		else
		{
			cout << "no me mori " << endl;
		}
	}

	cout << "y le picas enter y se cierra" << endl;
	cin.ignore();
	cin.get();
	return 0;
}