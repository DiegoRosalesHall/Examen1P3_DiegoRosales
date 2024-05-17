#pragma once
#include <String>
#include <iostream>
using namespace std;
class Soldado {
private:
	int danio = 0;
	string tipo_soldado = "";
	int velocidad = 0;
	double fuerza = 0;
	double salud = 0;
	string ataque1 = "";
	string ataque2 = "";
public:
	string getTipo();
	int getDanio();
	int getVelocidad();
	double getFuerza();
	double getSalud();
	string getAtaque1();
	string getAtaque2();
	int atacar();
	void generarSoldadoAleatorio();
	Soldado();
	~Soldado();
};