#include <iostream>
#include <iomanip>

using namespace std;

enum triangletype {epasaannollinen, tasakylkinen, tasasivuinen, suorakulmainen};

bool onKolmiollinen(double side1, double side2, double side3){
    if (side1 + side2 > side3 && side2 + side3 > side1 && side1 + side3 > side2) {
        return true;
    }
    else {
        return false;
    }
}

triangletype tyyppi(double side1, double side2, double side3) {

    if (side1 == side2 && side2 == side3) {
        return tasasivuinen;
    }
    else if (side1 * side1 + side2 * side2 == side3 * side3 || side2 * side2 + side3 * side3 == side1 * side1 || side1 * side1 + side3 * side3 == side2 * side2) {
        return suorakulmainen;
    }
    else if (side1 == side2 || side2 == side3 || side1 == side3) {
        return tasakylkinen;
    }
    else {
        return epasaannollinen;
    }

}


int main()
{
    setlocale(LC_ALL, "FI_fi");
    double sivu1, sivu2, sivu3;

    cout << "Anna 1. sivun pituus: ";
    cin >> sivu1;
    cout << "Anna 2. sivun pituus: ";
    cin >> sivu2;
    cout << "Anna 3. sivun pituus: ";
    cin >> sivu3;

    if (onKolmiollinen(sivu1, sivu2, sivu3)) {
        
        switch (tyyppi(sivu1,sivu2,sivu3)) {
        case suorakulmainen:
            cout << "Annetuista sivuista voidaan muodostaa suorakulmainen kolmio.";
            break;

        case tasasivuinen:
            cout << "Annetuista sivuista voidaan muodostaa tasasivuinen kolmio.";
            break;

        case tasakylkinen:
            cout << "Annetuista sivuista voidaan muodostaa tasakylkinen kolmio.";
            break;

        case epasaannollinen:
            cout << "Annetuista sivuista voidaan muodostaa epasaannollinen kolmio.";
            break;
        }
    }
    else{
        cout << "Kolmio ei ole mahdollinen.";
    }

    return 0;
}
