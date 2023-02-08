#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    ifstream inputFile;
    string nimi;
    int luku;
    bool virhe = true;
    double lukujen_maara = 0;
    double lukujen_summa = 0;
    double lukujen_keskiarvo;

    do {
        virhe = false;
        cout << "Anna tiedoston nimi tai polku: ";
        cin >> nimi;

        inputFile.open(nimi);

        if (inputFile)
        {

            while (inputFile >> luku)
            {
                lukujen_maara++;
                lukujen_summa += luku;
                cout << luku << endl;
            }

            inputFile.close();
        }
        else
        {
            cout << "VIRHE! Kyseinen nimi tai polku ei tuottanut tulosta.\n\n";
            virhe = true;
        }
    } while (virhe);

    lukujen_keskiarvo = lukujen_summa / lukujen_maara;

    cout << "\nA) TIEDOSTOSSA ON LUKUJA: " << lukujen_maara;
    cout << "\nB) LUKUJEN SUMMA ON: " << lukujen_summa;
    cout << "\nC) LUKUJEN KESKIARVO ON: " << lukujen_keskiarvo << endl;



    return 0;
}