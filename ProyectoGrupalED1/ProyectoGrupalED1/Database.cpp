#include "Database.h"
#include <string>
#include <iostream>
using namespace std;

Database::Database() {
}

void Database::abrirConexion() {
	conectar = mysql_init(0);
	conectar = mysql_real_connect(conectar, "db-ed1-proyecto.mysql.database.azure.com", "ed1Admin@db-ed1-proyecto", 
		"Estructuras123", "ed1proyecto", 3306, NULL, 0);
}

void Database::cerrarConexion() {
	mysql_close(conectar);
}

MYSQL* Database::getConectar() {
	return conectar;
}

void Database::mostrarJugadores() {
	MYSQL_ROW fila;
	MYSQL_RES* resultado;
	int queryEstado;
	
	this->abrirConexion();
	if (this->conectar)
	{
		string query = "SELECT * FROM JUGADORES";
		const char* c = query.c_str();
		queryEstado = mysql_query(conectar, c);

		if (!queryEstado)
		{
			resultado = mysql_store_result(conectar);
			while (fila = mysql_fetch_row(resultado))
			{
				cout << fila[0] << "-" << fila[1] << "-" << fila[2] << "-" << fila[3] << endl;
			} 
		}
		else
		{
			cout << "Error al ingresar a la información" << endl;
		}

		
		
	}
	else
	{
		cout << "Error en la conexion" << endl;
	}
	
	this->cerrarConexion();
}

/*void Database::setJugador(Jugador* _jugador) {
	this->jugador = _jugador;
}*/

void Database::insertarJugador(string correo, string nombre, string apellido, double puntaje) {
	int q_estado;
	//_variant_t MyVar = puntaje;

	this->abrirConexion();
	if (this->conectar) {
		//string  insertar = "INSERT INTO JUGADORES(correo_electronico,nombre,apellido) VALUES('" + jugador->getCorreoElectronico() + "','" + jugador->getNombre() + "','" + jugador->getApellido() + "','" + std::to_string(jugador->getPuntaje());
		string insertar = "INSERT INTO JUGADORES(correo_electronico,nombre,apellido, puntaje) VALUES ('" + correo + "', '" + nombre + "', '" + apellido + "',"+ std::to_string(puntaje) +")";
		const char* i = insertar.c_str();
		// executar el query
		q_estado = mysql_query(this->conectar, i);
		if (!q_estado) {
			cout << "Ingreso Exitoso ..." << endl;
			//this->cerrarConexion();
		}
		else {
			cout << " xxx Error al Ingresar  xxx" << endl;
		}
	}
	else {
		cout << " xxx Error en la Conexion xxxx" << endl;
	}
	this->cerrarConexion();
}



void Database::insertarPartida(string nombre) {
	int q_estado;
	//_variant_t MyVar = puntaje;

	this->abrirConexion();
	if (this->conectar) {
		//string  insertar = "INSERT INTO JUGADORES(correo_electronico,nombre,apellido) VALUES('" + jugador->getCorreoElectronico() + "','" + jugador->getNombre() + "','" + jugador->getApellido() + "','" + std::to_string(jugador->getPuntaje());
		string insertar = "INSERT INTO PARTIDAS(nombre_partida) values ('" + nombre +  "')";
		const char* i = insertar.c_str();
		// executar el query
		q_estado = mysql_query(this->conectar, i);
		if (!q_estado) {
			cout << "Ingreso Exitoso ..." << endl;
			//this->cerrarConexion();
		}
		else {
			cout << " xxx Error al Ingresar  xxx" << endl;
		}
	}
	else {
		cout << " xxx Error en la Conexion xxxx" << endl;
	}
	this->cerrarConexion();
}


void Database::insertarTablero(string nombrePartida, int idPartida, string idJugador) {
	int q_estado;
	//_variant_t MyVar = puntaje;

	this->abrirConexion();
	if (this->conectar) {
		//string  insertar = "INSERT INTO JUGADORES(correo_electronico,nombre,apellido) VALUES('" + jugador->getCorreoElectronico() + "','" + jugador->getNombre() + "','" + jugador->getApellido() + "','" + std::to_string(jugador->getPuntaje());
		string insertar = "INSERT INTO TABLEROS(nombre_partida, id_partida, id_jugador) VALUES ('" + nombrePartida + "', " + std::to_string(idPartida) + ", '" + idJugador + "')";
		const char* i = insertar.c_str();
		// executar el query
		q_estado = mysql_query(this->conectar, i);
		if (!q_estado) {
			cout << "Ingreso Exitoso ..." << endl;
			//this->cerrarConexion();
		}
		else {
			cout << " xxx Error al Ingresar  xxx" << endl;
		}
	}
	else {
		cout << " xxx Error en la Conexion xxxx" << endl;
	}
	this->cerrarConexion();
}

