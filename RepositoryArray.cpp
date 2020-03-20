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

