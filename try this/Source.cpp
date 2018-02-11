#include <iostream>
using namespace std;
int main()
{
	int desicion;
	float libras, dolares,yen,kroner;
	cout << "quieres convertir libras a dolares (1) o yen a kroner(2)\n"<<endl;
	cin >> desicion;
	switch (desicion)
	{
	case(1):
		cout << "Cuantas libras:"; 
		cin >> libras;
		dolares = 1.38*libras;
		cout << "La cantidad en dolares es:" << dolares;
		cin.ignore();
		cout << "\nPresiona enter para salir" << endl;
		break;
	case(2):
		cout << "Cuantos yenes:";
		cin >> yen;
		kroner = .05587*yen;
		cout << "La cantidad en kroners es:" << kroner;
		cin.ignore();
		cout << "\nPresiona enter para salir" << endl;
		break;
	default:
		cout << "Escoge 1 o 2 " << endl;
		cin.ignore();
		cout << "Presiona enter para salir" << endl;
		break;
	}
		

	cin.get();
	return 0;
}