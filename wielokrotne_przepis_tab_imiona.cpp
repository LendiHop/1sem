#include <iostream>
#include <cstdlib>
#include <string.h>

using namespace std;

int length(char tab[])
{
    int length = 0;
    for (int i = 0; i >= 0; i++)
    {
        if(tab[i] == '\0')
        {
            length = i;
            break;
        }
    }
    return length;
}

char **utworz_tab(int x, int y)
{
    char **tab_char;
    tab_char = new char*[y];

    for (int i = 0; i < y; i++)
    {
        tab_char[i] = new char[x];
        for (int j = 0; j < x; j++)
        {
            tab_char[i][j] = '\0';
        }
    }
    return tab_char;
}

void usun_tab(char **tab, int y)
{
    for (int i = 0; i < y; i++)
    {
        delete [] tab[i];
        tab[i] = NULL;
    }
    delete [] tab;
    tab = NULL;
}

void kopiuj_tab(char **const dest, char **const sour, int x, int y)
{
    for (int i = 0; i < y; i++)
    {
        for (int j = 0; j < x; j++)
        {
            dest[i][j] = sour[i][j];
        }
    }
}

void wyswietl_tab(char **const tab, int x, int y)
{
    for (int i = 0; i < y; i++)
    {
        cout << "Imie[" << i << "]: ";
        for (int j = 0; j < x; j++)
        {
            cout << tab[i][j];
        }
        cout << endl;
    }
}

void sortuj_tab(char **tab, int y)
{
    cout << "sortuje..." << endl;
    char *temp = new char[20];
    for (int i = 0; i < y - 1; i++)
    {
        for (int j = 0; j < y - 1; j++)
        {
            if(strcmpi(tab[j], tab[j+1]) > 0)
            {
                strcpy(temp, tab[j]);
                strcpy(tab[j], tab[j+1]);
                strcpy(tab[j+1], temp);
            }
        }
    }
    delete [] temp;
}

int main()
{
    int input;
    int max_dl_imienia = 0;
    int dl_imienia, last_dl_imienia;
    int counter = 0;
    do {
        cout << "Co zrobic? 1-dodaj imie, 2-wyswietl, 3-sortuj, 4-koniec ";
        cin >> input;
        char **newtab, **oldtab;
        switch (input)
        {
            case 1:
                char imie[20];
                cout << "Podaj imie: ";
                cin >> imie;
                dl_imienia = length(imie);
                if(max_dl_imienia < length(imie))
                {
                    max_dl_imienia = length(imie);
                }
                counter++;
                if (counter > 1)
                {
                    newtab = utworz_tab(max_dl_imienia, counter);
                    if (last_dl_imienia < max_dl_imienia)
                    {
                        kopiuj_tab(newtab, oldtab, last_dl_imienia, counter-1);
                    }
                    else
                    {
                        kopiuj_tab(newtab, oldtab, max_dl_imienia, counter-1);
                    }

                    for (int i = 0; i < dl_imienia; i++)
                    {
                        newtab[counter-1][i] = imie[i];
                    }
                    usun_tab(oldtab, counter-1);
                    oldtab = utworz_tab(max_dl_imienia, counter);
                    kopiuj_tab(oldtab, newtab, max_dl_imienia, counter);
                    usun_tab(newtab, counter);
                    last_dl_imienia = max_dl_imienia;
                }
                else
                {
                    oldtab = utworz_tab(dl_imienia, counter);
                    for (int i = 0; i < dl_imienia; i++)
                    {
                        oldtab[0][i] = imie[i];
                    }
                    last_dl_imienia = max_dl_imienia;
                }
                break;
            case 2:
                wyswietl_tab(oldtab, max_dl_imienia, counter);
                break;
            case 3:
                sortuj_tab(oldtab, counter);
                break;
        }

    } while (input != 4);

    return 0;
}
