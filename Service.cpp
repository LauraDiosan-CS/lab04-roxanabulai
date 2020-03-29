#include "Service.h"

void Service::add_service(Examen s)
{
	repo.addElem(s);
}

int Service::delete_service(Examen s)
{
	if (repo.deleteElem(s) == 0)
		return 0;
	return -1;

}

int Service::find_service(Examen s)
{
	return repo.findElem(s);
}

void Service::update_service(Examen s, char* name, char* date, int note)
{
	repo.updateElem(s, name, date, note);
}

Examen* Service::get_All()
{
	return this->repo.getAll();
}

int Service::get_Size()
{
	return this->repo.size();
}

int Service::nota_mai_mare(Examen s, int limit)
{
	if (s.getNota() > limit) return 1;
	return 0;
}

int Service::bonus(Examen s, char* nume)
{
	if (strcmp(s.getNume(), nume) == 0) return 1;
	return 0;
}