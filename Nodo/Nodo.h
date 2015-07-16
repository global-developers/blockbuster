#ifndef _NODO_H_
#define _NODO_H_
#include <string>
using std::string;

class Nodo {
private:
	int id;
	string name;
	string country;
	string date;
	string type;
	bool free;
	Nodo *nodo;
public:
	Nodo(void);
	Nodo(string);
	int GetId();
	void SetId(int);
	Nodo* GetNodo();
	void SetNodo(Nodo*);

	string GetName();
	void SetName(string);

	string GetCountry();
	void SetCountry(string);

	string GetDate();
	void SetDate(string);
	
	string GetType();
	void SetType(string);

	bool GetFree();
	void SetFree(bool);

	virtual ~Nodo(void);
};

#endif