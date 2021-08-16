#include "Nodo.h"
#include<iomanip>
using namespace std;

Nodo::Nodo() {
	setInfo(0);
	setSig(NULL);
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