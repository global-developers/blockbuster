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

int main()
{
	char opc;
	int id;
	string value;
	Nodo *nodos = NULL;
	Nodo *aux = NULL;
	List *list = new List();

	do {
		opc = menu();
		system("cls");
		switch(opc)
		{
			case '1':
				aux = new Nodo();
				cout << "Ingrese una valor: ";
				cin >> value;
				aux->SetValue(value);
				list->Add(aux);
			break;
			case '2':
				nodos = list->GetFirst();
				id = 0;
				cout << "+------+-----------------------------------------------+" << endl;
				cout << "|   id | value                                         |" << endl;
				cout << "+------+-----------------------------------------------+" << endl;
				while(nodos != NULL)
				{
					cout << "| " << setiosflags(ios::right) << setw(4) << nodos->GetId()
						 << " | " << resetiosflags(ios::right) << setiosflags(ios::left) << setw(45) << nodos->GetValue()
						 << " |" << endl;
					nodos = nodos->GetNodo();
					id++;
				}
				if(id == 0)
					cout << "| NULL                                                 |" << endl;
				cout << "+------------------------------------------------------+" << endl;
			break;
			case '3':
				cout << "Ingrese el \"id\" del nodo a buscar: ";
				cin >> id;


				aux = list->FindId(id);

				cout << "+------+-----------------------------------------------+" << endl;
				cout << "|   id | value                                         |" << endl;
				cout << "+------+-----------------------------------------------+" << endl;

				if(aux != NULL)
				{
					cout << "| " << setiosflags(ios::right) << setw(4) << aux->GetId()
						 << " | " << resetiosflags(ios::right) << setiosflags(ios::left) << setw(45) << aux->GetValue()
						 << " |" << endl;
				} else 
					cout << "| NULL                                                 |" << endl;
				cout << "+------------------------------------------------------+" << endl;

			break;
			case '4':
				cout << "Ingrese el \"id\" del nodo a eliminar: ";
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

		getch();
		system("cls");

	} while(opc != '5');

	return 0;
}