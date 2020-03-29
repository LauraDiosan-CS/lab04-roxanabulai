#pragma once
#ifndef STUD_H
#define STUD_H
#include <string>
#include<ostream>
using namespace std;
class Examen
{
private:
	char* nume;
	char* data;
	int nota;

public:
	Examen(); //constructor
	Examen(const char*, const char*, int); //constructor
	Examen(const Examen&); //constructor

	char* getNume();
	char* getData();
	int getNota();

	void setNume(char*);
	void setData(char*);
	void setNota(int);

	Examen& operator=(const Examen&);
	bool operator==(const Examen&);
	~Examen(); //destructor

	friend ostream& operator<<(ostream& os, const Examen& s);
	friend istream& operator>>(istream&, Examen&);
};
#endif