#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<cmath>
#include <fstream>

using namespace std;

void abrir()
{
	ofstream archivo;
	string datos_archivo,nombre_archivo;
	int menu,n,numero,numeros=0;
	cout << "Nombre del archivo" << endl;
	getline(cin, nombre_archivo);  //cin para creacion de archivos 
	archivo.open(nombre_archivo.c_str(),ios::out) ;
	if (archivo.fail())
	{
		cout << "no existe" << endl;
		exit(1);
	}
	cout << "quieres hacer la suma?" << endl;
	cin >> menu;
	cout << "cuantos vas a sumar?";
	cin >> n;
	while (menu == 1)
	{
		for (int i = 0; i < n; i++)
		{
			cout << i + 1 << "escriba el numero: " << endl; cin >> numero;
			numeros = numeros + numero;
			
		}
		cout << "tu resultado es: " << numeros << endl;
		archivo << "tu resultado es: " << numeros << endl;
		cout << "quieres hacer la suma?" << endl;
		cin >> menu;
		cout << "cuantos vas a sumar?";
		cin >> n;
	}


	if (menu == 0)
	{
		break;
	}
	archivo.close();
}
int main()
{
	abrir();
	return 0;
}