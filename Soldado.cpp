#include "Soldado.h"
#include <String>
#include <stdlib.h>
int Soldado :: atacar() {

}

Soldado Soldado::generarSoldadoAleatorio() {
	srand(time(0));
	int rifaTipo;
	rifaTipo = rand() % 2 + 1;
}

Soldado::Soldado() {

}
Soldado::~Soldado() {

}