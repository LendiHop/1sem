#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    cout << "Obliczam 1- suma, 2- dlugosci, 3- iloczyn skalarny\n" << endl;
    int wybor;

    //przestszen 2- dwuwymiarowa, 3- trojwymiarowa
    int przest = 2;

    int a[przest], b[przest];
    char t = 'r';
    float c[przest];
    float dlA = 0,dlB = 0;
    int ilskar = 0;

    while (t != 't') {
        for (int i = 0; i < przest; i++) {
            cout << "Podaj wspolrzedna wektora a[" << i << "] = ";
            cin >> a[i];
        }

        for (int i = 0; i < przest; i++) {
            cout << "Podaj wspolrzedna wektora b[" << i << "] = ";
            cin >> b[i];
        }

        cout << "Co chcesz obliczyc? 1- suma, 2- dlugosci, 3- iloczyn skalarny" << endl;
        cin >> wybor;
        switch (wybor) {
            case 1:
                cout << "Suma wektorow a+b" << endl;
                for (int i = 0; i < przest; i++) {
                    c[i] = a[i] + b[i];
                    cout << "c[" << i << "] = " << c[i] <<endl;
                }
                break;
            case 2:
                for (int i = 0; i < przest; i++) {
                    dlA += a[i]*a[i];
                    dlB += b[i]*b[i];
                }
                dlA = sqrt(dlA);
                dlB = sqrt(dlB);
                cout << "dlugosc a = " << dlA << endl;
                cout << "dlugosc b = " << dlB << endl;
                break;
            case 3:
                for (int i = 0; i < przest; i++) {
                    ilskar += a[i]*b[i];
                }
                cout << "iloczyn skalarny wektorow a i b: " << ilskar << endl;
                break;
        }

        cout << "Czy zakonczyc? t- tak, inne- nie" << endl;
        cin >> t;
    }

    return 0;
}
