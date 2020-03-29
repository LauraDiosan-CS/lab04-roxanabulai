#include "TestsService.h"
#include "Service.h"
#include <assert.h>

void testaddElemService()
{
	Service elem;
	char* nume1 = new char[20];
	char* nume2 = new char[20];
	char* data1 = new char[20];
	char* data2 = new char[20];
	strcpy_s(nume1, sizeof "Alex", "Alex");
	strcpy_s(nume2, sizeof "Ana", "Ana");
	strcpy_s(data1, sizeof "1.09.2009", "1.09.2009");
	strcpy_s(data2, sizeof "8.08.2008", "8.08.2008");
	int nota1;
	nota1 = 4;
	int nota2;
	nota2 = 5;
	Examen s1(nume1, data1, nota1);
	Examen s2(nume2, data2, nota2);
	elem.add_service(s1);
	elem.add_service(s2);

	assert(elem.get_Size() == 2);
}

void testupdateElemService()
{
	Service elem;
	char* nume1 = new char[10];
	char* nume2 = new char[10];
	char* data1 = new char[10];
	char* data2 = new char[10];
	strcpy_s(nume1, sizeof "Alex", "Alex");
	strcpy_s(nume2, sizeof "Ana", "Ana");
	strcpy_s(data1, sizeof "1.09.2009", "1.09.2009");
	strcpy_s(data2, sizeof "8.08.2008", "8.08.2008");
	int nota1;
	nota1 = 10;
	int nota2;
	nota2 = 9;
	Examen s1(nume1, data1, nota1);
	Examen s2(nume2, data2, nota2);
	elem.add_service(s1);
	elem.add_service(s2);

	assert(elem.get_Size() == 2);

	char* nume3 = new char[10];
	char* data3 = new char[10];
	strcpy_s(nume3, sizeof "Alexandra", "Alexandra");
	strcpy_s(data3, sizeof "7.07.2007", "7.07.2007");
	int nota3;
	nota3 = 10;
	
	elem.update_service(s1, nume3, data3, nota3);

	assert(elem.get_Size() == 2);

	assert(strcmp(elem.get_All()[0].getNume(), "Alexandra") == 0);
	assert(strcmp(elem.get_All()[0].getData(), "7.07.2007") == 0);
	assert(elem.get_All()[0].getNota() == 10);

}

void testdeleteElemService()
{
	Service elem;
	char* nume1 = new char[10];
	char* nume2 = new char[10];
	char* data1 = new char[10];
	char* data2 = new char[10];
	strcpy_s(nume1, sizeof "Alex", "Alex");
	strcpy_s(nume2, sizeof "Ana", "Ana");
	strcpy_s(data1, sizeof "1.09.2009", "1.09.2009");
	strcpy_s(data2, sizeof "8.08.2008", "8.08.2008");
	int nota1;
	nota1 = 4;
	int nota2;
	nota2 = 5;

	Examen s1(nume1, data1, nota1);
	Examen s2(nume2, data2, nota2);
	elem.add_service(s1);
	elem.add_service(s2);

	assert(elem.get_Size() == 2);

	
	elem.delete_service(s2);
	assert(elem.get_Size() == 1);

	assert(strcmp(elem.get_All()[0].getNume(), "Alex") == 0);
	assert(strcmp(elem.get_All()[0].getData(), "1.09.2009") == 0);
	assert(elem.get_All()[0].getNota() == 4);
}

void testBonus()
{
	Service elem;
	char* nume1 = new char[10];
	char* nume2 = new char[10];
	char* nume3 = new char[10];
	char* data1 = new char[10];
	char* data2 = new char[10];
	char* data3 = new char[10];
	strcpy_s(nume1, sizeof "Alex", "Alex");
	strcpy_s(nume2, sizeof "Ana", "Ana");
	strcpy_s(nume3, sizeof "Ana", "Ana");
	strcpy_s(data1, sizeof "1.09.2009", "1.09.2009");
	strcpy_s(data2, sizeof "8.08.2008", "8.08.2008");
	strcpy_s(data3, sizeof "8.11.2009", "8.11.2009");
	int nota1;
	nota1 = 4;
	int nota2;
	nota2 = 5;
	int nota3;
	nota3 = 8;

	Examen s1(nume1, data1, nota1);
	Examen s2(nume2, data2, nota2);
	Examen s3(nume3, data3, nota3);
	elem.add_service(s1);
	elem.add_service(s2);
	elem.add_service(s3);

	char* nume = new char[10];

	strcpy_s(nume, sizeof "Ana", "Ana");
	assert(elem.bonus(s1,nume)==0);
	assert(elem.bonus(s2,nume)==1);
	assert(elem.bonus(s3, nume)==1);
	
}

void testNotaMaiMare()
{
	Service elem;
	char* nume1 = new char[10];
	char* nume2 = new char[10];
	char* nume3 = new char[10];
	char* data1 = new char[10];
	char* data2 = new char[10];
	char* data3 = new char[10];
	strcpy_s(nume1, sizeof "Alex", "Alex");
	strcpy_s(nume2, sizeof "Ana", "Ana");
	strcpy_s(nume3, sizeof "Ana", "Ana");
	strcpy_s(data1, sizeof "1.09.2009", "1.09.2009");
	strcpy_s(data2, sizeof "8.08.2008", "8.08.2008");
	strcpy_s(data3, sizeof "8.11.2009", "8.11.2009");
	int nota1;
	nota1 = 4;
	int nota2;
	nota2 = 5;
	int nota3;
	nota3 = 8;

	Examen s1(nume1, data1, nota1);
	Examen s2(nume2, data2, nota2);
	Examen s3(nume3, data3, nota3);
	elem.add_service(s1);
	elem.add_service(s2);
	elem.add_service(s3);

	assert(elem.nota_mai_mare(s1, 5) == 0);
	assert(elem.nota_mai_mare(s2, 5) == 0);
	assert(elem.nota_mai_mare(s3, 5) == 1);
}