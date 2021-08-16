#pragma once
#include "Nodo.h"
class PilaRecords
{
private:
	int longitud;
	Nodo* tope;
public:
	PilaRecords();
	int getLongitud(void);
	void setLongitud(int longitud);
	Nodo* getTope(void);
	void setTope(Nodo*);
	bool pushElem(int elemento);
	bool popElem(void);
	bool esVacia();
	void imprimirPila();
};

