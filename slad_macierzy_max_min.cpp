#include <iostream>

using namespace std;

int main()
{
    const int wymX = 3;
    const int wymY = 3;
    float tab[wymX][wymY];
    for (int i = 0; i < wymX; i++) {
        for (int j = 0; j < wymY; j++) {
            cout << "tab[" << i << "][" << j << "] = ";
            cin >> tab[i][j];
        }
    }
    cout << endl;
    for (int i = 0; i < wymX; i++) {
        for (int j = 0; j < wymY; j++) {
            cout << tab[i][j] << " ";
        }
        cout << endl;
    }

    float wyzn = tab[0][0]*tab[1][1]*tab[2][2]-tab[0][0]*tab[1][2]*tab[2][1]-tab[1][0]*tab[0][1]*tab[2][2]+tab[1][0]*tab[0][2]*tab[2][1]+tab[2][0]*tab[0][1]*tab[1][2]-tab[2][0]*tab[0][2]*tab[1][1];
    //obliczanie sladu macierzy
    float slad = tab[0][0]+tab[1][1]+tab[2][2];
    //wyliczanie maximum i minimum
    float maxW = 0, minW = 1000;
    for (int i = 0; i < wymX; i++) {
        for (int j = 0; j < wymY; j++) {
            if (tab[i][j] > maxW)
                maxW = tab[i][j];
            if (tab[i][j] < minW)
                minW = tab[i][j];
        }
    }

    cout << endl << "Wyznacznik = " << wyzn;
    cout << endl << "Slad = " << slad;
    cout << endl << "Maximum = " << maxW;
    cout << endl << "Minimum = " << minW;

    return 0;
}
