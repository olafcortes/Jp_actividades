#pragma once
#include "Includes.h"

class jugador
{
public:
	jugador();
	jugador(int, vector<string>,string,string);
	~jugador();
	int vida;
	string nombre;
	vector<string> inventario;
	string posicion;

};