#pragma once
#include "Service.h"
#include "Examen.h"
#include "RepositoryArray.h"
//void showUI(Service&);
class UI
{
private:
	RepositoryArray repo;
public:
	void add_UI_Examen(Service& );
	void delete_UI_Examen(Service& );
	int find_UI_Examen(Service& , Examen );
	void update_UI_Examen(Service& , char*, char*, int);
	void showAll(Service& serv);
	void showAll_UI_NotaMaiMare(Service& , int);
	void add_UI_bonus(Service& , char*);
};