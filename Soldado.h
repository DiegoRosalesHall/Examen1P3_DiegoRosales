#pragma once
#include <String>
#include <iostream>
using namespace std;
class Soldado {
private:
	int atacar();
	Soldado generarSoldadoAleatorio();
	Soldado();
	~Soldado();
public:
	int danio;
	string tipo_soldado;
	int velocidad;
	double fuerza;
	double salud;
	string ataque1;
	string ataque2;
};