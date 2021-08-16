

#include <iostream>
#include "Jugador.h"

int main()
{
    Jugador* jugador = new Jugador();
    for (int i = 0; i < 20; i++) {
        jugador->getMyShips()->Agregar("_");
    }

    cout << jugador->getMyShips()->Mostrar();
}