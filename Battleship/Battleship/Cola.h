#ifndef COLA_H
#define COLA_H

#include <iostream>
using namespace std;

#include "Nodo.h"
class Cola
{
private:
	Nodo* frente, * last;
public:
	Cola();
	void atiende(int val);
	string mostrar();

	Nodo* getFrente();
	void setFrente(Nodo* frente);
	Nodo* getLast();
	void setLast(Nodo* last);

	int longitudC;
};
#endif
