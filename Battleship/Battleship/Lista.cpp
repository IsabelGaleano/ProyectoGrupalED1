#include "Lista.h"

#include <string>
#include<iomanip>
using namespace std;

Lista::Lista() {
	setCabeza(NULL);
}


void Lista::Agregar(string _val) {
	//size++;
	Nodo* temp = new Nodo();
	temp->setData(_val);
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
	int count = 1;
	while (aux != NULL)
	{
		if (count == 6) {
			result += "|\n";
		}
		else if (count == 11) {
			result += "|\n";
		}
		else if (count == 16) {
			result += "|\n";
		}
		result += aux->getData() + "\t";
		aux = aux->getSig();
		count++;
	}
	return result;
}

//bool Lista::Buscar(int _val) {
//	bool result;
//	Nodo* aux = getCabeza();
//	while (aux != NULL)
//	{
//		
//	}
//	return ;
//}


Nodo* Lista::getCabeza() {
	return this->cabeza;
}

void Lista::setCabeza(Nodo* cabeza) {
	this->cabeza = cabeza;
}