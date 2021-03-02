#include <iostream>

using namespace std;

int *utworz_tab(int n)
{
    int *tab_int;
    tab_int = new int[n]; //alokacja pamieci

    return tab_int;
}

void usun_tab(int *tab)
{
    delete [] tab;
    tab = NULL;

    //cout << "znieszczenie!!!\n";
}

void kopiuj_tab(int *const dest, int *const sour, int n)
{
    for (int i = 0; i < n; i++)
    {
        dest[i] = sour[i];
    }
}

void wyswietl_tab(const int *const tab, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << "Liczba[" << i << "]: " << tab[i] << endl;
    }
}

void zamien(int &a, int &b)
{
    int c;
    c = a;
    a = b;
    b = c;
}

void sortuj_tab(int *const tab, int y)
{
    for (int i = 0; i < y - 1; i++)
    {
        for (int j = 1; j < y - i; j++)
        {
            if(tab[j] < tab[j-1])
            {
                zamien(tab[j], tab[j-1]);
            }
        }
    }
}

int main()
{
    int input;
    int counter = 0;
    do {
        cout << "Co zrobic? 1-dodaj liczbe, 2-wyswietl liczby, 3-sortuj, 4-koniec ";
        cin >> input;
        int *newtab, *oldtab;
        switch (input)
        {
            case 1:
                int liczba;
                cout << "Podaj liczbe int: ";
                cin >> liczba;
                counter++;
                if (counter > 1)
                {
                    newtab = utworz_tab(counter);
                    kopiuj_tab(newtab, oldtab, counter);
                    newtab[counter-1] = liczba;
                    usun_tab(oldtab);
                    oldtab = utworz_tab(counter);
                    kopiuj_tab(oldtab, newtab, counter);
                    usun_tab(newtab);
                }
                else
                {
                    oldtab = utworz_tab(1);
                    oldtab[0] = liczba;
                }
                break;
            case 2:
                wyswietl_tab(oldtab, counter);
                break;
            case 3:
                sortuj_tab(oldtab, counter);
                cout << "sortuje..." << endl;
                break;
        }

    } while (input != 4);

    return 0;
}
