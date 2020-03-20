#include <iostream>

#include "NotaStudent.h"
#include "RepositoryArray.h"
using namespace std;

void add_ui(RepositoryArray& repo)
{
	char nume[30];
	cout << endl;
	cout << "Introduceti numele: ";
	cin >> nume;
	
	char data[30];
	cout << "Introduceti data: ";
	cin >> data;
	
	int nota;
	cout << "Introduceti nota: ";
	cin >> nota;
	
	NotaStudent NotaStudent(nume, data, nota);
	repo.addElem(NotaStudent);
}

void afisare_ui(RepositoryArray& repo)
{
	cout << endl;
	cout << "Elementele listei sunt: ";
	for(int i=0;i<repo.size();i++)
	{
		cout << repo.getAll()[i] << " ";
	}
	
}
void menu()
{
	cout << "1.Introduceti 1 pentru adaugare examen! ";
	cout << endl;
	cout << "2.Introduceti 2 pentru afisare examen! ";
	cout << endl;
	cout << "3.Introduceti 3 pentru iesire! ";
	cout << endl;
}
int main()
{
	int op;
	RepositoryArray repo;
	menu();
	while (cin >> op)
	{
		menu();
		if (op == 1)
			add_ui(repo);
		if (op == 2)
			afisare_ui(repo);
		if (op == 3)
		{
			cout << "Iesire"; break;
		}
	}

}
