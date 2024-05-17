#include <iostream>
#include "Soldado.h"
#include <stdlib.h>
#include <time.h>
using namespace std;
void batalla(Soldado* sold1, Soldado* sold2) {
	bool victoriaSold1 = false;
	bool victoriaSold2 = false;
	while (victoriaSold1 == false && victoriaSold2==false ) {
		cout << "Ataque 1 de Soldado " << sold1->getTipo() << " = " << sold1->getAtaqueTotal1() << endl;
		cout << endl;
		cout << "Ataque 2 de Soldado " << sold1->getTipo() << " = " << sold1->getAtaqueTotal2() << endl;
		cout << endl;
		cout << "Ataque total de Soldado " << sold1->getTipo() << " = " << sold1->atacar(sold2) << endl;
		cout << endl;
		if (sold2->getSalud() <= 0) {
			sold2->setSalud(0);
			victoriaSold1 = true;
			break;
		}
		cout << "Vida de soldado " << sold2->getTipo() << " despues de recibir el ataque: " << sold2->getSalud() << endl;
		cout << endl;
		////////
		cout << "Ataque 1 de Soldado " << sold2->getTipo() << " = " << sold2->getAtaqueTotal1() << endl;
		cout << endl;
		cout << "Ataque 2 de Soldado " << sold2->getTipo() << " = " << sold2->getAtaqueTotal2() << endl;
		cout << endl;
		cout << "Ataque total de Soldado " << sold2->getTipo() << " = " << sold2->atacar(sold1) << endl;
		cout << endl;
		if (sold1->getSalud() <= 0) {
			sold1->setSalud(0);
			victoriaSold2 = true;
			break;
		}
		cout << "Vida de soldado " << sold1->getTipo() << " despues de recibir el ataque: " << sold1->getSalud() << endl;
		cout << endl;
	}
	if (victoriaSold1 == true) {
		cout << "¡Soldado 1 es el ganador!" << endl;
	}
	else if (victoriaSold2 == true) {
		cout << "¡Soldado 2 es el ganador!" << endl;
	}
	cout << endl;
}
void imprimirSoldado(Soldado *sold) {
	cout << "Tipo: " << sold->getTipo() << endl;
	cout << "Daño: " << sold->getDanio() << endl;
	cout << "Velolcidad: " << sold->getVelocidad() << endl;
	cout << "Fuerza: " << sold->getFuerza() << "%" << endl;
	cout << "Salud: " << sold->getSalud() << endl;
	cout << "Ataque 1:" << sold->getAtaque1() << endl;
	cout << "Ataque 2:" << sold->getAtaque2() << endl;
	cout << endl;
}
void ejercicio1() {
	Soldado *soldado1 = new Soldado();
	Soldado *soldado2 = new Soldado();
	int opcion_menu;
	while (true) {
		cout << "---- Menú ----" << endl;
		cout << "1. Crear Soldados" << endl;
		cout << "2. Listar Soldados" << endl;
		cout << "3. Batalla de soldados" << endl;
		cout << "4. Salir" << endl;
		cout << endl;
		cout << "Ingrese la opcion que desea realizar: ";
		cin >> opcion_menu;
		cout << endl;
		if (opcion_menu == 1) {
			soldado1->generarSoldadoAleatorio();
			soldado2->generarSoldadoAleatorio();
			cout << "Has generado soldados correctamente" << endl;
			cout << endl;
		}
		else if (opcion_menu == 2) {
			cout << "Soldado 1" << endl;
			imprimirSoldado(soldado1);
			cout << "Soldado 2" << endl;
			imprimirSoldado(soldado2);
		}
		else if (opcion_menu == 3) {
			batalla(soldado1,soldado2);
		}
		else if (opcion_menu == 4) {
			soldado1->~Soldado();
			soldado2->~Soldado();
			break;
			
		}
		else {
			cout << "Has ingresado una opcion invalida, vuelve a intentarlo." << endl;
			cout << endl;
		}
	}
	cout << endl;
}
void menu() {
	int opcion;
	while (true) {
		cout << "---- Menú ----" << endl;
		cout << "1. El mejor soldado." << endl;
		cout << "2. Salir." << endl;
		cin >> opcion;
		if (opcion == 1) {
			ejercicio1();
		}
		else if (opcion == 2) {
			cout << "El programa ha finalizado.";
			break;
		}
		else {
			cout << "Error, has seleccionado una opcion invalida, porfavor intentalo de nuevo." << endl;
		}
	}
}
int main()
{
	srand(time(NULL));
	setlocale(LC_ALL, "spanish");
	menu();
	return 0;
}
