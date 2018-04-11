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
	//***************************************************************************************************************
	
	
	string txt=".txt";
	heroe + txt;
	
	//***************************************************************************************************************
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
		cin.ignore();
		cin.get();
		exit(1);
	}
}
void historia_no_chida()
{

}
void historia_chida()
{
	 
}
void menuayuda()
{
	
	cout << "Las acciones que se pueden realizar en el juego se indican por comandos de 2 palabras y son las siguientes:" << endl
	<< "ir---sirve para moverte durante el juego indicandole la direccion en la que te quieres mover " << endl
	<< "por ejemplo ir arriba /n ir abajo /n ir izquierda /n ir derecha" << endl
	<< "meter---sirve para agregar objetos siempre y cuando el objeto se encuentre en el mismo cuarto(no todo se puede meter)" << endl
	<< "ver---sirve para ver distintas cosas entre ellas el inventario" << endl
	<< "usar---utilizalo para interactuar con diferentes objetos " << endl;
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
	//int cuartos[9] = {(3,1),(4,1),(1,2),(2,2),(3,2),(1,3),(2,3),(3,3),(1,4)};
	//int posicion_actual = cuartos[8];
	string respuesta;
	string accion;
	int posicionactual = 9;
	cout << "historia chida  " << endl;
	cout << "que quieres hacer " << endl;// comandos caminar buscar agarrar ver mapa etc
	while (vivo)
	{
		cin >> accion;
		

		
		if (accion == "morir")
		{
			vivo = false;
		}
		else if(accion=="usar ayuda")
		{
			menuayuda();
		}
		else if (accion=="ver cuarto")
		{
			//checa la posicion actual y suelta la descripcion que esta en el archivo 
		}
		else
		{
			cout << "necesitas ayuda? escribe usar ayuda" << endl;
			
			cout << "no me mori " << endl;
			//cout<<"tus PV son: "<<vida<<endl;//renglon
		}
	}

	cout << "te moriste de alguna forma picale enter para cerrar el juego cierra" << endl;
	cin.ignore();
	cin.get();
	return 0;
}