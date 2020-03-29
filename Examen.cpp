#include "Examen.h"
#include <string.h>
#include <iostream>

Examen::Examen() {
	nume = NULL;
	data = NULL;
	nota = 0;
}
Examen::Examen(const char* Name, const char* Date, int Nota)
{
	this->nume = new char[strlen(Name) + 1];
	strcpy_s(this->nume, strlen(Name) + 1, Name);

	this->data = new char[strlen(Date) + 1];
	strcpy_s(this->data, strlen(Date) + 1, Date);

	this->nota = Nota;
}

Examen::Examen(const Examen& s) {
	this->nume = new char[strlen(s.nume) + 1];
	strcpy_s(this->nume, strlen(s.nume) + 1, s.nume);

	this->data = new char[strlen(s.data) + 1];
	strcpy_s(this->data, strlen(s.data) + 1, s.data);

	this->nota = s.nota;
}

char* Examen::getNume() { return nume; }
char* Examen::getData() { return data; }
int Examen::getNota() { return nota; }


void  Examen::setNume(char* n)
{
	if (this->nume != NULL)
	{
		delete[]this->nume;
	}
	this->nume = new char[strlen(n) + 1];
	strcpy_s(this->nume, strlen(n) + 1, n);
}
void  Examen::setData(char* d)
{
	if (this->data != NULL)
	{
		delete[]this->data;
	}
	this->data = new char[strlen(d) + 1];
	strcpy_s(this->data, strlen(d) + 1, d);
}
void Examen::setNota(int v)
{
	this->nota = v;
}



Examen& Examen::operator=(const Examen& s)
{
	if (this == &s)
		return *this; //self-assignment
	this->setNume(s.nume);
	this->setData(s.data);
	this->setNota(s.nota);
	return *this;
}

bool Examen::operator ==(const Examen& s)
{
	return strcmp(nume, s.nume) == 0 && strcmp(data, s.data) == 0 && (nota == s.nota);
}

Examen ::~Examen()
{
	if (nume != NULL)
		delete[]nume;
	nume = NULL;
	data = NULL;
	nota = -1;
}

ostream& operator<<(ostream& os, const Examen& s)
{
	os << s.nume << " " << s.data << " " << s.nota;
	return os;
}

istream& operator>>(istream& is, Examen& s)
{
	cout << "Nume: ";
	char* nume = new char[10];
	is >> nume;
	cout << "Data: ";
	char* data = new char[10];
	is >> data;
	cout << "Nota: ";
	int nota;
	cin >> nota;
	s.setNume(nume);
	s.setData(data);
	s.setNota(nota);
	delete[] nume;
	return is;
}