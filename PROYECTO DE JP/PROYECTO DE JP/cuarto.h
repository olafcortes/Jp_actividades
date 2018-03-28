#pragma once
#include <iostream>
using namespace std;
class cuarto
{
	private:
		int objeto;
	public:
		cuarto(int);
		void descripcion();
};

cuarto::cuarto(int _objeto)
{
	objeto = _objeto;
}

void cuarto::descripcion()
{
	cout << "hola" << endl;
}