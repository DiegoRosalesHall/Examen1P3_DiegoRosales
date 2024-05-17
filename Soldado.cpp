#include "Soldado.h"
#include <String>
#include <stdlib.h>
#include <time.h>
double Soldado :: atacar(Soldado *sold2) {
	double fuerzaReal = fuerza / 100;
	int totalAtaque1 = danio + velocidad + constanteAtaque1;
	int totalAtaque2 = danio + velocidad + constanteAtaque2;
	double ataqueTotal = (totalAtaque1 + totalAtaque2) * fuerzaReal;
	sold2->setSalud(sold2->getSalud() - ataqueTotal);
	return ataqueTotal;
}
void Soldado::generarSoldadoAleatorio() {
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
		constanteAtaque1 = 10;
		constanteAtaque2 = 5;
	}
	else if (rifaTipo == 2) {
		tipo_soldado = "Naval";
		danio = rand() % 6 + 10;
		velocidad = rand() % 6 + 5;
		fuerza = rand() % 21 + 40;
		salud = 100;
		ataque1 = "Avalancha";
		ataque2 = "Tsunami";	
		constanteAtaque1 = 8;
		constanteAtaque2 = 12;
	}
	else if (rifaTipo == 3) {
		tipo_soldado = "Army";
		danio = rand() % 8 + 8;
		velocidad = rand() % 8 + 3;
		fuerza = rand() % 21 + 30;
		salud = 100;
		ataque1 = "Contaminación";
		ataque2 = "Derrumbe";	
		constanteAtaque1 = 7;
		constanteAtaque2 = 15;
	}
}
Soldado :: Soldado() {

}
Soldado :: ~Soldado() {
	
}
void Soldado::setSalud(int S) {
	salud = S;
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
int Soldado::getAtaqueTotal1() {
	return danio + velocidad + constanteAtaque1;
}
int Soldado::getAtaqueTotal2() {
	return danio + velocidad + constanteAtaque2;
}

