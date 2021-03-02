#include <iostream>

using namespace std;

int main()
{
    cout << "Obliczam 1- suma, 2- srednia" << endl;

    char a = 'r';
    float liczby[1000];
    float srednia, suma = 0;
    int ileliczb;

    while (a != 't') {
        cout << "Ile liczb wczytac? (maksymalnie 1000): ";
        cin >> ileliczb;

        for (int i = 0; i < ileliczb; i++) {
            cout << "Podaj liczbe " << i << " = ";
            cin >> liczby[i];
            suma += liczby[i];
        }
        srednia = suma/ileliczb;

        int wybor;
        cout << "Co chcesz obliczyc? 1- suma, 2- srednia" << endl;
        cin >> wybor;

        switch (wybor) {
            case 1:
                cout << "Suma liczb: " << suma << endl;
                break;
            case 2:
                cout << "Srednia liczb: " << srednia << endl;
                break;
        }

        cout << "Czy zakonczyc? t- tak, inne- nie" << endl;
        cin >> a;
    }

    return 0;
}
