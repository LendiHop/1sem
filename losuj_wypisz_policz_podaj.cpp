#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

void losuj(int t[49], int ilosc=6, int zakres=49)
{
    for (int i = 0; i < zakres; i++)
    {
        t[i] = rand()%zakres+1;
    }
    cout << "wylosowane liczby: ";
    for (int i = 0; i < ilosc; i++)
    {
        if (i == ilosc -1)
        {
            cout << t[i];
        }
        else
        {
           cout << t[i] << ",";
        }
    }
    cout << endl;
}

void wypisz(int t[], int ilosc=6)
{
    cout << "podane liczby: ";
    for (int i = 0; i < ilosc; i++)
    {
        if (i == ilosc -1)
        {
            cout << t[i];
        }
        else
        {
           cout << t[i] << ",";
        }
    }
    cout << endl;
}

int policz(int t1[], int t2[], int ilosc=6)
{
    int counter = 0;
    for(int i = 0; i < ilosc; i++)
    {
        if(t1[i] == t2[i])
        {
            counter++;
        }
    }
    return counter;
}

void podaj(int t[], int ilosc=6)
{
    cout << "podaj liczby 6/49: " << endl;
    for (int i = 0; i < ilosc; i++)
    {
        cin >> t[i];
    }
}

int main()
{
    int tab_pod[6];
    podaj(tab_pod);
    wypisz(tab_pod);
    int tab_los[49];
    srand( time( NULL ) );
    losuj(tab_los);
    cout << "trafiles " << policz(tab_los,tab_pod) << " liczb(-y).";
    return 0;
}
