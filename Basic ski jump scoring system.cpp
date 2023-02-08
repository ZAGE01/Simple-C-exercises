#include <iostream>
using namespace std;

int main()
{
    double hypyn_pituus; // Hypyn pituus.
    double summa = 0; // Tuomareiden pisteiden summa.
    double pisteet; // Yksitt‰isen tuomarin pisteet.
    int tuomari = 1; // Tuomarin numeron muuttuja.
    double max=0; // Suurimman pistem‰‰r‰n muuttuja, jonka arvo on aluksi 0.
    double min=100; // Pienimm‰n pistem‰‰r‰n muuttuja, jonka arvo on aluksi 100.

    cout << "Hypyn pituus: ";
    cin >> hypyn_pituus;

    while (tuomari <= 5)
    {
        cout << "Tuomarin " << tuomari++ << " pisteet: ";
        cin >> pisteet;
        summa += pisteet;
       
        if (pisteet < min)
        min = pisteet; // Min arvo korvaantuu, jos tuomarin pisteet ovat v‰hemm‰n kuin min arvo.

        if (pisteet > max)
            max = pisteet; // Max arvo korvaantuu, jos tuomarin pisteet ovat enemm‰n kuin max arvo.

    }
    cout << "Hypyn pisteet: " << (summa-min-max) + 0.9 * hypyn_pituus; // Summasta v‰hennet‰‰n min ja max arvot.
    return 0;
}