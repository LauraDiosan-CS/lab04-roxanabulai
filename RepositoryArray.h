#pragma once
#ifndef REPO_H
#define REPO_H
#include "NotaStudent.h"
class RepositoryArray {
private:
	NotaStudent elem[30];
	int dim;
public:
	RepositoryArray();
	void addElem(NotaStudent);
	NotaStudent* getAll(); //returneaza un vector de studenti
	int size();
	//int findElem(NotaStudent); //returneaza pozitia
	//void delElem(NotaStudent);
	//void updateElem(NotaStudent, char*, int);
	//NotaStudent getItemFromPos(int);
	~RepositoryArray();
};
#endif
