#include <iostream>
#include "Soldado.h"
using namespace std;
void ejercicio1() {
	Soldado soldado1(), soldado2();
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
	
		}
		else if (opcion_menu == 2) {

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
	int cont = 0;
	srand(time(0));
	while (cont < 20) {
		int rifaTipo;
		rifaTipo = rand() % 2 + 1;
		cout << rifaTipo << endl;
		cont++;
	}
	return 0;
}
