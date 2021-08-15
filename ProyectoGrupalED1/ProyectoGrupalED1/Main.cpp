#include <iostream>
#include "mysql.h"
#include "Database.h"
#include "Jugador.h"
using namespace std;

int main() {

	Jugador *jugador = new Jugador("luwiisabel@gmail.com", "Luwidika", "Galeano", 0);
	Database *database = new Database();
	database->abrirConexion();
	//database->setJugador(jugador);
	database->insertarJugador("luwiisabel@gmail.com", "Luwidika", "Galeano", 0);
	database->mostrarJugadores();
		
}