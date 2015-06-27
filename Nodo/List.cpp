#include "List.h"

List::List()
{
	master = NULL;
}

List::List(Nodo* _master)
{
	SetFirst(_master);
}

void List::SetFirst(Nodo* _master)
{
	if(_master != NULL)
		_master->SetId(1);
	master = _master;
}

Nodo* List::GetFirst()
{
	return master;
}

Nodo* List::GetLast()
{
	Nodo *last = GetFirst();

	while(last->GetNodo() != NULL)
		last = last->GetNodo();

	return last;
}

void List::Add(Nodo *_new)
{
	if(GetFirst() == NULL) 
		SetFirst(_new);
	else {
		Nodo *last = GetLast();
		_new->SetId(last->GetId() + 1);
		last->SetNodo(_new);
	}
}

Nodo* List::FindId(int id)
{
	Nodo *find = GetFirst();

	if (find != NULL)
	{
		while(find->GetId() != id) 
		{
			find = find->GetNodo();
			if(find == NULL) break;
		}

		if(find != NULL)
			if (find->GetId() != id)
				find = NULL;
	}

	return find;
}

void List::DeleteFindId(int id)
{
	Nodo* parent = GetFirst();
	Nodo* children;
	Nodo*_delete = FindId(id);
	
	// Validamos la existencia del nodo
	if(_delete != NULL)
	{
		// obteneos siguiente nodo del que se eliminara
		children = _delete->GetNodo();
		// eliminamos la relación
		_delete->SetNodo(NULL);

		// El nodo a eliminar es el primero
		if(parent->GetId() == id) {
			SetFirst(children); // children puede ser un nodo ó NULL
		} else { // existe otro nodo
			while(parent->GetNodo()->GetId() != id) // verificamos si el siguiente nodo es el que se pretende eliminar 
				parent = parent->GetNodo();
			parent->SetNodo(children); // remplazamos el nodo anterior
		}
		free(_delete); // liberamos de memoria el nodo deseado
	}
}

List::~List()
{

}
