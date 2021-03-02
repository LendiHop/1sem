#include <iostream>
#include <cstdlib>
#include <fstream>
#include <cstring>

using namespace std;

int policz_znak(char *nazwa_pliku, char znak, int dl_linii)
{
    char temptab[dl_linii];
    int counter = 0;
    fstream plik;
    plik.open(nazwa_pliku, ios::in);
    while (!plik.eof())
    {
        plik.getline(temptab,dl_linii);
        for (int i = 0; i < dl_linii; i++)
        {
            if (znak == temptab[i])
            {
                counter++;
            }
        }
    }
    plik.close();
    return counter;
}

void podmien_znak(char *nazwa_dane, char *nazwa_zapis, char znak1, char znak2, int dl_linii)
{
    char temptab[dl_linii];
    fstream plik_d, plik_z;
    plik_d.open(nazwa_dane, ios::in);
    plik_z.open(nazwa_zapis, ios::out);
    while (!plik_d.eof())
    {
        plik_d.getline(temptab,dl_linii);
        for (int i = 0; i < dl_linii; i++)
        {
            if (znak1 == temptab[i])
            {
                temptab[i] = znak2;
            }
        }
        plik_z << temptab << endl;
    }
    plik_d.close();
    plik_z.close();
}

int main()
{
    int dl_linii = 100;
    char nazwa_pliku[20];
    char znak, znak_p;
    cout << "Podaj nazwe pliku: ";
    cin >> nazwa_pliku;
    cout << "Podaj znak: ";
    cin >> znak;
    cout << "Znak '" << znak << "' wystapil w pliku " << policz_znak(nazwa_pliku, znak, dl_linii) << " raz/y." << endl;
    cout << "Podaj znak do podmiany: ";
    cin >> znak_p;
    podmien_znak(nazwa_pliku, "zapis.txt", znak, znak_p, dl_linii);
    return 0;
}
