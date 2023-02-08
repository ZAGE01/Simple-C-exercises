#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "FI_FI");
	string etunimi, sukunimi, osoite, katunumero, postinro, kunta;

	cout << "Syötä etunimi: ";
	cin >> etunimi;
	cout << "Syötä sukunimi: ";
	cin >> sukunimi;
	cout << "Syötä osoite: ";
	cin >> osoite;
	cout << "Syötä katunumero: ";
	cin >> katunumero;
	cout << "Syötä postinumero: ";
	cin >> postinro;
	cout << "Syötä kunta: ";
	cin >> kunta;

	cout << "Osoitteesi on:  " << etunimi << " " << sukunimi << " " << osoite << " " << katunumero << " " << postinro << " " << kunta;
	if (etunimi < sukunimi) {
		cout << "\nEtunimesi on aakkosissa ensin ja sen pituus on: " << etunimi.length();
	}
	else cout << "\nSukunimesi on aakkosissa ensin ja sen pituus on: " << sukunimi.length();

	return 0;
}