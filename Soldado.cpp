#include "Soldado.h"
#include <String>
#include <stdlib.h>
#include <time.h>
int Soldado :: atacar() {
	return 0;
}
void Soldado::generarSoldadoAleatorio() {
	srand(time(NULL));
	int rifaTipo;
	rifaTipo = rand() % 3 + 1;
	if (rifaTipo == 1) {
		tipo_soldado = "Marine";
		danio = rand() % 4 + 12;
		velocidad = rand() % 3 + 8;
		fuerza = rand() % 21 + 45;
		salud = 100;
		ataque1 = "Bola de Fuego";
		ataque2 = "Volcán";
	}
	else if (rifaTipo == 2) {
		tipo_soldado = "Naval";
		danio = rand() % 6 + 10;
		velocidad = rand() % 6 + 5;
		fuerza = rand() % 21 + 40;
		salud = 100;
		ataque1 = "Avalancha";
		ataque2 = "Tsunami";	
	}
	else if (rifaTipo == 3) {
		tipo_soldado = "Army";
		danio = rand() % 8 + 8;
		velocidad = rand() % 8 + 3;
		fuerza = rand() % 21 + 30;
		salud = 100;
		ataque1 = "Contaminación";
		ataque2 = "Derrumbe";	
	}
}
Soldado :: Soldado() {

}
Soldado :: ~Soldado() {
}
string Soldado::getTipo() {
	return tipo_soldado;
}
int Soldado::getDanio() {
	return danio;
}
int Soldado::getVelocidad() {
	return velocidad;
}
double Soldado::getFuerza() {
	return fuerza;
}
double Soldado::getSalud() {
	return salud;
}
string Soldado::getAtaque1() {
	return ataque1;
}
string Soldado::getAtaque2() {
	return ataque2;
}

