#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "FI_FI");
	string etunimi, sukunimi, osoite, katunumero, postinro, kunta;

	cout << "Sy�t� etunimi: ";
	cin >> etunimi;
	cout << "Sy�t� sukunimi: ";
	cin >> sukunimi;
	cout << "Sy�t� osoite: ";
	cin >> osoite;
	cout << "Sy�t� katunumero: ";
	cin >> katunumero;
	cout << "Sy�t� postinumero: ";
	cin >> postinro;
	cout << "Sy�t� kunta: ";
	cin >> kunta;

	cout << "Osoitteesi on:  " << etunimi << " " << sukunimi << " " << osoite << " " << katunumero << " " << postinro << " " << kunta;
	if (etunimi < sukunimi) {
		cout << "\nEtunimesi on aakkosissa ensin ja sen pituus on: " << etunimi.length();
	}
	else cout << "\nSukunimesi on aakkosissa ensin ja sen pituus on: " << sukunimi.length();

	return 0;
}