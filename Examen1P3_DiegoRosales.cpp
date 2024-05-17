#include <iostream>
#include "Soldado.h"

using namespace std;
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
		cout << "---- Menu ----" << endl;
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
			cout << "Has generados correctamente" << endl;
		}
		else if (opcion_menu == 2) {
			cout << "Soldado 1" << endl;
			imprimirSoldado(soldado1);
			cout << "Soldado 2" << endl;
			imprimirSoldado(soldado2);
			
		}
		else if (opcion_menu == 3) {

		}
		else if (opcion_menu == 4) {

		}
		else {
			cout << "Has ingresado una opcion invalida, vuelve a intentarlo." << endl;
			cout << endl;
		}
	}
}

	void menu() {
		
	int opcion;
	while (true) {
		cout << "---- Menu ----" << endl;
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
	setlocale(LC_ALL, "spanish");
	menu();
	return 0;
}
