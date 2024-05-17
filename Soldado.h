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
	int constanteAtaque1 = 0;
	int constanteAtaque2 = 0;
public:
	void setSalud(int);
	int getAtaqueTotal1();
	int getAtaqueTotal2();
	string getTipo();
	int getDanio();
	int getVelocidad();
	double getFuerza();
	double getSalud();
	string getAtaque1();
	string getAtaque2();
	double atacar(Soldado*);
	void generarSoldadoAleatorio();
	Soldado();
	~Soldado();
};