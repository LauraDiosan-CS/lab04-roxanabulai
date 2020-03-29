#pragma once
#include "RepositoryArray.h"
#include "Examen.h"

class Service
{
private:
	RepositoryArray repo;
public:
	void add_service(Examen s);
	int delete_service(Examen s);
	int find_service(Examen s);
	void update_service(Examen s, char*, char*, int);
	int get_Size();
	int nota_mai_mare(Examen s, int);
	int bonus(Examen s, char*);
	Examen* get_All();
};