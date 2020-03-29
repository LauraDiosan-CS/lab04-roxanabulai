#include<iostream>
#include "Examen.h"
#include "TestsExamen.h"
#include <assert.h>


void testConstructors() {
	//static
	Examen s;//implicit const
	assert((s.getNota() == 0) && (s.getNume() == NULL) && (s.getData() == NULL));

	char* nume1 = new char[10];
	strcpy_s(nume1, sizeof "Rox", "Rox");
	char* data1 = new char[10];
	strcpy_s(data1, sizeof "1.05.2000", "1.05.2000");
	int nota1;
	nota1 = 10;
	Examen s1(nume1, data1, nota1);//const with param

	assert((s1.getNota() == 10) && (strcmp(s1.getNume(), "Rox") == 0) && (strcmp(s1.getData(), "1.05.2000") == 0));

	//dynamic
	Examen* s2;
	s2 = new Examen();//implicit constr
	assert((s2->getNota() == 0) && (s2->getNume() == NULL) && (s2->getData() == NULL));

	char* nume2 = new char[10];
	strcpy_s(nume2, sizeof "Ioana", "Ioana");
	char* data2 = new char[10];
	strcpy_s(data2, sizeof "1.01.2001", "1.01.2001");
	int nota2;
	nota2 = 1;
	Examen* s3 = new Examen(nume2, data2, nota2);//const by param
	assert((s3->getNota() == 1) && (strcmp(s3->getNume(), "Ioana") == 0) && (strcmp(s3->getData(), "1.01.2001") == 0));
	if (s3 != NULL) {
		delete s3;//destructor
		s3 = NULL;
	}

}