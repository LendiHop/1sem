#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

void losuj(int *tab,int ilosc_liczb)
{
    for (int i = 0; i < ilosc_liczb; i++)
    {
        tab[i] = rand() % 10;
    }
}

int min_l(int *tab,int ilosc_liczb)
{
    int najm = tab[0];
    for(int i = 0; i < ilosc_liczb; i++)
    {
        if (najm > tab[i])
        {
            najm = tab[i];
        }

    }
    return najm;
}

int max_l(int *tab,int ilosc_liczb)
{
    int najw = tab[0];
    for(int i = 0; i < ilosc_liczb; i++)
    {
        if (najw < tab[i])
        {
            najw = tab[i];
        }
    }
    return najw;
}

void pokarz_min(int *tab, int ilosc_liczb)
{
    cout << endl;
    for (int i = 0; i < ilosc_liczb; i++)
    {
        cout << tab[i] << ",";
    }
    cout << endl;
    for (int i = 0; i < ilosc_liczb; i++)
    {
        if (tab[i] == min_l(tab, ilosc_liczb))
        {
            cout << char(219) << " ";
        }
        else
        {
            cout << "  ";
        }
    }
    cout << endl;
}

void pokarz_max(int *tab, int ilosc_liczb)
{
    cout << endl;
    for (int i = 0; i < ilosc_liczb; i++)
    {
        cout << tab[i] << ",";
    }
    cout << endl;
    for (int i = 0; i < ilosc_liczb; i++)
    {
        if (tab[i] == max_l(tab, ilosc_liczb))
        {
            cout << char(219) << " ";
        }
        else
        {
            cout << "  ";
        }
    }
    cout << endl;
}

int main()
{
    srand( time( NULL ) );
    int il_liczb, wybor;
    char t = 'r';
    while (t != 't' && t != 'T')
    {
        cout << "Ile liczb wylosowac: ";
        cin >> il_liczb;
        int *tab = new int[il_liczb];
        losuj(tab,il_liczb);
        cout << "Co wyszukac? 1-min, 2-max" << endl;
        cin >> wybor;
        switch(wybor)
        {
            case 1:
                pokarz_min(tab,il_liczb);
                break;
            case 2:
                pokarz_max(tab, il_liczb);
                break;
        }
        cout << "Czy zakonczyc? t/T - tak" << endl;
        cin >> t;
        delete [] tab;
    }

    return 0;
}
