#include "Nodo.h"
#include<iomanip>
using namespace std;

Nodo::Nodo() {
	setInfo(0);
	setSig(NULL);
}

Nodo::Nodo(Jugador pjugador) {
	setElJug(pjugador);
}

void Nodo::setInfo(int x) {
	info = x;
}

int Nodo::getInfo(void) {
	return info;
}

Nodo* Nodo::getSig() {
	return this->sig;
}

void Nodo::setSig(Nodo* _sig) {
	this->sig = _sig;
}

void Nodo::setData(string x) {
	this->data = x;
}

string Nodo::getData() {
	return this->data;
}

Jugador Nodo::getElJug() {
	return this->elJug;
}

void Nodo::setElJug(Jugador _elJug) {
	this->elJug = _elJug;
}