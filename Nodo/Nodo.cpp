#include "Nodo.h"

Nodo::Nodo()
{
	id = 0;
	nodo = NULL;
}

Nodo::Nodo(string _value)
{
	value = _value;
}

int Nodo::GetId()
{
	return id;
}

void Nodo::SetId(int _id)
{
	id = _id;
}

Nodo* Nodo::GetNodo()
{
	return nodo;
}

void Nodo::SetNodo(Nodo *_nodo)
{
	nodo = _nodo;
}

string Nodo::GetValue()
{
	return value;
}

void Nodo::SetValue(string _value)
{
	value = _value;
}

Nodo::~Nodo()
{

}