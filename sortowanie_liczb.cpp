#include <cstdlib>
#include <ctime>
#include <iostream>

using namespace std;

void zamien(int &a, int &b)
{
    int c;
    c = a;
    a = b;
    b = c;
}

void sortuj(int t[], int ilosc)
{
    for (int i = 0; i < ilosc - 1; i++)
    {
        for (int j = 1; j < ilosc - i; j++)
        {
            if(t[j] < t[j-1])
            {
                zamien(t[j], t[j-1]);
            }
        }
    }
}

void losuj (int t[], int ilosc, int zakres)
{
    for (int i=0; i < ilosc; i++)
    {
        t[i]=rand()%(zakres);
    }
}

void wypisz(int t[], int ilosc)
{
    for (int i=0; i < ilosc; i++)
    {
        cout << "A[" << i << "]=" << t[i] << endl;
    }
}

int main()

{
    /*
    float zmienna1=2.13;

    float zmienna2=8.97;



    float *wsk_do_float=&zmienna1; //wskaznik wskazuje na zienna1



    cout << "\nnazwa zmiennej wskaznikowej przechowuje adres zmiennej danego typu: "

    << wsk_do_float << endl;



    cout << "*nazwa zmiennej wskaznikowej pozwala na dostep \n do zawartosci"

    << " zmiennej wskazywanej przez wskaznik : " << *wsk_do_float << endl << endl;





    wsk_do_float=&zmienna2;    // wskaznik wskazuje teraz na zienna2

    cout << "\ndla drugiej zmiennej mamy adres: " << wsk_do_float << endl;

    cout << "i wawartosc:"  << *wsk_do_float << endl << endl;





    cout << endl << endl;
    */

    srand( time( NULL ) );

    int ilosc, zakres;
    int tab[20];

    cout << "ile liczb wylosowac (max 20): " << endl;
    cin >> ilosc;
    cout << "podaj zakres: " << endl;
    cin >> zakres;
    losuj(tab, ilosc, zakres);
    wypisz(tab, ilosc);
    cout << "posortowane: " << endl;
    sortuj(tab, ilosc);
    wypisz(tab, ilosc);

    return 0;

}

