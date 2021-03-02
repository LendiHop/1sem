#include <iostream>

using namespace std;

int potega(int podst, int wykl) {
    int wynik = 1;
    for (int i=wykl; i > 0; i--) {
        wynik *= podst;
    }
    return wynik;
}

int silnia(int n) {
    int silnia = 1;
    for (int i=n; i > 1; i--) {
        silnia *= i;
    }
    return silnia;
}

int main()
{
    char o;
    do {
        int t;
        cout << "Co chcesz obliczyc? 1-potega 2-silnia" << endl;
        cin >> t;

        switch (t) {
        case 1:
            int podst,wykl;
            cout << "podaj podstawe: ";
            cin >> podst;
            cout << "podaj wykladnik: ";
            cin >> wykl;
            cout << podst << "^" << wykl << " = " << potega(podst,wykl) << endl;
            break;
        case 2:
            int n;
            cout << "Podaj n: ";
            cin >> n;
            cout << n << "! = " << silnia(n) << endl;
            break;
        }

        cout << "Czy zakonczyc? t-tak" << endl;
        cin >> o;
    } while (o != 't');

    return 0;
}
