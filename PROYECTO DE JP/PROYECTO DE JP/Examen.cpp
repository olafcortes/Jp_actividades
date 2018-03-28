#include <string>
#include <vector>
#include <iostream>
#include <fstream>
#include "cuarto.h"
#include "jugador.h"
using namespace std;//falta crear 
void crear_partida()
{
	cin.ignore();
	ofstream(partida);
	int edad;
	string heroe;
	cout << "Ingresa el nombre de a partida: ";
	getline(cin,heroe);

	partida.open(heroe.c_str(), ios::out);//crea un archivo nuevo 00
	if (partida.fail())
	{
		cout << "no se pudo crear/encontrar el archivo " << endl;
		
		exit(1);
	}
	
	int vida=10;
	cout << "dime tu edad: " << endl; cin >> edad;
	partida << edad << endl;
	partida <<"vida"<< vida << endl;
	partida.close();//cierra el archivo
}
void cargar_partida()
{
	cin.ignore();
	string heroe;
	ifstream(partida);
	cout<<"Que nombre tiene la partida guardada? "<<endl;
	getline(cin,heroe);
	partida.open(heroe.c_str(), ios::in);
	if (partida.fail())
	{
		cout << "no se pudo cargar la partida " << endl;
		exit(1);
	}
}
int main()
{
	string pregunta;
	cout << "Quieres crear una partida? " << endl;
	cin >> pregunta;
	if (pregunta=="si")
	{
		crear_partida();
	}
	else 
	if (pregunta=="no")
	{
		cout << "Entonces vamos a cargar una partida" << endl;
		cargar_partida();
	}
	bool vivo = true;
	int cuartos[9] = {(3,1),(4,1),(1,2),(2,2),(3,2),(1,3),(2,3),(3,3),(1,4)};
	int posicion_actual = cuartos[8];
	string respuesta;
	string accion;
	cout << "historia chida  " << endl;
	cout << "que quieres hacer " << endl;// comandos caminar buscar agarrar ver mapa ver inventario 
	while (vivo)
	{
		cin >> accion;
		

		//caragar charreton 
		if (accion == "morir")
		{
			vivo = false;
		}
		else
		{
			cout << posicion_actual << endl;
			cout << "no me mori " << endl;
			//cout<<"tus PV son: "<<vida<<endl;//renglon
		}
	}

	cout << "te moriste picale enter para cerrar el juego cierra" << endl;
	cin.ignore();
	cin.get();
	return 0;
}