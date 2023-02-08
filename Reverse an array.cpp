#include <iostream>
using namespace std;

void reverse(int* arr, int n) {
    int* arr_start_p = arr;  // T‰m‰ osoitin osoittaa taulukon alkuun.
    int* arr_end_p = arr + n-1; // T‰m‰ osoitin osoittaa taulukon loppuun.
    // Taulukon koosta "n" v‰hennet‰‰n 1, koska taulukko alkaa indeksist‰ 0 ja loppuu indeksiin 9 (n = 10).
    
    int temp; // V‰liaikainen muuttuja.

    // Looppi jatkuu, kunnes kaikki luvut ovat vaihtaneet paikkaansa.
    while (arr_start_p < arr_end_p) {
        temp = *arr_start_p;  // V‰liaikaiseen muuttujaan tallennetaan osoittimen osoittama luku.
        *arr_start_p = *arr_end_p;  // Alun osoittimeen sijoitetaan lopun osoittimen osoittama luku.
        *arr_end_p = temp; // Lopun osoittimeen sijoitetaan v‰liaikaiseen muuttujaan tallennettu tieto.
        
        // Alun osoitinta kasvatetaan loopissa aina 1:ll‰, jolloin siirryt‰‰n taulukossa seuraavaan indeksiin.
        *arr_start_p++;

        // Vastaavasti lopun osoitinta v‰hennet‰‰n loopissa aina 1:ll‰, jolloin siirryt‰‰n taulukossa aikaisempaan indeksiin.
        *arr_end_p--;
   }
}


int main()
{
    const int size = 10;
    int array[size] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
    int* array_p = nullptr;

    array_p = array;

    cout << "Array before reversing: ";
    for (int i = 0; i < size; i++) {
        cout << *(array+i) << " ";
    }

    reverse(array_p, size);

    cout << "\nArray after reversing: ";
    for (int i = 0; i < size; i++){
        cout << *(array+i) << " ";
    }

    return 0;
}