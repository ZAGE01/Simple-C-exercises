#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

const int lottonumerot = 7;
const int bonusnumerot = 3;
const int lotto_max = 37;;

void tarkista_numerot(int*,int*);



void arvo_numerot(int* taulukko) {
    int numerot[8];
    int bonus[4];

    for (int i = 1; i <= 10; i++) {
        taulukko[i] = 1 + (rand() % lotto_max);
    }


    for (int k=1; k<=10; k++){
        sort(taulukko, taulukko + 11);
        if (taulukko[k] == taulukko[k + 1] || taulukko[k] == taulukko[k - 1]) {
            taulukko[k] = 1 + (rand() % lotto_max);
            k = 1;
        }
    }
    for (int r = 1; r <= 7; r++) {
        numerot[r] = taulukko[r];
    }
    for (int h = 8; h <= 10; h++) {

        for (int n = 1; n <= 3; n++) {
            bonus[n] = taulukko[h];
            h++;
        }
    }

    tarkista_numerot(numerot, bonus);
}

 
    void tarkista_numerot(int* numerot, int* bonus) {

        int voittonumerot[11];
        int oikeatperusnumerot=0;
        int oikeatbonusnumerot = 0;
        int voitonperusnumerot[8];
        int voitonbonus[4];

        setlocale(LC_ALL, "FI_fi");

    cout << "\nLottorivisi on: ";
    for (int e = 1; e <= 7; e++) {
        cout << numerot[e] << ", ";
        }

    cout << "ja bonusnumerot ";
    for (int d = 1; d <= 3; d++) {
            if(d<3)
                cout << bonus[d] << ", ";
            else
                cout << bonus[d] << ".";
    }
     
    
    
    for (int o = 1; o <= 10; o++) {
        voittonumerot[o] = 1 + (rand() % lotto_max);
    }


    for (int v = 1; v <= 10; v++) {
        sort(voittonumerot, voittonumerot + 11);
        if (voittonumerot[v] == voittonumerot[v + 1] || voittonumerot[v] == voittonumerot[v - 1]) {
            voittonumerot[v] = 1 + (rand() % lotto_max);
            v = 1;
        }
    }

    for (int r = 1; r <= 7; r++) {
        voitonperusnumerot[r] = voittonumerot[r];
    }
    for (int h = 8; h <= 10; h++) {
        for (int n = 1; n <= 3; n++) {
            voitonbonus[n] = voittonumerot[h];
            h++;
        }
    }

    cout << "\n\nJa voittonumerot ovat... ";
    for (int g = 1; g <= 7; g++) {
        cout << voitonperusnumerot[g] << ", ";
    }

    cout << "ja bonusnumerot ";
    for (int q = 1; q <= 3; q++) {
        if (q < 3)
            cout << voitonbonus[q] << ", ";
        else
            cout << voitonbonus[q] << ".";
    }

    for (int f = 1; f <= 7; f++) {
        int temp = voitonperusnumerot[f];

            for (int z = 1; z <= 7; z++) {
                if (temp == numerot[z]) {
                    oikeatperusnumerot++;
                }

        }
    }
    
    for (int m = 1; m <= 3; m++) {
        int temp = voitonbonus[m];

        for (int y = 1; y <= 3; y++) {
            if (temp == bonus[y]) {
                oikeatbonusnumerot++;
            }

        }
    }
    if (oikeatperusnumerot > 0)
        cout << "\n\nSait " << oikeatperusnumerot << "+" << oikeatbonusnumerot << " oikein!";
    else
        cout << "\n\nEt valitettavasti saanut yhtäkään numeroa oikein.";
    
    if (oikeatperusnumerot == 0) {
        cout << "\n\nEt voittanut tällä kertaa mitään.";
    }
    if (oikeatperusnumerot==1) {
         cout << "\n\nOlet voittanut 1 euroa!" << endl;
    }
    if (oikeatperusnumerot == 2) {
        cout << "\n\nOlet voittanut 2 euroa!" << endl;
    }
    if (oikeatperusnumerot == 3 && oikeatbonusnumerot==0) {
        cout << "\n\nOlet voittanut 2 euroa!" << endl;
    }
    if (oikeatperusnumerot == 3 && oikeatbonusnumerot>0) {
        cout << "\n\nOlet voittanut 10 euroa!" << endl;
    }
    if (oikeatperusnumerot == 4) {
        cout << "\n\nOlet voittanut 50 euroa!" << endl;
    }
    if (oikeatperusnumerot == 5) {
        cout << "\n\nOlet voittanut 2000 euroa!" << endl;
    }
    if (oikeatperusnumerot == 6) {
        cout << "\n\nOlet voittanut 100 000 euroa!" << endl;
    }
    if (oikeatperusnumerot == 6 && oikeatbonusnumerot >0) {
        cout << "\n\nOlet voittanut 1 000 000 euroa!" << endl;
    }
    if (oikeatperusnumerot == 7) {
        cout << "\n\nOlet voittanut 10 000 000 euroa!" << endl;
    }
    
    
    }


int main() {
    char vastaus;
    setlocale(LC_ALL, "FI_fi");
    int taulukko[11];

    cout << "Tervetuloa helppoon lottoon, voiton saaminen on helppoa!" << endl << endl;


    while (true) {
        cout << "Mitä haluaisit tehdä? (Syöta numero 1-4)";
        cout << "\n1: Katso palkintosummat";
        cout << "\n2: Pelaa koneen arpomalla rivillä";
        cout << "\n3: Pelaa omilla numeroilla";
        cout << "\n4: Lopeta pelaaminen\n";

        cin >> vastaus;

        if (vastaus == '1') {
            cout << "\n\nNumeroita + lisänumeroita oikein \t Voittosumma";
            cout << "\n7 \t\t\t\t\t 10 000 000 e";
            cout << "\n6+1 \t\t\t\t\t 1 000 000 e";
            cout << "\n6 \t\t\t\t\t 100 000 e";
            cout << "\n5 \t\t\t\t\t 2000 e";
            cout << "\n4 \t\t\t\t\t 50 e";
            cout << "\n3+1 \t\t\t\t\t 10 e";
            cout << "\n1 \t\t\t\t\t 1 e" << endl;
            cout << "--------------------------------------------------------------------------------" << endl;


        }
        if (vastaus == '2') {
            arvo_numerot(taulukko);
        }
        
        if (vastaus == '3') {
            
        }

        if (vastaus == '4') {
            cout << "\n\nTervetuloa uudestaan.";
            return 0;
        }
    }

    return 0;
}
