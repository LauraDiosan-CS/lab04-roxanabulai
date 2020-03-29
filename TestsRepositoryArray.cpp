#include "TestsRepositoryArray.h"
#include "RepositoryArray.h"
#include <assert.h>
#include "Examen.h"

void testaddElem()
{
	RepositoryArray elem[2];
	char* nume1 = new char[10];
	char* nume2 = new char[10];
	char* data1 = new char[10];
	char* data2 = new char[10];
	strcpy_s(nume1, sizeof "Alex", "Alex");
	strcpy_s(nume2, sizeof "Ana", "Ana");
	strcpy_s(data1, sizeof "1.09.2009", "1.09.2009");
	strcpy_s(data2, sizeof "8.08.2008", "8.08.2008");
	Examen s1(nume1, data1, 4);
	Examen s2(nume2, data2, 5);
	elem->addElem(s1);
	elem->addElem(s2);

	assert(elem->size() == 2);
}

void testupdateElem()
{
	RepositoryArray elem[2];
	char* nume1 = new char[10];
	char* nume2 = new char[10];
	char* data1 = new char[10];
	char* data2 = new char[10];
	strcpy_s(nume1, sizeof "Alex", "Alex");
	strcpy_s(nume2, sizeof "Ana", "Ana");
	strcpy_s(data1, sizeof "1.09.2009", "1.09.2009");
	strcpy_s(data2, sizeof "8.08.2008", "8.08.2008");
	Examen s1(nume1, data1, 4);
	Examen s2(nume2, data2, 5);
	elem->addElem(s1);
	elem->addElem(s2);

	assert(elem->size() == 2);

	char* nume3 = new char[10];
	char* data3 = new char[10];
	strcpy_s(nume3, sizeof "Alexandra", "Alexandra");
	strcpy_s(data3, sizeof "7.07.2007", "7.07.2007");
	elem->updateElem(s1, nume3, data3, 10);
	assert(elem->size() == 2);
	assert(strcmp(elem->getAll()[0].getNume(), "Alexandra") == 0);
	assert(strcmp(elem->getAll()[0].getData(), "7.07.2007") == 0);
	assert(elem->getAll()[0].getNota() == 10);

}


void testdeleteElem()
{
	RepositoryArray elem[2];
	char* nume1 = new char[10];
	char* nume2 = new char[10];
	char* data1 = new char[10];
	char* data2 = new char[10];
	strcpy_s(nume1, sizeof "Alex", "Alex");
	strcpy_s(nume2, sizeof "Ana", "Ana");
	strcpy_s(data1, sizeof "1.09.2009", "1.09.2009");
	strcpy_s(data2, sizeof "8.08.2008", "8.08.2008");
	Examen s1(nume1, data1, 4);
	Examen s2(nume2, data2, 5);
	elem->addElem(s1);
	elem->addElem(s2);

	assert(elem->size() == 2);

	elem->deleteElem(s2);
	assert(elem->size() == 1);
	assert(strcmp(elem->getAll()[0].getNume(), "Alex") == 0);
	assert(strcmp(elem->getAll()[0].getData(), "1.09.2009") == 0);
	assert(elem->getAll()[0].getNota() == 4);
}