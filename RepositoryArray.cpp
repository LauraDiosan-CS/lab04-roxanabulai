#include "RepositoryArray.h"
#include "NotaStudent.h"

RepositoryArray::RepositoryArray() { dim = 0; }

void RepositoryArray::addElem(NotaStudent s)
{
	elem[dim++] = s;
}

void RepositoryArray::deleteElem(NotaStudent s)
{
	int i = findElem(s);
	if (i != -1)
	{
		elem[i] = elem[dim - 1];
		dim--;
	}
}
void RepositoryArray::updateElem(NotaStudent s, char* n, char*d,int nota )
{
	int i = findElem(s);
	elem[i].setNume(n);
	elem[i].setData(d);
	elem[i].setNota(nota); 
}
int RepositoryArray::findElem(NotaStudent s)
{
	for (int i = 0; i < dim; i++)
		if (elem[i] == s) return i;
	return -1;
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

