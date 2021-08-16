#pragma once

#include "Nodo.h"
#include "Jugador.h"

class ListaJugadores
{
private:
	Nodo* cabeza;
	int size;
public:
	ListaJugadores();
	void Agregar(Jugador pjugador);

	bool ListaJugadoroVacia();

	//string BuscarJugador(string);

	//void EliminarDatosNodo();

	string Mostrar();

	//void EliminarElementoContacto();

	int ObtenerTamLista();


	Nodo* getCabeza();
	void setCabeza(Nodo* cabeza);
};