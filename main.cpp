//#include "TestRepositoryFile.h"
//#include "TestService.h"
#include "UI.h"
#include <iostream>
#include <string>
#include <Windows.h>
#include "Examen.h"
#include "TestsRepositoryArray.h"
#include "TestsService.h"
using namespace std;

/*void ui_undo(Examen lista[20][20], int pas)
{
	for (int i = 1; i < pas; i++)
		dim=lista[i].
}
*/

void showUI(UI& ui, Service& serv)
{
	
	bool gata = false;
	Examen lista[20][20];
	while (!gata) {
		HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
		SetConsoleTextAttribute(h, FOREGROUND_BLUE);
		cout << endl;
		cout << "OPTIUNI: " << endl;
		cout << "	1. Adauga examen! " << endl;
		cout << "	2. Update examen! " << endl;
		cout << "	3. Sterge examen! " << endl;
		cout << "	4. Afiseaza toate examenele! " << endl;
		cout << "	5. Afiseaza toate examenele cu nota mai mare decat o nota data! " << endl;
		cout << "	6. Adauga un bonus de un punct pentru examenele sustinute de un student dat! " << endl;
		cout << "	7. UNDO " << endl;
		cout << "	0. EXIT!" << endl;
		cout << "Introduceti optiunea (prin numarul ei): " << endl;
		SetConsoleTextAttribute(h, FOREGROUND_INTENSITY);
		int opt;
		int pas;
		pas = 0;
		cin >> opt;
		switch (opt) {
		case 1: {ui.add_UI_Examen(serv);
			//pas++; 
			//for (int i = 0; i < serv.get_Size(); i++)
			//	lista[pas][i] = serv.get_All()[i]; 
			break; }
		case 2: {char* nume = new char[10];
			char* data = new char[10];
			int nota;
			cout << "Dati numele actualizat: ";
			cin >> nume;
			cout << "Dati data actualizata: ";
			cin >> data;
			cout << "Dati nota actualizata: ";
			cin >> nota;
			ui.update_UI_Examen(serv, nume, data, nota);
			//pas++;
			//for (int i = 0; i < serv.get_Size(); i++)
			//	lista[pas][i] = serv.get_All()[i];
			break; }
		case 3: {ui.delete_UI_Examen(serv); 
			//pas++;
			//for (int i = 0; i < serv.get_Size(); i++)
			//		lista[pas][i] = serv.get_All()[i]; 
			break; }
		case 4: {ui.showAll(serv); break; }
		case 5: {int limit;
			cout << "Nota: ";
			cin >> limit;
			ui.showAll_UI_NotaMaiMare(serv, limit);
			//pas++; 
			//for (int i = 0; i < serv.get_Size(); i++)
			//	lista[pas][i] = serv.get_All()[i];
			break; }
		case 6: {char* nume = new char[10];
			cout << "Nume student: ";
			cin >> nume;
			ui.add_UI_bonus(serv, nume); 
			//for (int i = 0; i < serv.get_Size(); i++)
			//	lista[pas][i] = serv.get_All()[i];
			break; }
		//case 7: { ui_undo(lista, pas);pas--;  break; }
		case 0: {gata = true; cout << "LA REVEDERE!" << endl; }
		}

	}
}
int main() {
	cout << "start..." << endl;
	//teste repo
	testaddElem();
	testupdateElem();
	testdeleteElem();
	//teste serv
	testaddElemService();
	testupdateElemService();
	testdeleteElemService();
	testNotaMaiMare();
	testBonus();
	
	
	Service serv;
	UI ui;
	showUI(ui,serv);
	

	cout << "succes";
}