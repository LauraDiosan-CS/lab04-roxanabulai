#include<iostream>
#include "NotaStudent.h"
#include "RepositoryArray.h"
#include "Tests.h"
#include <assert.h>

void testConstructors() {
	//static
	NotaStudent s;//implicit const
	assert((s.getNota() == 0) && (s.getNume() == NULL) &&(s.getData()==NULL));

	char* nume1 = new char[10];
	strcpy_s(nume1, sizeof "Rox", "Rox");
	char* data1 = new char[10];
	strcpy_s(data1, sizeof "1.05.2000", "1.05.2000");
	int nota1;
	nota1 = 10;
	NotaStudent s1(nume1, data1, nota1);//const with param

	assert((s1.getNota() == 10) && (strcmp(s1.getNume(), "Rox") == 0) && (strcmp(s1.getData(),"1.05.2000")==0));

	//dynamic
	NotaStudent* s2;
	s2 = new NotaStudent();//implicit constr
	assert((s2->getNota() == 0) && (s2->getNume() == NULL) &&(s2->getData()==NULL));

	char* nume2 = new char[10];
	strcpy_s(nume2, sizeof "Ioana", "Ioana");
	char* data2 = new char[10];
	strcpy_s(data2, sizeof "1.01.2001", "1.01.2001");
	int nota2;
	nota2 = 1;
	NotaStudent* s3 = new NotaStudent(nume2,data2,nota2);//const by param
	assert((s3->getNota() == 1) && (strcmp(s3->getNume(), "Ioana") == 0) && (strcmp(s3->getData(),"1.01.2001")==0));
	if (s3 != NULL) {
		delete s3;//destructor
		s3 = NULL;
	}

}

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
	NotaStudent s1(nume1,data1, 4);
	NotaStudent s2(nume2,data2, 5);
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
	NotaStudent s1(nume1, data1, 4);
	NotaStudent s2(nume2, data2, 5);
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
	NotaStudent s1(nume1, data1, 4);
	NotaStudent s2(nume2, data2, 5);
	elem->addElem(s1);
	elem->addElem(s2);

	assert(elem->size() == 2);

	elem->deleteElem(s2);
	assert(elem->size() == 1);
	assert(strcmp(elem->getAll()[0].getNume(), "Alex") == 0);
	assert(strcmp(elem->getAll()[0].getData(), "1.09.2009") == 0);
	assert(elem->getAll()[0].getNota() == 4);
}