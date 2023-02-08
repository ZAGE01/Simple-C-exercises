#include<iostream> // Tarvitaan tulostus ja syöttölaite

using namespace std;

int main() {

	float lampotila;
	char yksikko;

	cout << "Syota lampotila: ";
	cin >> lampotila;
	double celsius_to_fahrenheit = lampotila * 1.8 + 32;
	double fahrenheit_to_celsius = (lampotila - 32) / 1.8;

	cout << "Syota yksikko (C = Celsius tai F = Fahrenheit): ";
	cin >> yksikko;

	if (yksikko == 'C' || yksikko == 'c')
	{
		cout << lampotila << " Celsius = " << celsius_to_fahrenheit << " F";
	}
	else if (yksikko == 'F' || yksikko == 'f')
	{
		cout << lampotila << " Fahrenheit = " << fahrenheit_to_celsius << " C";
	}
	return 0;
}

