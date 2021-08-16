#pragma once

#include <string>
#include <iostream>
using namespace std;
#include "Jugador.h"

class Nodo
{
private:
	string data;
	int info;
	Nodo* sig;
	Jugador elJug;
public:
	Nodo();
	Nodo(Jugador pjugador);
	void setInfo(int x);
	int getInfo();

	void setData(string);
	string getData();

	Nodo* getSig();
	void setSig(Nodo* sig);

	Jugador getElJug();
	void setElJug(Jugador pjugador);
};