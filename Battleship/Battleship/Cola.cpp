#include "Cola.h"

#include <string>
#include<iomanip>
using namespace std;


Cola::Cola() {
	setFrente(NULL);
	setLast(NULL);
}

void Cola::atiende(int _val) {
	Nodo* aux = this->getFrente();
	Nodo* nuevo = new Nodo();
	nuevo->setInfo(_val);
	if (aux == NULL) {
		this->frente = nuevo;
		this->last = nuevo;
	}
	else {
		this->last->setSig(nuevo);
		this->last = nuevo;

	}
	longitudC++;
}

string Cola::mostrar() {
	string result;
	int size = 1;
	Nodo* aux = getFrente();
	while (aux != NULL) {
		result += to_string(size) + ". " + to_string(aux->getInfo()) + "\n";
		aux = aux->getSig();
		size++;
	}
	return result;
}

Nodo* Cola::getFrente() {
	return this->frente;
}

void Cola::setFrente(Nodo* frente) {
	this->frente = frente;
}
Nodo* Cola::getLast() {
	return this->last;
}

void Cola::setLast(Nodo* last) {
	this->last = last;
}