#include <iostream>
#include <iomanip>
using namespace std;

struct aika_ty {
    int totalSeconds;
    int tunnit;
    int minuutit;
    int sekunnit;
};

aika_ty sekunnit_ajaksi(aika_ty muunnos) {

    // Muunnetaan muunnos.totalSeconds tunneiksi, minuuteiksi ja sekunneiksi.
    // Sijoitetaan tiedot muunnos.tunnit, muunnos.minuutit ja muunnos.sekunnit muuttujiin.
    muunnos.tunnit = muunnos.totalSeconds / 3600;
    muunnos.totalSeconds = muunnos.totalSeconds - floor(muunnos.tunnit * 3600);
    muunnos.minuutit = muunnos.totalSeconds / 60;
    muunnos.totalSeconds = muunnos.totalSeconds - (muunnos.minuutit * 60);
    muunnos.sekunnit = muunnos.totalSeconds;

    // Palautetaan saadut tiedot takaisin aika_sekunneiksi aliohjelmaan.
    return muunnos;
}

aika_ty aikojen_erotus(aika_ty erotus, aika_ty erotus2) {

    // Testataan kumpi ajankohta oli suurempi ja lasketaan sen perusteella erotus.
    // Erotus sijoitetaan erotus.totalSeconds muuttujaan.
    if (erotus.totalSeconds >= erotus2.totalSeconds) {
        erotus.totalSeconds = erotus.totalSeconds - erotus2.totalSeconds;
    }
    else {
        erotus.totalSeconds = erotus2.totalSeconds - erotus.totalSeconds;
    }

    // Palautetaan saatu erotus takaisin aika_sekunneiksi aliohjelmaan.
    return erotus;
}

aika_ty aika_sekunneiksi(aika_ty muunnos, aika_ty muunnos2) {

    // Muutetaan ajankohtien ajat sekunneiksi.
    muunnos.totalSeconds = muunnos.tunnit * 3600 + muunnos.minuutit * 60 + muunnos.sekunnit;
    muunnos2.totalSeconds = muunnos2.tunnit * 3600 + muunnos2.minuutit * 60 + muunnos2.sekunnit;

    // Kutsutaan aikojen_erotus aliohjelmaa, johon viedään kokonaissekuntit mukana.
    // Saatu erotus sijoitetaan muunnos.totalSeconds muuttujaan.
    muunnos = aikojen_erotus(muunnos, muunnos2);

    // Aikaisemmasta aliohjelmasta saatu sekuntien erotus muunnetaan vielä ajaksi tässä aliohjelmassa.
    muunnos = sekunnit_ajaksi(muunnos);

    // Palautetaan lopullinen ajankohtien erotus takaisin pääohjelmaan.
    return muunnos;
}

int main()
{
    setlocale(LC_ALL, "fi_FI.UTF-8");
    aika_ty aika;
    aika_ty aika2;
    bool virhe;
    int erotus;

    cout << "Anna kaksi ajankohtaa." << endl;
   
    // Kysytään ensimmäistä ajankohtaa ja suoritetaan täysi virheentarkistus annetuille luvuille.
    do {
        virhe = false;
        cout << "Anna ensimmäisen ajankohdan tunnit, minuutit ja sekuntit yksitellen tai välilyönnillä erotettuna: ";
        cin >> aika.tunnit >> aika.minuutit >> aika.sekunnit;

        if (aika.tunnit < 0 || aika.tunnit>23 || cin.fail()) {
            virhe = true;
            cin.clear();
            cin.ignore(80, '\n');
            continue;
        }

        if (aika.minuutit < 0 || aika.minuutit>59 || cin.fail()) {
            virhe = true;
            cin.clear();
            cin.ignore(80, '\n');
            continue;
        }

        if (aika.sekunnit < 0 || aika.sekunnit>59 || cin.fail()) {
            virhe = true;
            cin.clear();
            cin.ignore(80, '\n');
            continue;
        }

    } while (virhe);

    // Kysytään toista ajankohtaa ja suoritetaan täysi virheentarkistus annetuille luvuille.
    do {
        virhe = false;
        cout << "Anna toisen ajankohdan tunnit, minuutit ja sekuntit yksitellen tai välilyönnillä erotettuna: ";
        cin >> aika2.tunnit >> aika2.minuutit >> aika2.sekunnit;

        if (aika2.tunnit < 0 || aika2.tunnit>23 || cin.fail()) {
            virhe = true;
            cin.clear();
            cin.ignore(80, '\n');
            continue;
        }

        if (aika2.minuutit < 0 || aika2.minuutit>59 || cin.fail()) {
            virhe = true;
            cin.clear();
            cin.ignore(80, '\n');
            continue;
        }

        if (aika2.sekunnit < 0 || aika2.sekunnit>59 || cin.fail()) {
            virhe = true;
            cin.clear();
            cin.ignore(80, '\n');
            continue;
        }

    } while (virhe);

    // Kutsutaan aika_sekunneiksi aliohjelmaa, johon saadut ajankohdat viedään mukana.
    // "aika" tietuetyyppimuuttujaan sijoitetaan lopullinen erotus, kun ajankohdat ovat käyneet tarvittavissa aliohjelmissa.
    aika=aika_sekunneiksi(aika, aika2);

    // Tulostetaan lopullinen aikojen erotus.
    cout << "Kahden ajankohdan erotus on: " << aika.tunnit << " tuntia " << aika.minuutit << " minuuttia " << aika.sekunnit << " sekuntia.";
   
    return 0;
}