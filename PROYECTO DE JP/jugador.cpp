#include "jugador.h"

jugador::jugador()
{

}

jugador::jugador(int _vida, vector<string> _inventario,string _nombre, string _poscion)
{
	nombre = _nombre;
	inventario = _inventario;
	vida = _vida;
	posicion = _poscion;
}


jugador::~jugador()
{

}
