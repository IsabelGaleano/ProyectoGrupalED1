#pragma once
#ifndef JUGADOR_H
#define JUGADOR_H
#include <string>
#include "mysql.h"
#include <iostream>
#include "Database.h"
using namespace std;
class Jugador
{

public:
	Jugador();
	Jugador(string correo, string nombre, string apellido, double puntaje);
	string getCorreoElectronico();
	string getNombre();
	string getApellido();
	double getPuntaje();

private:
	string correoElectronico;
	string nombre;
	string apellido;
	double puntaje;
};

#endif
