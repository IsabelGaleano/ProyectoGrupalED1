#ifndef NODO_H
#define NODO_H

class Nodo
{
private:
	int info;
	Nodo* sig;
public:
	Nodo();
	Nodo(int);
	void setInfo(int x);
	int getInfo();

	Nodo* getSig();
	void setSig(Nodo* sig);
};
#endif

