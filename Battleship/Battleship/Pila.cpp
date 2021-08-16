#include "Pila.h"
#include <iostream>
using namespace std;

Pila::Pila() {
	longitud = 0;
	tope = nullptr;
}

int Pila::getLongitud(void) {
	return longitud;
}

void Pila::setLongitud(int longitud) {
	this->longitud = longitud;
}

Nodo* Pila::getTope(void) {
	return tope;
}

void Pila::setTope(Nodo* tope) {
	this->tope = tope;
}

bool Pila::esVacia() {
	if (tope == nullptr)
	{
		return true;
	}
	else
	{
		return false;
	}
}

bool Pila::pushElem(int elemento) {
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

bool Pila::popElem() {
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

void Pila::imprimirPila() {
	Nodo* aux = this->tope;

	while (aux->getSig() != nullptr)
	{
		cout << aux->getInfo() << endl;
		aux = aux->getSig();
	}
}