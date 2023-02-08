#include <iostream>
using namespace std;

int main()
{
    int luku;
    int summa=0;

    cout << "anna yhteenlaskettavat luvut (kun haluat lopettaa laita luvuksi 0): ";
    cin >> luku;
    summa += luku;

    while (luku != 0)
    {
        cout << "anna yhteenlaskettavat luvut(kun haluat lopettaa laita luvuksi 0) :";
        cin >> luku;
        summa+=luku;
    }

    cout << "lukujen summa: " << summa;

    return 0;
}