#ifndef _NODO_H_
#define _NODO_H_
#include <string>
using std::string;

class Nodo {
private:
	int id;
	string value;
	Nodo *nodo;
public:
	Nodo(void);
	Nodo(string);
	int GetId();
	void SetId(int);
	Nodo* GetNodo();
	void SetNodo(Nodo*);
	string GetValue();
	void SetValue(string);
	virtual ~Nodo(void);
};

#endif