#pragma once
#include "Examen.h"

class RepositoryArray {
private:
	Examen elem[30];
	int dim;
public:
	RepositoryArray();
	int findElem(Examen); //returneaza pozitia elem dupa nume
	void addElem(Examen);
	int deleteElem(Examen);
	void updateElem(Examen, char*, char*, int);
	Examen* getAll(); //returneaza un vector de studenti
	int size();
	~RepositoryArray();
};
