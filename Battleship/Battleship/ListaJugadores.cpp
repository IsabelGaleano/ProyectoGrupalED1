#include "ListaJugadores.h"

#include <iostream>
#include <string>
#include<stdlib.h> // funciona new y delete
#include<iomanip>
using namespace std;

ListaJugadores::ListaJugadores() {
	setCabeza(NULL);
}

void ListaJugadores::Agregar(Jugador pjugador) {
	size++;
	Nodo* temp = new Nodo(pjugador);

	if (getCabeza() == NULL) {
		cabeza = temp;
	}
	else {
		temp->setSig(getCabeza());
		cabeza = temp;
	}
}

string ListaJugadores::Mostrar() {
	string result = "";
	Nodo* aux = getCabeza();

	while (aux != NULL)
	{
		result += aux->getData() + "\n";
		aux = aux->getSig();
	}
	return result;
}

//string ListaJugadores::BuscarJugador(string pnombre) {
//	string result = "";
//	Nodo* auxContacto = getCabeza(.
//	string nombre = contacto.getNombre();
//	while (auxContacto != NULL)
//	{
//		if (nombre == pnombre) {
//			result = "El contacto se encontra en la lista: \n" + auxContacto->toString() + "\n";
//			break;
//		}
//		else {
//			result = "El contacto no se encontra en la lista!";
//			auxContacto = auxContacto->getSig();
//			if (auxContacto != NULL) {
//				contacto = auxContacto->getContacto();
//				nombre = contacto.getNombre();
//			}
//		}
//	}
//	return result;
//}

bool ListaJugadores::ListaJugadoroVacia() {
	if (cabeza == NULL) {
		return true;
	}
	return false;
}

int ListaJugadores::ObtenerTamLista() {
	return this->size;
}

/*void ListaJugadores::EliminarDatosNodo() {
	this->cabeza->DeleteAll();
	this->size = 0;
	setCabeza(NULL);
}*/

Nodo* ListaJugadores::getCabeza() {
	return this->cabeza;
}

void ListaJugadores::setCabeza(Nodo* cabeza) {
	this->cabeza = cabeza;
}