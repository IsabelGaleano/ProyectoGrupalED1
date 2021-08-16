#pragma once

#include "Nodo.h"
#include <iostream>
using namespace std;

class Lista
{
public:
	Lista();
	void Agregar(string);
	//bool Buscar(int);

	string Mostrar();


	Nodo* getCabeza();
	void setCabeza(Nodo* cabeza);


	int size = 0;
private:
	Nodo* cabeza;
};