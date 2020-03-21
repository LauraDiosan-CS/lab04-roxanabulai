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
void delete_ui(RepositoryArray& repo, NotaStudent s)
{
	
	
	repo.deleteElem(s);
}

void update_ui(RepositoryArray& repo, NotaStudent s, char* numee, char* dataa, int notaa)
{
	
	repo.updateElem(s, numee, dataa, notaa);
}
void afisare_ui(RepositoryArray& repo)
{
	cout << endl;
	cout << "Elementele listei sunt: ";
	cout << endl;
	for(int i=0;i<repo.size();i++)
	{
		cout << repo.getAll()[i] << " ";
		cout << endl;
	}
	
}
void menu()
{
	cout << "1.Introduceti 1 pentru adaugare examen! ";
	cout << endl;
	cout << "2.Introduceti 2 pentru afisare examen! ";
	cout << endl;
	cout << "3.Introduceti 3 pentru stergere examen! ";
	cout << endl;
	cout << "4.Introduceti 4 pentru actualizarea unui examen!";
	cout << endl;
	cout << "5.Introduceti 5 pentru iesire!";
	cout << endl;
}
int main()
{
	

	char nume[10];
	char data[10];
	int nota;
	int op;
	char numee[10];
	char dataa[10];
	int notaa;
	RepositoryArray repo; 
	menu();
	cout << "op=";
	while (cin >> op)
	{
		
		if (op == 1)
		{
			add_ui(repo);
			cout << "Examen adaugat!";
			cout << endl;
			menu();
			cout << "op=";
		}
		if (op == 2)
		{
			afisare_ui(repo);
			cout << endl;
			menu(); 
			cout << "op=";
		}
		if (op == 3)
		{
			cout << "Introduceti numele studentului ptr care se sterge examenul: ";
			cin >> nume;
			cout << endl;
			cout << "Introduceti data examenului de sters: ";
			cin >> data;
			cout << endl;
			cout << "Introduceti nota examenului de sters: ";
			cin >> nota;
			cout << endl;
			NotaStudent s(nume, data, nota);
			delete_ui(repo,s);
			cout << "Examen sters!";
			cout << endl;
			menu(); 
			cout << "op=";

		}
		if (op == 4)

		{
			cout << "Introduceti numele studentului care va fi actualizat: ";
			cin >> nume;
			cout << endl;
			cout << "Introduceti data care va fi actualizata: ";
			cin >> data;
			cout << endl;
			cout << "Introduceti nota care va fi actualizata: ";
			cin >> nota;
			cout << endl;
			cout << "Introduceti numele actualizat: ";
			cin >> numee;
			cout << endl;
			cout << "Introduceti data actualizata: ";
			cin >> dataa;
			cout << endl;
			cout << "Introduceti nota actualizata: ";
			cin >> notaa;
			cout << endl;
			NotaStudent s(nume, data, nota);
			update_ui(repo,s, numee, dataa, notaa);
			cout << "Examen actualizat!";
			cout << endl;
			menu(); 
			cout << "op=";
			
		}
		if (op == 5)
		{
			cout << "Iesire! ";
			return 0;
		}
	}
		

}
