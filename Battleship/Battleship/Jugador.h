#pragma once

#include "Nodo.h"
#include "Lista.h"
#include <string>
#include <iostream>
using namespace std;
class Jugador
{
private:
	string correoElectronico;
	string nombre;
	string apellido;
	double puntaje;


	Lista* myShips;
	Lista* campoDeBatalla;

public:
	Jugador();
	Jugador(string correo, string nombre, string apellido, double puntaje);
	string getCorreoElectronico();
	string getNombre();
	string getApellido();
	double getPuntaje();

	bool insertShip(int);

	Lista* getMyShips();
	void setMyShips(Lista* myShips);

	Lista* getCampoDeBatalla();
	void setCampoDeBatalla(Lista* campoDeBatalla);
};