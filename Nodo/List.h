#ifndef _LIST_H_
#define _LIST_H_
#include "Nodo.h"

class List{
private:
	Nodo* master;
public:
	List();
	List(Nodo*);
	void SetFirst(Nodo*); 
	Nodo* GetFirst(); 
	Nodo* GetLast();
	void Add(Nodo*);
	Nodo* FindId(int);
	void DeleteFindId(int);
	~List();
protected:
private:
};

#endif