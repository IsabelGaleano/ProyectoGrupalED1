#pragma once
#include "Nodo.h"
class Pila
{
private:
	int longitud;
	Nodo* tope;
public:
	Pila();
	int getLongitud(void);
	void setLongitud(int longitud);
	Nodo* getTope(void);
	void setTope(Nodo*);
	bool pushElem(int elemento);
	bool popElem(void);
	bool esVacia();
	void imprimirPila();
};

