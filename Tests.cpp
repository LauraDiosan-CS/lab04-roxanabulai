#include <assert.h>
#include <string.h>
#include "Tests.h"
#include "NotaStudent.h"

void testEntity()
{
	NotaStudent studenti[30];
	char* nume1 = new char[10];
	char* nume2 = new char[10];
	char* data1 = new char[10];
	char* data2 = new char[10];
	int nota1;
	int nota2;

	strcpy_s(nume1, sizeof "Ana", "Ana");
	strcpy_s(data1, sizeof "12.09.2020", "12.09.2020");
	nota1 = 10;
	NotaStudent s1(nume1, data1, nota1);

	strcpy_s(nume2, sizeof "Ariadna", "Ariadna");
	strcpy_s(data2, sizeof "10.01.2000", "10.01.2000");
	nota2 = 5;
	NotaStudent s2(nume2,data2,nota2);

	studenti[0] = s1;
	studenti[1] = s2;

}