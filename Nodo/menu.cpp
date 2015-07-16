#include <iostream>
#include <iomanip>
#include "menu.h"
#include "windows.h"
#include "List.h"

using std::ios;
using std::resetiosflags;
using std::setiosflags;
using std::setw;
using std::setfill;
using std::cin;
using std::cout;
using std::endl;
using std::string;

void home()
{
	cout << "\tdb    db d8888b. d888888b d888888b  .o88b. .d8888.  .d8b. " << endl;
	cout << "\t88    88 88  `8D   `88'     `88'   d8P  Y8 88'  YP d8' `8b" << endl;
	cout << "\t88    88 88oodD'    88       88    8P      `8bo.   88ooo88" << endl;
	cout << "\t88    88 88~~~      88       88    8b        `Y8b. 88~~~88" << endl;
	cout << "\t88b  d88 88        .88.     .88.   Y8b  d8 db   8D 88   88" << endl;
	cout << "\t~Y8888P' 88      Y888888P Y888888P  `Y88P' `8888Y' YP   YP" << endl;
}

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

void header()
{
	cout << "+-----+----------------------------------------------------------------------------------------------+" << endl;
	cout << "|  id | pelicula           | pais               | fecha              | genero             | rentada  |" << endl;
	cout << "+-----+----------------------------------------------------------------------------------------------+" << endl;
}

void print_nodo(Nodo * aux)
{
	cout  << "| " << setiosflags(ios::right) << setw(3) << aux->GetId()
		 << " | " << resetiosflags(ios::right) << setiosflags(ios::left) << setw(18) << aux->GetName()
		 << " | " << setw(18) << aux->GetCountry()
		 << " | " << setw(18) << aux->GetDate()
		 << " | " << setw(18) << aux->GetType()
		 << " | " << setw(8) << aux->GetFree()
		 << " |" << endl;
}

void print_empty()
{
	cout << "| NULL" << setiosflags(ios::right) << setw(96) << setfill(' ') << " |" << endl;
}

void footer()
{
	cout << "+" << setw(100) << setfill('-') << "" << "+" << endl;
}