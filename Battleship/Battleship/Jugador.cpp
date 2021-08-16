#include "Jugador.h"

Jugador::Jugador() {
	this->setMyShips(NULL);
	this->setCampoDeBatalla(NULL);

	this->myShips = new Lista();
}

Jugador::Jugador(string correo, string nombre, string apellido, double puntaje) {
	this->correoElectronico = correo;
	this->nombre = nombre;
	this->apellido = apellido;
	this->puntaje = puntaje;
}

bool Jugador::insertShip(int _val) {
	Nodo* aux = this->myShips->getCabeza();
	int size = 10;
	while (aux != NULL)
	{
		if (size == _val) {
			if (aux->getInfo() == 0) {
				aux->setInfo(1);
				//longitudAP--;
				return true;
			}
			else {
				return false;
			}
		}
		aux = aux->getSig();
		size--;
	}
	return false;
}

string Jugador::getCorreoElectronico() {
	return this->correoElectronico;
}

string Jugador::getNombre() {
	return this->nombre;
}

string Jugador::getApellido() {
	return this->apellido;
}

double Jugador::getPuntaje() {
	return this->puntaje;
}

Lista* Jugador::getMyShips() {
	return this->myShips;
}

void Jugador::setMyShips(Lista* _newShip) {
	this->myShips = _newShip;
}

Lista* Jugador::getCampoDeBatalla() {
	return this->campoDeBatalla;
}

void Jugador::setCampoDeBatalla(Lista* _campoDeBatalla) {
	this->campoDeBatalla = _campoDeBatalla;
}