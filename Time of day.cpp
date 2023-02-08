#include <iostream>
using namespace std;

string kello(int);

int main()
{
	setlocale(LC_ALL, "fi_FI");
	int luku;

	cout << "Anna kellonaika tunneissa (0-23): ";
	cin >> luku;
	cout << "Hetki päivästä on " << kello(luku);
}


string kello(int aika)
{
	string hetki;
	if (aika >= 6 && aika <= 11)
		hetki = "aamu";
	else if (aika >= 12 && aika <= 16)
		hetki = "päivä";
	else if (aika >= 17 && aika <= 22)
		hetki = "ilta";
	else
		hetki = "yö";
	return hetki;
}