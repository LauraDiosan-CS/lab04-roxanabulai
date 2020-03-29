#include "UI.h"
#include <iostream> 



void UI:: add_UI_Examen(Service& serv) {
	Examen ex;
	cout << "	Dati examenul care va fi adaugat:"<<endl;
	cin >> ex;
	serv.add_service(ex);
	cout << "	Examenul a fost adaugat cu succes!" << endl;
}

void UI:: delete_UI_Examen(Service& serv) {
	Examen ex;
	cout << "	Dati examenul care va fi sters:"<<endl;
	cin >> ex;
	int rez = serv.delete_service(ex);
	if (rez == 0) cout <<"	Examenul a fost  sters cu succes!" << endl;
	else cout << "	Examenul NU a fost sters!" << endl;
}
int UI::find_UI_Examen(Service& serv, Examen ex) {
	bool rez = serv.find_service(ex);
	if (rez) return -1;
	return 0;
}

void UI:: update_UI_Examen(Service& serv, char*nume, char*data, int nota) {
	Examen ex;
	cout << "	Dati examenul care va fi actualizat: "<<endl;
	cin >> ex;
	int i = find_UI_Examen(serv, ex);
	if (i != -1)
	{
		serv.update_service(ex, nume, data, nota);
		cout << "	Examenul a fost actualizat cu succes! " << endl;
	}
	else
		cout << "	Examenul nu a fost gasit!" << endl;
}

void UI::showAll(Service& serv) {
	Examen* stud = serv.get_All();
	int dim = serv.get_Size();
	int i;
	cout << "		Lista examenelor: " <<endl;
	for (i=0;i<dim;i++)//"range based for loop"~Java,C#
		cout << stud[i] << endl;
}

void UI::showAll_UI_NotaMaiMare(Service& serv, int limit )
{
	Examen* stud = serv.get_All();
	int n = serv.get_Size();
	cout << "Examenele cu nota mai mare decat " << limit << " sunt:" << endl;
	for (int i = 0; i < n; i++) 
		{if (serv.nota_mai_mare(stud[i], limit) == 1) cout << stud[i] << endl; }
}
void UI::add_UI_bonus(Service& serv, char* nume)
{
	Examen* stud = serv.get_All();
	int n = serv.get_Size();
	int m = 0;
	for (int i = 0; i < n; i++) 
		if (serv.bonus(stud[i], nume) == 1) {
			int a = stud[i].getNota();
			if(a<10)
				stud[i].setNota(a + 1);

	}
}
