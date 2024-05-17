#include <iostream>
#include "Soldado.h"
#include <stdlib.h>
#include <time.h>
using namespace std;
void batalla(Soldado* sold1, Soldado* sold2) {
	bool victoriaSold1 = false;
	bool victoriaSold2 = false;
	// Metodo de batalla, utiliza dos booleanos para verificar la victoria de cada jugador luego de atacar.
	while (victoriaSold1 == false && victoriaSold2==false ) {
		cout << "Ataque 1 de Soldado " << sold1->getTipo() << " = " << sold1->getAtaqueTotal1() << endl;
		cout << endl;
		cout << "Ataque 2 de Soldado " << sold1->getTipo() << " = " << sold1->getAtaqueTotal2() << endl;
		cout << endl;
		cout << "Ataque total de Soldado " << sold1->getTipo() << " = " << sold1->atacar(sold2) << endl;
		cout << endl;
		//Revisa la victoria luego del ataque del soldado 1.
		if (sold2->getSalud() <= 0) {
			sold2->setSalud(0);
			victoriaSold1 = true;
			break;
		}
		cout << "Vida de soldado " << sold2->getTipo() << " despues de recibir el ataque: " << sold2->getSalud() << endl;
		cout << endl;
		cout << "Ataque 1 de Soldado " << sold2->getTipo() << " = " << sold2->getAtaqueTotal1() << endl;
		cout << endl;
		cout << "Ataque 2 de Soldado " << sold2->getTipo() << " = " << sold2->getAtaqueTotal2() << endl;
		cout << endl;
		cout << "Ataque total de Soldado " << sold2->getTipo() << " = " << sold2->atacar(sold1) << endl;
		cout << endl;
		//Revisa la victoria luego del ataque del soldado 2.
		if (sold1->getSalud() <= 0) {
			sold1->setSalud(0);
			victoriaSold2 = true;
			break;
		}
		cout << "Vida de soldado " << sold1->getTipo() << " despues de recibir el ataque: " << sold1->getSalud() << endl;
		cout << endl;
		// Si no entra a ningun if, se repite hasta que uno gane.
	}

	//Dependiendo del motivo que quebro el while, el juego imprime al soldado ganador, y setea la vida del muerto a 0.
	if (victoriaSold1 == true) {
		cout << "¡Soldado 1 es el ganador!" << endl;
	}
	else if (victoriaSold2 == true) {
		cout << "¡Soldado 2 es el ganador!" << endl;
	}
	cout << endl;
}
void imprimirSoldado(Soldado *sold) {
	//Metodo para imprimir los soldados y no duplicar codigo.
	cout << "Tipo: " << sold->getTipo() << endl;
	cout << "Daño: " << sold->getDanio() << endl;
	cout << "Velolcidad: " << sold->getVelocidad() << endl;
	cout << "Fuerza: " << sold->getFuerza() << "%" << endl;
	cout << "Salud: " << sold->getSalud() << endl;
	cout << "Ataque 1: " << sold->getAtaque1() << endl;
	cout << "Ataque 2: " << sold->getAtaque2() << endl;
	cout << endl;
}
void ejercicio1() {
	Soldado *soldado1 = new Soldado();
	Soldado *soldado2 = new Soldado();
	int opcion_menu;
	bool flag = false;
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
			// Flag que valida que existan soldados creados para validaciones generales.
			flag = true;
		}
		else if (opcion_menu == 2) {
			if (flag == false) {
				//Validaciones por si queremos listar sin crear soldados, o por si uno muere en batalla.
				cout << "No puedes listar a los soldados debido a que no existen soldados creados." << endl;
				cout << endl;
			}
			else if (soldado1->getSalud() <= 0 || soldado2->getSalud() <= 0) {
				cout << "No puedes listar a los soldados debido a que uno de ellos ha perdido la vida en batalla." << endl;
				cout << endl;
			}
			else {
				cout << "Soldado 1" << endl;
				imprimirSoldado(soldado1);
				cout << "Soldado 2" << endl;
				imprimirSoldado(soldado2);
			}
		}
		else if (opcion_menu == 3) {
			//Validaciones por si queremos batallar sin crear soldados, o por si uno muere en batalla.
			if (flag == false) {
				cout << "No puedes batallar debido a que no has creado soldados para batallar." << endl;
				cout << endl;
			}
			else if (soldado1->getSalud() <= 0 || soldado2->getSalud() <= 0) {
				cout << "No puedes batallar debido a que uno de los soldados ha perdido la vida en batalla." << endl;
				cout << endl;
			}
			else {
				batalla(soldado1, soldado2);
			}
		}
		else if (opcion_menu == 4) {
			//Utilizamos nuestros metodos destructores para un mejor uso de la memoria.
			delete soldado1;
			delete soldado2;
			break;	
		}
		else {
			//Validacion para que la opcion ingresada sea valida.
			cout << "Has ingresado una opcion invalida, vuelve a intentarlo." << endl;
			cout << endl;
		}
	}
	cout << endl;
}
void menu() {
	srand(time(NULL));
	setlocale(LC_ALL, "spanish");
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
	menu();
	return 0;
}
