#include "PilaRecords.h"
#include <iostream>
using namespace std;

PilaRecords::PilaRecords() {
	longitud = 0;
	tope = nullptr;
}

int PilaRecords::getLongitud(void) {
	return longitud;
}

void PilaRecords::setLongitud(int longitud) {
	this->longitud = longitud;
}

Nodo* PilaRecords::getTope(void) {
	return tope;
}

void PilaRecords::setTope(Nodo* tope) {
	this->tope = tope;
}

bool PilaRecords::esVacia() {
	if (tope == nullptr)
	{
		return true;
	}
	else
	{
		return false;
	}
}

bool PilaRecords::pushElem(int elemento) {
	Nodo* nuevo = new Nodo(elemento);

	if (nuevo == nullptr)
	{
		return false;
	}
	else {
		if (this->esVacia())
		{
			tope = nuevo;
		}
		else {
			nuevo->setSig(tope);
			tope = nuevo;
		}
		longitud++;
		return true;
	}
}

bool PilaRecords::popElem() {
	Nodo* aux;

	if (!(this->esVacia()))
	{
		aux = tope;
		tope = tope->getSig();
		longitud--;
		delete aux;
		return true;
	}
	else {
		return false;
	}
}

void PilaRecords::imprimirPila() {
	Nodo* aux = this->tope;

	while (aux->getSig() != nullptr)
	{
		cout << aux->getInfo() << endl;
		aux = aux->getSig();
	}
}