#pragma once

#include "NotaStudent.h"

class RepositoryArray {
private:
	NotaStudent elem[30];
	int dim;
public:
	RepositoryArray();
	int findElem(NotaStudent); //returneaza pozitia elem dupa nume
	void addElem(NotaStudent);
	void deleteElem(NotaStudent);
	void updateElem(NotaStudent, char*, char*, int);
	NotaStudent* getAll(); //returneaza un vector de studenti
	int size();
	~RepositoryArray();
};
