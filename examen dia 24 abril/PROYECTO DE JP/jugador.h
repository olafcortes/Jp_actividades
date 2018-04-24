#pragma once
#include "Includes.h"

class jugador
{
public:
	jugador();
	jugador(int, vector<string>,string,int);
	~jugador();
	int vida;
	string nombre;
	vector<string> inventario;
	int posicion;

};