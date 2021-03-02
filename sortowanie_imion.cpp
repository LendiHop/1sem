#include <iostream>
#include <cstdlib>
#include <string.h>

using namespace std;

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
    const int dl_wyrazu=20;

    int dl_listy;

    cout << "podaj ilosc imion do wpisania:";

    cin >> dl_listy;

    cout << endl;

    char **lista1;

    lista1=new char*[dl_listy];

    for (int i=0; i<dl_listy; i++)

    {
        lista1[i]=new char[dl_wyrazu];
    }



    for (int y=0; y<dl_listy; y++)
    {
        cout << "imie[" << y << "]:";

        cin >> lista1[y];
    }

    cout << endl << endl;



    for (int y=0; y<dl_listy; y++)

    {
        cout << "imie[" << y << "]:" << lista1[y] << endl;
    }

    cout << endl << endl;

    sortuj_tab(lista1, dl_listy);

    for (int y=0; y<dl_listy; y++)

    {
        cout << "imie[" << y << "]:" << lista1[y] << endl;
    }

    for(int i=0; i<dl_listy; i++) //zwolnienie pamieci

    {
        delete[] lista1[i];
    }

    delete[] lista1;

    return 0;
}
