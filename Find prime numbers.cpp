#include <iostream>
using namespace std;

// Prime_half ja prime_square_root aliohjelmat ovat parempia, koska aliohjelman sisällä on vähemmän lukuja testattavana
// ja näin ollen kyseiset aliohjelmat ovat nopeampia ja tehokkaampia suorittaa. Esimerkiksi 10000 luvun kohdalla prime_all
// aliohjelma testaa, kaikki luvut 1-9999 välillä selvittäessään, että onko luku 10000 jaollinen millään niistä.

// Prime_half aliohjelma puolestaan testaa vain 1-5000 välillä luvun 10000 kohdalla mutta ajaa saman asian.
// Prime_square_root aliohjelma testaa luvut 1-100 (sqrt(10000), mikä on aliohjelmista siksi kaikkein tehokkain.

bool prime_all(int x) {
    if (x == 1 || x == 0) {
        return false;
    }
    for (int i = 2; i < x; i++) {
        if (x % i == 0) {
            return false;
        }
    }

    return true;
}

bool prime_half(int x) {
    if (x == 1 || x == 0) {
        return false;
    }

    for (int i = 2; i < x/2; i++) {
        if (x % i == 0) {
            return false;
        }
    }

    return true;
}

bool prime_square_root(int x) {
    if (x == 1 || x == 0) {
        return false;
    }
    for (int i = 2; i < sqrt(x); i++) {
        if (x % i == 0) {
            return false;
        }
    }

    return true;
}

int main()
{
    int luvut = 10000;

    cout << "*** PRIME_ALL ALIOHJELMA ***" << endl << endl;
    for (int i = 1; i < luvut; i++) {
        if (prime_all(i)) {
            cout << i << " ";
        }
    }

    cout << "\n\n\n\n----------------------------------------------------------------------------------------------\n\n\n\n";
    cout << "*** PRIME_HALF ALIOHJELMA ***" << endl << endl;

    for (int i = 1; i < luvut; i++) {
        if (prime_half(i)) {
            cout << i << " ";
        }
    }

    cout << "\n\n\n\n----------------------------------------------------------------------------------------------\n\n\n\n";
    cout << "*** PRIME_SQUARE_ROOT ALIOHJELMA ***" << endl << endl;

    for (int i = 1; i < luvut; i++) {
        if (prime_square_root(i)) {
            cout << i << " ";
        }
    }


    return 0;
}
