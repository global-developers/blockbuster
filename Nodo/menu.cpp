#include <iostream>
#include "menu.h"
#include "windows.h"

using std::cin;
using std::cout;
using std::endl;

char menu()
{
	char opc = '\0';
	
	do {
		cout << "\tMenu" << endl;
		cout << "1. Agregar" << endl;
		cout << "2. Listar" << endl;
		cout << "3. Buscar" << endl;
		cout << "4. Eliminar" << endl;
		cout << "5. Salir" << endl;
		cout << "Selecione una opcion: ";
		cin >> opc;

		if(opc < '1' || opc > '5')
		{
			cout << "Opcion invalida!!!" << endl;
			cin.get();
			system("cls");
		}

	} while(opc < '1' || opc > '5');

	return opc;
}