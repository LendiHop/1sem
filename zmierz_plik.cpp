#include <iostream>
#include <cstdlib>
#include <fstream>
#include <cstring>
using namespace std;

int zmierz_plik(char *nazwa_pliku, int &najdl_wiersz)
{
    char temptab[100];
    int counter = 0;
    fstream plik;
    plik.open(nazwa_pliku, ios::in);
    while (!plik.eof())
    {
        plik.getline(temptab,100);
        if (strlen(temptab) > najdl_wiersz)
        {
            najdl_wiersz = strlen(temptab);
        }
        counter++;
    }
    plik.close();
    return counter;
}

int main()
{
    char tab[100];
    fstream plik1, plik2;
    char nazwa_pliku[] = "dane1.txt";
    int najdl_wiersz = 0;
    plik1.open(nazwa_pliku, ios::in);
    plik2.open("zapis1.txt", ios::out);
    while (!plik1.eof())
    {
        plik1.getline(tab,100);
        plik2.write(tab, strlen(tab));
        plik2 << endl;
        cout << tab << endl;
    }
    plik1.close();
    plik2.close();

    cout << endl << "Nazwa pliku: " << nazwa_pliku << endl;
    cout << "Ilosc wierszy: " << zmierz_plik(nazwa_pliku, najdl_wiersz) << endl;
    cout << "Najdluzszy wiersz: " << najdl_wiersz << endl;

    return 0;
}
