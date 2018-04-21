#include "cuarto.h"
#include "jugador.h"

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
	
	cout << "Las acciones que se pueden realizar en el juego se indican por comandos de 2 palabras y son las siguientes:" << endl
	<< "ir---sirve para moverte durante el juego indicandole la direccion en la que te quieres mover " << endl
	<< "por ejemplo ir arriba /n ir abajo /n ir izquierda /n ir derecha" << endl
	<< "meter---sirve para agregar objetos siempre y cuando el objeto se encuentre en el mismo cuarto(no todo se puede meter)" << endl
	<< "ver---sirve para ver distintas cosas entre ellas el inventario" << endl
	<< "usar---utilizalo para interactuar con diferentes objetos " << endl;
}

void crearcuartos(unordered_map<int, cuarto>& Cuartos)
{
	cuarto uno;
	uno.numcuarto = 1;
	uno.obj = 0;
	uno.explorado = 0;
	uno.descripcion = "el cuarto 1";
	Cuartos[uno.numcuarto] = uno; //Cuartos (el mapa) [uno.numcuarto] (llave, esta accediendo al objeto "num" del "uno")

	cuarto dos;
	dos.numcuarto = 2;
	dos.obj = 0;
	dos.explorado = 0;
	dos.descripcion = "el cuarto 2";
	Cuartos[dos.numcuarto] = dos;

	cuarto tres;
	tres.numcuarto = 3;
	tres.obj = 1;
	tres.explorado = 0;
	tres.descripcion = "el cuarto 3";
	Cuartos[tres.numcuarto] = tres;

	cuarto cuatro;
	cuatro.numcuarto = 4;
	cuatro.obj = 0;
	cuatro.explorado = 0;
	cuatro.descripcion = "el cuarto 4";
	Cuartos[cuatro.numcuarto] = cuatro;

	cuarto cinco;
	cinco.numcuarto = 5;
	cinco.obj = 0;
	cinco.explorado = 0;
	cinco.descripcion = "el cuarto 5";
	Cuartos[cinco.numcuarto] = cinco;

	cuarto seis;
	seis.numcuarto = 6;
	seis.obj = 0;
	seis.explorado = 0;
	seis.descripcion = "el cuarto 6";
	Cuartos[seis.numcuarto] = seis;

	cuarto siete;
	siete.numcuarto = 7;
	siete.obj = 1;
	siete.explorado = 0;
	siete.descripcion = "el cuarto 7";
	Cuartos[siete.numcuarto] = siete;

	cuarto ocho;
	ocho.numcuarto = 8;
	ocho.obj = 1;
	ocho.explorado = 0;
	ocho.descripcion = "el cuarto 8";
	Cuartos[ocho.numcuarto] = ocho;

	cuarto nueve;
	nueve.numcuarto = 9;
	nueve.obj = 1;
	nueve.explorado = 1;
	nueve.descripcion = "el cuarto 9";
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
	unordered_map<int, cuarto> Cuartos;
	int edad = 0;
	string pregunta;
	cout << "Quieres crear una partida? " << endl;
	cin >> pregunta;
	if (pregunta == "si")
	{
		crear_partida(edad);
		Player.posicion = "Cuarto 9";
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
	
	//cuarto uno(0, 1, 0, 2, 0, 0, "cerca el final", 1);
	//cuarto dos(0, 0, 1, 0, 0, 0, "final :)", 2);
	//cuarto tres(0, 1, 0, 0,1,0,"cuarto con llave para 7", 3);
	//cuarto cuatro(0, 1, 0, 2, 0, 0, "cuarto 4", 4);
	//cuarto cinco(1, 1, 1, 0, 0, 0, "cuarto 5", 5);
	//cuarto seis(1, 1, 0,2, 0, 0, "el cuarto arriba del lobby", 6);
	//cuarto siete(1, 0, 1, 0, 1, 0, "cuarto 7", 7);
	//cuarto ocho(1, 0, 0, 0, 1, 0, "cuarto 8", 8);
	//cuarto lobby(2, 0, 0, 0, 1 , 1, "un cuarto agradable que huele a limon ", 9);
	menuayuda();

	while (vivo)
	{
		cout<<'-'*20<<endl;
		cout << "Necesitas ayuda? prueba escribir 'ayuda'" << endl;
		cout << "El cuarto en el que estas es: " << endl;
		cout << "que quieres hacer " << endl;// comandos caminar buscar agarrar ver mapa etc
		cin >> accion;
		if (accion == "ir")
		{
			numero_S = 1;
		}
		else if (accion == "meter")
		{
			numero_S = 2;
		}
		else if (accion == "ver")
		{
			numero_S = 3;
		}
		else if (accion == "usar")
		{
			numero_S = 4;
		}
		else if (accion == "ayuda")
		{
			numero_S = 5;
		}
		else if (accion=="morir")
		{
			numero_S = 6;
		}
		
		
		switch (numero_S)
		{
		case 1:
			cout << "te moviste a ..." << endl;
			break;
		case 2:
			cout << "metiste ..." << endl;
			break;
		case 3:
			cout << "viste ..." << endl;
			break;
		case 4:
			cout << "usaste ..." << endl;
			break;
		case 5:
			menuayuda();
			break;
		case 6:
			vivo = false;
			break;
		default:	
			cout << "accion no permitida" << endl;
			break;
		}
	}

	cout << "Te moriste de alguna forma picale enter para cerrar el juego" << endl;
	cin.ignore();
	cin.get();
	return 0;
}

//cuartos en clase 
//entender la deteccion del colisiones