#include <iostream>

using namespace std;

//algorytm Euklidesa
int NWD(int a, int b) {
    while (a != b) {
            if (a > b)
                a -= b;
            else
                b -= a;
        }
    return a;
}

int NWW(int a, int b) {
    return a*b / NWD(a,b);
}

int main()
{
    char r;
    do {
        int a, b;
        cout << "podaj 1 liczbe: ";
        cin >> a;
        cout << "podaj 2 liczbe: ";
        cin >> b;

        cout << "najwiekszy wspolny dzielnik: " << NWD(a,b) << endl;
        cout << "najmniejsza wspolna wielokrotnosc: " << NWW(a,b) << endl;

        cout << "Czy zakonczyc? t-tak ";
        cin >> r;
    } while(r != 't');

    return 0;
}
