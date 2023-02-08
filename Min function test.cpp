#include <iostream>
#include <cmath>
using namespace std;

int min2(int x, int y) {
   int pienin2=min(x, y);

   return pienin2;
}

int min3(int x, int y, int z) {
    int pienin3 = min(min(x, y), z);

    cout << "\nPienin kahdesta numerosta ( " << x << ", " << y << " ): " << min(x, y);

    return pienin3;
}

int min4(int x, int y, int z, int w) {
    int pienin4 = min(min(x, y), min(z, w));

    cout << "\nPienin kolmesta numerosta ( " << x << ", " << y << ", " << z << " ): " << min3(x, y, z);

    return pienin4;
}

int main()
{
    int x, y, z, w;

    cout << "Anna nelja kokonaislukua: ";
    cin >> x >> y >> z >> w;

    cout << "\nPienin neljasta numerosta ( " << x << ", " << y << ", " << z << ", " << w << " ): " << min4(x, y, z, w);

    return 0;
}