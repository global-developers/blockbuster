#include "Nodo.h"

Nodo::Nodo()
{
	id = 0;
	nodo = NULL;
	free = false;
}

Nodo::Nodo(string _name)
{
	name = _name;
	free = false;
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

string Nodo::GetName()
{
	return name;
}

void Nodo::SetName(string _name)
{
	name = _name;
}

string Nodo::GetCountry()
{
	return country;
}

void Nodo::SetCountry(string _country)
{
	country = _country;
}

string Nodo::GetDate()
{
	return date;
}

void Nodo::SetDate(string _date)
{
	date = _date;
}

string Nodo::GetType()
{
	return type;
}

void Nodo::SetType(string _type)
{
	type = _type;
}

bool Nodo::GetFree()
{
	return free;
}

void Nodo::SetFree(bool _free)
{
	free = _free;
}

Nodo::~Nodo()
{

}