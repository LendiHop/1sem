#include <iostream>

using namespace std;

int main()
{
    /*
    float liczba;
    do {
        cout << "podaj liczbe dodatnia:" << endl;
        cin >> liczba;
        if (liczba < 0)
            cout << "Mniejsza od 0" << endl;
        if (liczba == 0)
            cout << "Nie dodatnia" << endl;

    } while (liczba <= 0);

    cout << "Liczba jest dodatnia. Koniec!";
    */
    /*
    float liczba;
    while (liczba <= 0) {
        cout << "podaj liczbe dodatnia:" << endl;
        cin >> liczba;
        if (liczba < 0)
            cout << "Mniejsza od 0" << endl;
        if (liczba == 0)
            cout << "Nie dodatnia" << endl;
    }

    cout << "Liczba jest dodatnia. Koniec!";
    */
    /*
    int liczba, counter = 1;
    cout << "Podaj liczbe(0-100): ";
    cin >> liczba;
    system("cls");
    while (true) {
        int temp;
        cout << "Podaj liczbe: ";
        cin >> temp;

        if (temp > liczba) {
            cout << "Duzo" << endl;
            counter++;
        }

        if (temp < liczba) {
            cout << "Malo" << endl;
            counter++;
        }

        if (temp == liczba) {
            cout << "Zgadles z " << counter << " proby";
            break;
        }
    }
    */

    int liczba1, liczba2;
    cout << "Podaj najwiekszaa liczbe do wypisania: ";
    cin >> liczba1;
    cout << "Podaj liczbe do dzielenia bez reszty: ";
    cin >> liczba2;
    for (int i = 0; i <= liczba1; i++) {
        cout << i;
        if (i % liczba2 == 0)
            cout << " Jest podzielna przez " << liczba2 << endl;
        else
            cout << endl;
        if (i == 20) {
            cout << "za duza liczba";
            break;
        }
    }


    return 0;
}
