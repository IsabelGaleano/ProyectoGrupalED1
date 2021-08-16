#include "Jugador.h"

Jugador::Jugador() {

}

Jugador::Jugador(string correo, string nombre, string apellido, double puntaje) {
	this->correoElectronico = correo;
	this->nombre = nombre;
	this->apellido = apellido;
	this->puntaje = puntaje;
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


