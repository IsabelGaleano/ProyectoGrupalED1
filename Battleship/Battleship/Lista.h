#ifndef LISTA_H
#define LISTA_H

#include "Nodo.h"
#include <iostream>
using namespace std;

class Lista
{
private:
	Nodo* cabeza;
public:
	Lista();
	void Agregar(int);

	bool Buscar(int);

	void EliminarDatosNodo();

	string Mostrar();


	Nodo* getCabeza();
	void setCabeza(Nodo* cabeza);
	

	int size;
};
#endif
