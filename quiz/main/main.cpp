#include <iostream>

using namespace std;

int main()
{
	string imie = "", odp = "";
	int pkt = 0;
	cin >> imie;
	cout << "Elo " << imie <<" zielo, tu quiz matematyczny bo pani Wielgorska nie daje mi spokoju i wolnego dnia bez matmy:)" << endl;

	cout << "Pytanie 1: Ile jest cos 30(stopni)" << endl;
	cout << "a) 1/2" << endl;
	cout << "b) pierw(3)/2" << endl;
	cout << "c) pierw(2)/3" << endl;
	cout << "d) 1" << endl;
	cin >> odp;
	if (odp == "b" || odp == "B") {
		pkt++;
		odp = "";
	}
	else {
		cout << "Zla odpowiedz niestety bez punkta" << endl;
		odp = "";
	}

	cout << "Pytanie 2: Jakiej serii jest GTX 1660 TI" << endl;
	cout << "a) rtx " << endl;
	cout << "b) mtx " << endl;
	cout << "c) gtx " << endl;
	cout << "d) mtb " << endl;
	cin >> odp;
	if (odp == "c" || odp == "C") {
		pkt++;
		odp = "";
	}
	else {
		cout << "Zla odpowiedz niestety bez punkta" << endl;
		odp = "";
	}

	cout << "Pytanie 3: Czego nie mozna mowic na twitchu?" << endl;
	cout << "a) Gerald" << endl;
	cout << "b) Green Apple" << endl;
	cout << "c) Nigger" << endl;
	cout << "d) Pedał" << endl;
	cin >> odp;
	if (odp == "c" || odp == "C") {
		pkt++;
		odp = "";
	}
	else {
		cout << "Zla odpowiedz niestety bez punkta" << endl;
		odp = "";
	}

	cout << "Pytanie 4: Laktoza to inaczej :" << endl;
	cout << "a) Glukoza + galaktoza" << endl;
	cout << "b) Glukoza" << endl;
	cout << "c) Bananoza + fruktoza + mleko" << endl;
	cout << "d) Maltoza" << endl;
	cin >> odp;
	if (odp == "a" || odp == "a") {
		pkt++;
		odp = "";
	}
	else {
		cout << "Zla odpowiedz niestety bez punkta" << endl;
		odp = "";
	}
	
	cout << "Pytanie 5: Air Pods Pro gen.2 kosztują(ZŁ)?" << endl;
	cout << "a) 1200" << endl;
	cout << "b) 2800" << endl;
	cout << "c) 1500" << endl;
	cout << "d) 1100" << endl;
	cin >> odp;
	if (odp == "d" || odp == "D") {
		pkt++;
		odp = "";
	}
	else {
		cout << "Zla odpowiedz niestety bez punkta" << endl;
		odp = "";
	}

	if (pkt <= 2) {
		cout << "Slabiutko bratku, mniej niz 2 pkt" << endl;
	}
	else if (pkt == 3){
		cout << "No, nie za dobrze 3/5" << endl;
	}
	else if (pkt == 4) {
		cout << "No,moze byc 4/5"<< endl;
	}
	else if (pkt == 5) {
		cout << "Perfecto bratku 5/5" << endl;
	}
}

