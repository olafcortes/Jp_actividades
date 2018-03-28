#pragma once
#include <string>

using namespace std;

class jugador
{private:
	int vida;
	string nombre;

public:
	jugador(int, string);
	void buscar();

};

jugador::jugador(int _vida, string _nombre)
{
	nombre = _nombre;
}
void jugador::buscar()
{

}