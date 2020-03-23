#pragma once
#ifndef STUD_H
#define STUD_H
#include <string>
#include<ostream>
using namespace std;
class NotaStudent
{
private:
	char* nume;
	char* data;
	int nota;

public:
	NotaStudent(); //constructor
	NotaStudent(const char*, const char*, int); //constructor
	NotaStudent(const NotaStudent&); //constructor

	char* getNume();
	char* getData();
	int getNota();

	void setNume(char*);
	void setData(char*);
	void setNota(int);

	NotaStudent& operator=(const NotaStudent&);
	bool operator==(const NotaStudent&);
	~NotaStudent(); //destructor

	friend ostream& operator<<(ostream& os, const NotaStudent& s);


};
#endif