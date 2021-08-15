#pragma once
#ifndef DATABASE_H
#define DATABASE_H
#include <string>
#include "mysql.h"
#include "Jugador.h"
using namespace std;

class Database
{

public:
	Database();
	void abrirConexion();
	void cerrarConexion();
	MYSQL* getConectar();
	void mostrarJugadores();
	void insertarJugador(string correo, string nombre, string apellido, double puntaje);
	//void setJugador(Jugador* jugador);
private:
	MYSQL* conectar;
	//Jugador* jugador;
	
};

#endif 

