#include <iostream>
using namespace std;

void merkit(char, int);

int main()
{
    setlocale(LC_ALL, "fi_FI");
    int luku;
    char merkki;

    cout << "Montako merkki� haluat?    ";
    cin >> luku;
    cout << "Mik� merkki tulostetaan?    ";
    cin >> merkki;
    cout << "\n";
    merkit(merkki, luku);

    return 0;
}

void merkit(char x, int tulos) {
    for (int i = 0; i < tulos; i++)
        cout << x;
}