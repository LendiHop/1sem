#include <iostream>
#include <cstdlib>
#include <math.h>

using namespace std;

void miejsce_zerowe(float (*wsk_fun)(float), float start, float stop, float krok)
{
    cout << endl <<  "Szukam miejsc zerowych funkcji z krokiem: " << krok << endl;
    float fodx;
    for (float i = start + krok; i <= stop; i += krok)
    {
        i *= 100;
        i = nearbyint(i);
        i /= 100;
        fodx = wsk_fun(i);
        fodx *= 100;
        fodx = nearbyint(fodx);
        fodx /= 100;
        if( fodx == 0 )
        {
            cout << i << endl;
        }
    }
}

void maks_f(float (*wsk_fun)(float), float start, float stop, float krok)
{
    cout << endl <<  "Szukam maksimum funkcji z krokiem: " << krok << endl;
    float x1,x2,x3;
    for (float i = start; i <= stop; i += krok)
    {
        x1 = i - krok;
        x2 = i;
        x3 = i + krok;
        if( ( wsk_fun(x2) > wsk_fun(x1) ) && ( wsk_fun(x2) > wsk_fun(x3) ) )
        {
            cout << "maksimum dla x= " << x2 << endl;
            cout << "wartosc y=" << wsk_fun(x2) << endl;
        }
    }
}

void min_f(float (*wsk_fun)(float), float start, float stop, float krok)
{
    cout << endl << "Szukam minimum funkcji z krokiem: " << krok << endl;
    float x1,x2,x3;
    for (float i = start; i <= stop; i += krok)
    {
        x1 = i - krok;
        x2 = i;
        x3 = i + krok;
        if( ( wsk_fun(x2) < wsk_fun(x1) ) && ( wsk_fun(x2) < wsk_fun(x3) ) )
        {
            cout << "minimum dla x= " << x2 << endl;
            cout << "wartosc y=" << wsk_fun(x2) << endl;
        }
    }
    cout << endl;
}

float funkcja1(float z)
{
    return sin(z);
}

float funkcja2(float z)
{
    return cos(z);
}

int main()
{
    float (*wsk_fun)(float);
    float krok = 0.001;
    float start, stop;
    char znak = ' ';
    int wybor;

    do
    {
        cout << endl << "Szukam minimum, maksimum i miejsca zerowe funkcji." << endl;
        cout << "podaj poczatek przedialu: ";
        cin >> start;
        cout << "podaj koniec przedialu: ";
        cin >> stop;
        cout << "podaj krok dokladnosci: ";
        cin >> krok;
        cout << "1 - sin, 2 - cos: ";
        cin >> wybor;
        switch(wybor)
        {
        case 1:
            wsk_fun = funkcja1;
            miejsce_zerowe(wsk_fun, start, stop, krok);
            maks_f(wsk_fun, start, stop, krok);
            min_f(wsk_fun, start, stop, krok);
            break;
        case 2:
            wsk_fun = funkcja2;
            miejsce_zerowe(wsk_fun, start, stop, krok);
            maks_f(wsk_fun, start, stop, krok);
            min_f(wsk_fun, start, stop, krok);
            break;
        }
        cout << "Czy kontynuowac? n=nie   ";
        cin >> znak;
    } while(znak != 'n');

    return 0;
}
