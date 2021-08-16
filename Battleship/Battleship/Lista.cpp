#include "Lista.h"

#include <string>
#include<iomanip>
using namespace std;

Lista::Lista() {
	setCabeza(NULL);
}


void Lista::Agregar(int _val) {
	size++;
	Nodo* temp = new Nodo();

	if (getCabeza() == NULL) {
		cabeza = temp;
	}
	else {
		temp->setSig(getCabeza());
		cabeza = temp;
	}
}

string Lista::Mostrar() {
	string result = "";
	Nodo* aux = getCabeza();

	while (aux != NULL)
	{
		result += to_string(aux->getInfo()) + "\n";
		aux = aux->getSig();
	}
	return result;
}

bool Lista::Buscar(int _val) {
	bool result;
	Nodo* aux = getCabeza();
	while (aux != NULL)
	{
		
	}
	return ;
}


Nodo* Lista::getCabeza() {
	return this->cabeza;
}

void Lista::setCabeza(Nodo* cabeza) {
	this->cabeza = cabeza;
}