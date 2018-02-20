#include "std_lib_facilities.h"
void transformar(string &x)
{
	for (int i = 0; i < x.length(); i++)
	{
		x[i] = tolower(x[i]);
		
	}
}

void crear()
{
	ifstream (archivo);
	string(nombre);
	cout << "Nombre:  " << endl;
	getline(cin,nombre);
	archivo.open(nombre.c_str(),ios::in);
	if (archivo.fail())
	{
		cout<< "no existe, intentelo otra vez " << endl;
		exit(1);
	}
	while (!archivo.eof())//eof recorre todo el string que tiene el documento 
	{
		cout << "existe" << endl;
		getline(archivo, nombre);
		transformar(nombre);
		cout << nombre << endl;
		//creacion del documento nuevo
		ofstream nuevo;
		string nombre_nuevo,datos_nuevo;
		cout<<"Se creo un nuevo documento llamado textov2.txt" <<endl;
		nuevo.open("textov2.txt",ios::out);
		if (nuevo.fail())
		{
			cout << "no pos no" << endl;
			exit(1);
		}
		nuevo << nombre << endl;
	}
	
	archivo.close();
}

int main() 
{
	crear();
	cin.ignore();
	cin.get();
	return 0;
}