#include "C:\Users\julia\source\repos\examen v2 parcial 2\examen v2 parcial 2\std_lib_facilities.h"
#include <cstdlib>
#include <time.h>
#include "Header.h"

/*leer y en base a lo que tiene construir oraciones con las palabras
imprimir en otro archivo las paalabras
8 oraciones 1 por renglon*/
void abrir()
{
	ifstream(archivo);
	string(oraciones);
	getline(cin, oraciones);
	archivo.open(oraciones.c_str(), ios::in);
	if (archivo.fail())
	{
		cout << "no se puede, reintentar";
		exit(1);
	}
	cout << endl;
}
void registro(vector <string> &sujeto, vector <string> &adjetivo, vector <string> &verbo, vector <string> &adverbio, vector <string> &preposicion, vector <string> &sustantivo)
{

	string oraciones = "oraciones.txt";
	ifstream archivo(oraciones.c_str());
	if (archivo.fail())
	{
		cout << "no se puede, reintentar";
		exit(1);
	}
	string n1 = "miau", n2;
	int i = 0;
	char palabra_guardada[256];
	while (n1 != "")
	{
		archivo.getline(palabra_guardada, 256, '\n');
		n1 = palabra_guardada;
		if (n1 == "Sujeto")
			n2 = n1;
		else if (n1 == "Adjetivo")
		{
			n2 = n1;
			i = 0;
		}
		else if (n1 == "Verbo")
		{
			n2 = n1;
			i = 0;
		}
		else if (n1 == "Advervio")
		{
			n2 = n1;
			i = 0;
		}
		else if (n1 == "Preposicion")
		{
			n2 = n1;
			i = 0;
		}
		else if (n1 == "Sustantivo")
		{
			n2 = n1;
			i = 0;
		}
		//
		if (n2 == "Sujeto")
		{
			sujeto.push_back(n1);
			i++;
		}
		else if (n2 == "Adjetivo")
		{
			adjetivo.push_back(n1);
			i++;
		}
		else if (n2 == "Verbo")
		{
			verbo.push_back(n1);
			i++;
		}
		else if (n2 == "Advervio")
		{
			adverbio.push_back(n1);
			i++;
		}
		else if (n2 == "Preposicion")
		{
			preposicion.push_back(n1);
			i++;
		}
		else if (n2 == "Sustantivo")
		{
			sustantivo.push_back(n1);
			i++;
		}
	}

}
void crear()
{
	ofstream nuevo;
	string nombre;
	cout << "Se creo un nuevo documento " << endl;
	nuevo.open("orden.txt", ios::out);
	if (nuevo.fail())
	{
		cout << "no se puede crear " << endl;
		exit(1);
	}
	else
		nuevo << nombre << endl;
}
void save(vector <string> sujeto, vector <string> adjetivo, vector <string> verbo, vector <string> adverbio, vector <string> preposicion, vector <string> sustantivo)
{

	string ordenado = "orden.txt";
	ofstream orden(ordenado.c_str());
	int a = 0;
	while (a < 8)
	{
		srand(time(NULL));
		int r1 =1 + rand()%(11-7);
		int r2 =1 + rand()%(11-7);
		int r3 = 1 + rand() % (11 - 7);
		int r4 = 1 + rand() % (11 - 7);
		int r5 = 1 + rand() % (11 - 7);
		int r6 = 1 + rand() % (11 - 7);
		orden << sujeto[r1] << " " << adjetivo[r2] << " " << verbo[r3] << " " << adverbio[r4] << " " << preposicion[r5] << " " << sustantivo[r6] << endl;
		a++;
	}

}
int main()
{
	abrir();
	vector <string> sujeto;//arreglos o esas cosas por cada oracion 
	vector <string> adjetivo;
	vector <string> verbo;
	vector <string> adverbio;
	vector <string> preposicion;
	vector <string> sustantivo;
	//
	registro(sujeto, adjetivo, verbo, adverbio, preposicion, sustantivo);
	crear();
	int a = 0;
	/*while (a < 8)
	{
		int r1 = randint(1, 4);
		int r2 = randint(1, 4);
		int r3 = randint(1, 4);
		int r4 = randint(1, 4);
		int r5 = randint(1, 4);
		int r6 = randint(1, 4);
		cout << sujeto[r1] << " " << adjetivo[r2] << " " << verbo[r3] << " " << adverbio[r4] << " " << preposicion[r5] << " " << sustantivo[r6] << endl;
		a++;
	}*/
	save(sujeto, adjetivo, verbo, adverbio, preposicion, sustantivo);
	cin.ignore();
	cout << "presiona enter para salir" << endl;
	cin.get();
	
	return 0;
}