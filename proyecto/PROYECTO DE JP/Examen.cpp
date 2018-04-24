#include "cuarto.h"
#include "jugador.h"
#include "includes.h"

struct cuarto
{
	int arriba;
	int abajo;
	int izquierda;
	int derecha;
	bool obj;
	bool explorado;
	string descripcion;
	int numcuarto;
	bool totem;
};

void crear_partida(int &edad)
{
	cin.ignore();
	ofstream(partida);
	
	string heroe;
	string txt=".txt";
	cout << "Ingresa el nombre de a partida: ";
	getline(cin,heroe);
	heroe =heroe + txt;
	partida.open(heroe.c_str(), ios::out);//crea un archivo nuevo 00
	if (partida.fail())
	{
		cout << "no se pudo crear/encontrar el archivo " << endl;
		cin.ignore();
		cin.get();
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
	cout << "----------------------------------------------------------------------------------" << endl;
	cout << "Las acciones que se pueden realizar en el juego se indican por comandos de 2 palabras si te quieres mover ejemplo:" << endl
	<< "ir---sirve para moverte durante el juego indicandole la direccion en la que te quieres mover " << endl
	<< "y despues la direccion a donde te quieres mover arriba /n abajo /n izquierda /n derecha" << endl
	<< "resolver---sirve para abrir puertas si es que estan bloqueadas" << endl
	<< "ver---investiga el cuarto en el que estas " << endl
	<< "usar---utilizalo para interactuar con diferentes objetos " << endl;
}

void crearcuartos(unordered_map<int, cuarto>& Cuartos)
{
	cuarto uno;
	uno.numcuarto = 1;
	uno.obj = 1;
	uno.explorado = 0;
	uno.descripcion = "el cuarto 1";
	uno.totem = false;
	Cuartos[uno.numcuarto] = uno; //Cuartos (el mapa) [uno.numcuarto] (llave, esta accediendo al objeto "num" del "uno")

	cuarto dos;
	dos.numcuarto = 2;
	dos.obj = 0;
	dos.explorado = 0;
	dos.descripcion = "el cuarto 2";
	dos.totem = true;
	Cuartos[dos.numcuarto] = dos;

	cuarto tres;
	tres.numcuarto = 3;
	tres.obj = 1;
	tres.explorado = 0;
	tres.descripcion = "el cuarto 3";
	tres.totem = false;
	Cuartos[tres.numcuarto] = tres;

	cuarto cuatro;
	cuatro.numcuarto = 4;
	cuatro.obj = 0;
	cuatro.explorado = 0;
	cuatro.descripcion = "el cuarto 4";
	cuatro.totem = false;
	Cuartos[cuatro.numcuarto] = cuatro;

	cuarto cinco;
	cinco.numcuarto = 5;
	cinco.obj = 0;
	cinco.explorado = 0;
	cinco.descripcion = "el cuarto 5";
	cinco.totem = false;
	Cuartos[cinco.numcuarto] = cinco;

	cuarto seis;
	seis.numcuarto = 6;
	seis.obj = 0;
	seis.explorado = 0;
	seis.descripcion = "el cuarto 6";
	seis.totem = true;
	Cuartos[seis.numcuarto] = seis;

	cuarto siete;
	siete.numcuarto = 7;
	siete.obj = 1;
	siete.explorado = 0;
	siete.descripcion = "el cuarto 7";
	siete.totem = false;
	Cuartos[siete.numcuarto] = siete;

	cuarto ocho;
	ocho.numcuarto = 8;
	ocho.obj = 1;
	ocho.explorado = 0;
	ocho.descripcion = "el cuarto 8";
	ocho.totem = false;
	Cuartos[ocho.numcuarto] = ocho;

	cuarto nueve;
	nueve.numcuarto = 9;
	nueve.obj = 1;
	nueve.explorado = 1;
	nueve.descripcion = "el cuarto 9";
	nueve.totem = false;
	Cuartos[nueve.numcuarto] = nueve;

	//Concatenar cuartos
	//Mapa con la llave "numero de cuarto de 'uno'", a su objeto abajo se le va a asignar el numero de cuarto de cinco
	(Cuartos[uno.numcuarto]).arriba = 0;
	(Cuartos[uno.numcuarto]).abajo = cinco.numcuarto;
	(Cuartos[uno.numcuarto]).izquierda = 0;
	(Cuartos[uno.numcuarto]).derecha = dos.numcuarto;
	//salidas cuarto 2
	(Cuartos[dos.numcuarto]).arriba = 0;
	(Cuartos[dos.numcuarto]).abajo = 0;
	(Cuartos[dos.numcuarto]).izquierda = uno.numcuarto;
	(Cuartos[dos.numcuarto]).derecha = 0;
	//salidas cuarto 3
	(Cuartos[tres.numcuarto]).arriba = 0;
	(Cuartos[tres.numcuarto]).abajo = seis.numcuarto;
	(Cuartos[tres.numcuarto]).izquierda = 0;
	(Cuartos[tres.numcuarto]).derecha = 0;
	//salidas cuarto 4
	(Cuartos[cuatro.numcuarto]).arriba = 0;
	(Cuartos[cuatro.numcuarto]).abajo = siete.numcuarto;
	(Cuartos[cuatro.numcuarto]).izquierda = 0;
	(Cuartos[cuatro.numcuarto]).derecha = cinco.numcuarto;
	//salidas cuarto 5
	(Cuartos[cinco.numcuarto]).arriba = uno.numcuarto;
	(Cuartos[cinco.numcuarto]).abajo = ocho.numcuarto;
	(Cuartos[cinco.numcuarto]).izquierda = cuatro.numcuarto;
	(Cuartos[cinco.numcuarto]).derecha = 0;
	//salidas cuarto 6
	(Cuartos[seis.numcuarto]).arriba = tres.numcuarto;
	(Cuartos[seis.numcuarto]).abajo = seis.numcuarto;
	(Cuartos[seis.numcuarto]).izquierda = 0;
	(Cuartos[seis.numcuarto]).derecha = siete.numcuarto;
	//salidas cuarto 7
	(Cuartos[siete.numcuarto]).arriba = cuatro.numcuarto;
	(Cuartos[siete.numcuarto]).abajo = 0;
	(Cuartos[siete.numcuarto]).izquierda = seis.numcuarto;
	(Cuartos[siete.numcuarto]).derecha = 0;
	//salidas cuarto 8
	(Cuartos[ocho.numcuarto]).arriba = cinco.numcuarto;
	(Cuartos[ocho.numcuarto]).abajo = 0;
	(Cuartos[ocho.numcuarto]).izquierda = 0;
	(Cuartos[ocho.numcuarto]).derecha = 0;
	//salidas cuarto 9
	(Cuartos[nueve.numcuarto]).arriba = seis.numcuarto;
	(Cuartos[nueve.numcuarto]).abajo = 0;
	(Cuartos[nueve.numcuarto]).izquierda = 0;
	(Cuartos[nueve.numcuarto]).derecha = 0;
}

int main()
{
	jugador Player;
	Player.posicion = 9;
	unordered_map<int, cuarto> Cuartos;
	int edad = 0;
	bool Primero = true;
	if (Primero == true)
	{
		crearcuartos(Cuartos );
		Primero = false;  
	}
	string pregunta;
	cout << "Quieres crear una partida? " << endl;
	cin >> pregunta;
	if (pregunta == "si")
	{
		crear_partida(edad);
		Player.posicion = 9;
	}
	else 
	if (pregunta=="no")
	{
		cout << "Entonces vamos a cargar una partida" << endl;
		cargar_partida();
	}
	bool vivo = true;
	string accion;
	int numero_S=0;
	int posicionactual = 9;
	//**********************************************************
	if (edad>=18)//primero el ofstream
	{
		cout << "historia chida  " << endl;//aqui invoca a el documento e imprime la historia
	}
	else
	{
		cout << "historia meca" << endl;
	}
	menuayuda();
	Player.posicion =  9;
	while (vivo)
	{
		cout << "-----------------------------------------------------"  << endl;
		cout << "Necesitas ayuda? prueba escribir 'ayuda'" << endl;
		cout << "El cuarto en el que estas es: " << Cuartos[Player.posicion].descripcion << endl;
		cout << "Que quieres hacer? " << endl;
		cin >> accion;//agregar otro string para la seunda accionn 
		//negar paso (totem) ***************************************************************************************************
		if (Cuartos[Player.posicion].totem==false && Cuartos[Player.posicion].numcuarto==9)
		{
			Cuartos[Player.posicion].arriba = 0;
		}
		else if(Cuartos[3].totem == false)
		{
			Cuartos[6].derecha = 0;
		}
		else if (Cuartos[4].totem==false)
		{
			Cuartos[4].derecha = 0;
		}
		else if (Cuartos[8].totem == false)
		{
			Cuartos[1].derecha = 0;
		}
		else if (Cuartos[1].totem == false)
		{
			Cuartos[5].abajo = 0;
		}
		
		
		//********************************************************************************************************************
		if (accion == "ir")
		{
			string accion_2;
			cout << "ir a donde?" << endl;
			cin >> accion_2;
			if (accion_2=="arriba" && Cuartos[Player.posicion].arriba!=0)
			{
			numero_S = 1;
			Player.posicion =Cuartos[Player.posicion].arriba;
			Cuartos[Player.posicion].explorado = 1;
			}
			else  if (accion_2=="abajo"&& Cuartos[Player.posicion].abajo != 0)
			{
				numero_S = 1;
				Player.posicion = Cuartos[Player.posicion].abajo;
				Cuartos[Player.posicion].explorado = 1;
			}
			else if(accion_2=="izquierda" && Cuartos[Player.posicion].izquierda != 0)
			{
				numero_S = 1;
				Player.posicion = Cuartos[Player.posicion].izquierda;
				Cuartos[Player.posicion].explorado = 1;
			}
			else if(accion_2=="derecha" && Cuartos[Player.posicion].derecha != 0)
			{
				numero_S = 1;
				Player.posicion = Cuartos[Player.posicion].derecha;
				Cuartos[Player.posicion].explorado = 1;
			}
			else if (accion_2 == "arriba" && Cuartos[Player.posicion].obj == 1)
			{
				cout << "resuelve el totem" << endl;
			}
			else  if (accion_2 == "abajo"&& Cuartos[Player.posicion].totem == false )
			{
				cout << "resuelve el totem" << endl;
			}
			else if (accion_2 == "izquierda" && Cuartos[Player.posicion].totem == false)
			{
				cout << "resuelve el totem" << endl;
			}
			else if (accion_2 == "derecha" && Cuartos[Player.posicion].totem == false)
			{
				cout << "resuelve el totem"<<endl;
			}
			else
			{
				cout<<"te golpeaste  "<<endl;
			}
		}

		//bloqueo de puertas completar con cuarto (4 a 5(totem en 7))(1 a 2(totem en 8))
		else if (accion == "resolver")
		{
			if (Cuartos[Player.posicion].obj == 1 && Cuartos[Player.posicion].totem == false && Cuartos[Player.posicion].numcuarto == 9)
			{
				Cuartos[Player.posicion].totem = true;
				Cuartos[Player.posicion].arriba = 6;
				numero_S = 4;
			}
			
			else if (Cuartos[Player.posicion].obj == 1 && Cuartos[Player.posicion].totem == false && Cuartos[Player.posicion].numcuarto == 3)
			{
				Cuartos[Player.posicion].totem = true;
				Cuartos[6].totem = true;
				Cuartos[6].derecha = 7;
				numero_S = 4;
			}
			else if (Cuartos[Player.posicion].obj == 1 && Cuartos[Player.posicion].totem == false && Cuartos[Player.posicion].numcuarto == 7)
			{
				Cuartos[Player.posicion].totem = true;
				Cuartos[4].totem = true;
				Cuartos[4].derecha = 5;
				numero_S = 4;
			}
			else if (Cuartos[Player.posicion].obj == 1 && Cuartos[Player.posicion].totem == false && Cuartos[Player.posicion].numcuarto == 1)
			{
				Cuartos[Player.posicion].totem = true;
				Cuartos[1].totem = true;
				Cuartos[5].abajo = 8;
				numero_S = 4;
			}
			else if (Cuartos[Player.posicion].obj == 1 && Cuartos[Player.posicion].totem == false && Cuartos[Player.posicion].numcuarto == 8)
			{
				Cuartos[Player.posicion].totem = true;
				Cuartos[1].derecha = 2;
				numero_S = 4;
			}
			else
			{
				numero_S = 2;
			}
		}
		else if (accion == "ver")
		{
			if (Cuartos[Player.posicion].obj==1)
			{
				numero_S = 3;
			}
			else
			{
				cout << "No hay mucho que ver " << endl;
			}
			
		}
		else if (accion == "ayuda")
		{
			numero_S = 5;
		}
		else if (accion=="mapa")
		{
			numero_S = 6;
		}
		
		if (Cuartos[Player.posicion].numcuarto == 2)
		{
			cout << "acabaste el juego y explotaste de felicidad" << endl;
			vivo = false;
		}
		switch (numero_S)
		{
		case 1:
			cout << "te moviste a ..."<<Cuartos[Player.posicion].descripcion << endl;
			break;
		case 2:
			cout << "no hay totems en esta sala" << endl;
			break;
		case 3:
			cout << "puedes ver un totem con algo escrito ..." << endl;
			break;
		case 4:
			cout << "Se escucho como se abrio una puerta " << endl;
			break;
		case 5:
			menuayuda();
			break;
		case 6:
			cout << "El mapa de juego" << endl;
			if (Cuartos[2].explorado == 1)
			{
				cout << "____________" << endl << "| cuarto 2 |" << endl << "|          |" << endl << "___________" << endl;
			}
			else if (Cuartos[1].explorado == 1)
			{
				cout << "                               ____________" << endl << "                               | cuarto 1 |" << endl << "                               |          " << endl << "                               ____   ____" << endl;
				cout << "____________   ____________   _____   ____" << endl << "| cuarto 3 |   | cuarto 4 |   | cuarto 5 |" << endl << "|          |   |                         |" << endl << "____   ____   ____   ____    ____   ____" << endl;
				cout << "____   _____    ____   _____   ____   _____" << endl << "| cuarto 6 |   | cuarto 7 |   | cuarto 8 |" << endl << "|                         |   |          |" << endl << "____   ____|   ___________   ___________" << endl;
				cout << "____   _____" << endl << "| cuarto 9 |" << endl << "|          |" << endl << "___________" << endl;
			}
			else if (Cuartos[8].explorado == 1)
			{
				cout << "____________   ____________   _____   ____" << endl << "| cuarto 3 |   | cuarto 4 |   | cuarto 5 |" << endl << "|          |   |                       |" << endl << "____   ____   ____   ____   ____   ____" << endl;
				cout << "____   _____    ____   _____   ____   _____" << endl << "| cuarto 6 |   | cuarto 7 |   | cuarto 8 |" << endl << "|                         |   |          |" << endl << "____   ____|   ___________   ___________" << endl;
				cout << "____   _____" << endl << "| cuarto 9 |" << endl << "|          |" << endl << "___________" << endl;
			}
			else if (Cuartos[5].explorado == 1)
			{
				cout << "____________   ____________   _____   ____" << endl << "| cuarto 3 |   | cuarto 4 |   | cuarto 5 |" << endl << "|          |   |                       |" << endl << "____   ____   ____   ____   ____   ____" << endl;
				cout << "____   _____    ____   _____" << endl << "| cuarto 6 |   | cuarto 7 |" << endl << "|                         |" << endl << "____   ____|   ___________" << endl;
				cout << "____   _____" << endl << "| cuarto 9 |" << endl << "|          |" << endl << "___________" << endl;
			}
			else if (Cuartos[4].explorado == 1)
			{
				cout << "____________   ____________" << endl << "| cuarto 3 |   | cuarto 4 |" << endl << "|          |   |          " << endl << "____   ____   ____   ____" << endl;
				cout << "____   _____    ____   _____" << endl << "| cuarto 6 |   | cuarto 7 |" << endl << "|                         |" << endl << "____   ____|   ___________" << endl;
				cout << "____   _____" << endl << "| cuarto 9 |" << endl << "|          |" << endl << "___________" << endl;
			}
			else if (Cuartos[7].explorado == 1)
			{
				cout << "____________" << endl << "| cuarto 3 |" << endl << "|          |" << endl << "____   ____" << endl;
				cout << "____   _____    ____   _____" << endl << "| cuarto 6 |   | cuarto 7 |" << endl << "|                         |" << endl << "____   ____|   ___________" << endl;
				cout << "____   _____" << endl << "| cuarto 9 |" << endl << "|          |" << endl << "___________" << endl;
			}
			else if (Cuartos[3].explorado == 1)
			{
				cout << "____________" << endl << "| cuarto 3 |" << endl << "|          |" << endl << "____   ____" << endl;
				cout << "____   _____" << endl << "| cuarto 6 |" << endl << "|          " << endl << "____   ____" << endl;
				cout << "____   _____" << endl << "| cuarto 9 |" << endl << "|          |" << endl << "___________" << endl;
			}
			else if (Cuartos[6].explorado == 1)
			{
				cout << "____   _____" << endl << "| cuarto 6 |" << endl << "|          " << endl << "____   ____" << endl;
				cout << "____   _____" << endl << "| cuarto 9 |" << endl << "|          |" << endl << "___________" << endl;
			}
			else if (Cuartos[9].explorado == 1)
			{
				cout << "____   _____" << endl << "| cuarto 9 |" << endl << "|          |" << endl << "___________" << endl;
			}
			break;
		case 7:
			vivo = false;
			break;
		default:	
			cout << "accion no permitida" << endl;
			break;
		}
	}
	void cargar_partida();
	cout << "Y asi es como termino la partida "<< endl;
	cin.ignore();
	cin.get();
	return 0;
}

//guardar
//objetivo "extra" perdida de vida 