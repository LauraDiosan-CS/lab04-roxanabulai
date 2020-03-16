#include "RepositoryArray.h"
#include "NotaStudent.h"

RepositoryArray::RepositoryArray() { dim = 0; }

void RepositoryArray::addElem(NotaStudent s)
{
	elem[dim++] = s;
}


NotaStudent* RepositoryArray::getAll()
{
	return elem;
}

int RepositoryArray::size() { return dim; }
RepositoryArray::~RepositoryArray()
{
	dim = -1;

}



/*
NotaStudent RepositoryArray::getItemFromPos(int i)
{
	return elem[i];
}
Repo r;
Student s1("Victor", 21);
Student s2("Ana", 20);
r.add(s1);
r.add9s2);
r.delete(s1);
r.find(s2);
void RepositoryArray::delElem(Student s)
{
	int i = findElem(s);
	if (i != -1)
	{
		elem[i] = elem[size - 1];
		size--;
	}
}
void RepositoryArray::updateElem(Student s, char* n, int v)
{
	int i = findElem(s);
	elem[i].setNume(n);
	elem[i].setVarsta(v);
}
int RepositoryArray::findElem(Student s)
{
	for (int i = 0; i < size; i++)
		if (elem[i] == s) return i;
	return -1;
}*/