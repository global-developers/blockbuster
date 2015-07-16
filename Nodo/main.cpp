#include <iostream>
#include <iomanip>
#include <string>
#include "List.h"
#include "menu.h"
#include "windows.h"
#include "conio.h"

using std::ios;
using std::resetiosflags;
using std::setiosflags;
using std::setw;
using std::setfill;
using std::cin;
using std::cout;
using std::endl;
using std::string;

void addNodo(List*, Nodo*);

int main()
{
	char opc;
	
	int id;
	string value;
	
	Nodo *nodos = NULL;
	Nodo *aux = NULL;
	
	List *list = new List();

	home();

	do {
		
		opc = menu();
		system("cls");
		
		switch(opc)
		{
			case '1':
				addNodo(list, aux);
			break;
			
			case '2':
				
				nodos = list->GetFirst();
				id = 0;

				header();
				
				while(nodos != NULL)
				{
					print_nodo(nodos);
					nodos = nodos->GetNodo();
					id++;
				}
				
				if(id == 0)
					print_empty();
			
				footer();
			
			break;
			
			case '3':
				
				cout << "Ingrese el \"id\" de la pelicula a buscar: ";
				cin >> id;

				aux = list->FindId(id);

				header();

				if(aux != NULL)
					print_nodo(aux);
				else
					print_empty();

				footer();

			break;
			case '4':
				cout << "Ingrese el \"id\" de la pelicula a eliminar: ";
				cin >> id;
				list->DeleteFindId(id);
			break;
			case '5':
				cout << "+------------------------------------------------------+" << endl;
				cout << "|------------------- REGRESA PRONTO -------------------|" << endl;
				cout << "+------------------------------------------------------+" << endl;
			break;
			default:
			break;
		}

		cout << "Presione enter para continuar...";
		getch();
		system("cls");

	} while(opc != '5');

	return 0;
}

void addNodo(List * list, Nodo * aux)
{
	aux = new Nodo();
	string value;

	cout << "Nombre : ";
	cin >> value;
	aux->SetName(value);
	
	cout << "País: ";
	cin >> value;
	aux->SetCountry(value);

	cout << "Año: ";
	cin >> value;
	aux->SetDate(value);
	
	cout << "Categoria: ";
	cin >> value;
	aux->SetType(value);
	
	list->Add(aux);
	cout << "Se ha agregado correctamente!" << endl;
}