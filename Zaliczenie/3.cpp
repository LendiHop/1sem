#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;

void zapisz(char *tab, char nazwa_pliku[])
{
    fstream plik;
    plik.open(nazwa_pliku, ios::out | ios::app);
    plik << tab << endl;
}

void powtarz_litery(char *tab, int dl_wyr)
{
    bool switcher = 0;
    char t;
    char nazwa_pliku[20];
    for (int i = 1; i < dl_wyr; i++)
    {
        if(tab[i] == tab[i-1])
        {
            switcher = 1;
            cout << "Powtarz sasiedni litery: " << tab[i] << endl;
            cout << "Czy zapisac? t-tak: ";
            cin >> t;
            if (t == 't')
            {
                cout << "Podaj nazwe pliku do zapisu: ";
                cin >> nazwa_pliku;
                zapisz(tab, nazwa_pliku);
            }
            break;
        }
    }
    if (switcher == 0)
    {
        cout << "Brak powtarz sasiednich liter." << endl;
    }
}


int main()
{
    int max_liter = 20;
    char *wyraz = new char[max_liter];
    int dl_wyr;
    char t = 'r';
    while (t != 't')
    {
        cout << "Podaj wyraz:" << endl;
        cin >> wyraz;
        dl_wyr = strlen(wyraz);
        powtarz_litery(wyraz, dl_wyr);
        cout << "Czy zakonczyc? t-tak: ";
        cin >> t;
    }
    return 0;
}
