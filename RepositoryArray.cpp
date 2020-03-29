#include "RepositoryArray.h"
#include "Examen.h"

RepositoryArray::RepositoryArray() { dim = 0; }

void RepositoryArray::addElem(Examen s)
{
	elem[dim++] = s;
}

int RepositoryArray::deleteElem(Examen s)
{
	int i = findElem(s);
	if (i != -1)
	{
		elem[i] = elem[dim - 1];
		dim--;
		return 0;
	}
	return -1;
}
void RepositoryArray::updateElem(Examen s, char* n, char* d, int nota)
{
	int i = findElem(s);
	if (i != -1)
	{
		elem[i].setNume(n);
		elem[i].setData(d);
		elem[i].setNota(nota);
	}
}
int RepositoryArray::findElem(Examen s)
{
	for (int i = 0; i < dim; i++)
		if (elem[i] == s) return i;
	return -1;
}
Examen* RepositoryArray::getAll()
{
	return elem;
}

int RepositoryArray::size() { return dim; }
RepositoryArray::~RepositoryArray()
{
	dim = -1;

}

