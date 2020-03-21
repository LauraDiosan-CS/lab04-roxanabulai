#include "NotaStudent.h"
#include <string.h>

NotaStudent::NotaStudent() {
	nume = NULL;
	data = NULL;
	nota = 0;
}
NotaStudent::NotaStudent(const char* Name, const char* Date, int Nota)
{
	this->nume = new char[strlen(Name) + 1];
	strcpy_s(this->nume, strlen(Name) + 1, Name);
	this->data = new char[strlen(Date) + 1];
	strcpy_s(this->data, strlen(Date) + 1, Date);
	this->nota = Nota;
}
NotaStudent::NotaStudent(const NotaStudent& s) {
	this->nume = new char[strlen(s.nume) + 1];
	strcpy_s(this->nume, strlen(s.nume) + 1, s.nume);
	this->data = new char[strlen(s.data) + 1];
	strcpy_s(this->data, strlen(s.data) + 1, s.data);
	this->nota = s.nota;
}

char* NotaStudent::getNume() { return nume; }
char*  NotaStudent::getData() { return data; }
int NotaStudent::getNota() { return nota; }


void  NotaStudent::setNume(char* n)
{
	if (this->nume != NULL)
	{
		delete[]this->nume;
	}
	this->nume = new char[strlen(n) + 1];
	strcpy_s(this->nume, strlen(n) + 1, n);
}
void  NotaStudent::setData(char* d)
{
	if (this->data != NULL)
	{
		delete[]this->data;
	}
	this->data = new char[strlen(d) + 1];
	strcpy_s(this->data, strlen(d) + 1, d);
}
void NotaStudent::setNota(int v)
{
	this->nota = v;
}



NotaStudent& NotaStudent::operator=(const NotaStudent& s)
{
	if (this == &s)
		return *this; //self-assignment
	this->setNume(s.nume);
	this->setData(s.data);
	this->setNota(s.nota);
	return *this;
}

bool NotaStudent::operator ==(const NotaStudent& s)
{
	return strcmp(nume, s.nume) == 0 && strcmp(data, s.data) == 0 && (nota == s.nota);
}

NotaStudent ::~NotaStudent()
{
	if (nume != NULL)
		delete[]nume;
	nume = NULL;
	data = NULL;
	nota = -1;
}

ostream& operator<<(ostream& os, const NotaStudent& s)
{
	os << s.nume << " " << s.data<<" "<<s.nota;
	return os;
}