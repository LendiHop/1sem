#include <iostream>
#include <cstdlib>
#include <fstream>

using namespace std;

void wczytaj (char *nazwa_pliku, float *wsk_fl, int ilosc)
{
    cout << "Wczytuje dane z pliku: " << nazwa_pliku << endl;
    fstream plik;
    plik.open(nazwa_pliku, ios::in);

    if(plik.good() == true)
    {
        for (int i = 0; i < ilosc; i++)
        {
           plik >> wsk_fl[i];
           if (i < ilosc-1 && plik.eof())
           {
               cout << "\n Za malo danych w pliku!\n";
               break;
           }
        }
    }
    plik.close();
}

void zapisz (char *nazwa_pliku, float *wsk_fl, int il)
{
    cout << "Zapisuje w pliku: " << nazwa_pliku << endl;
    fstream plik;
    plik.open(nazwa_pliku, ios:: out);
    for (int i = 0; i < il; i++)
    {
        plik << wsk_fl[i] << endl;
    }
    plik.close();
}

void wypisz (float *wsk_fl, int il)
{
    for (int i = 0; i < il; i++)
    {
        cout << wsk_fl[i] << "   ";
    }
    cout << endl;
}

void wprowadz (float *wsk_fl, int ilosc)
{
    cout << "Wprowadz dane." << endl;
    for (int i = 0; i < ilosc; i++)
    {
        cout << "A[" << i << "]= ";
        cin >> wsk_fl[i];
    }
}

void dopisz (char *nazwa_pliku)
{
    float input;
    cout << "Jaka liczbe chcesz dopisac?: ";
    cin >> input;
    fstream plik;
    plik.open(nazwa_pliku, ios::out|ios::app);
    cout << "Dopisuje na koncu pliku: " << nazwa_pliku << endl;
    plik << input << endl;
    plik.close();
}

int main()
{
    char nazwa_pliku[] = "dane1.txt";
    int il_dan, wybor;
    cout << "Podaj ilosc danych: ";
    cin >> il_dan;
    float *temptab = new float [il_dan];

    do
    {
        cout << "Co zrobic? 1-wczytaj, 2-wprowadz, 3-zapisz, 4-wypisz, 5-dopisz, 6-koniec" << endl;
        cin >> wybor;
        switch (wybor)
        {
        case 1:
            wczytaj(nazwa_pliku, temptab, il_dan);
            break;
        case 2:
            wprowadz(temptab, il_dan);
            break;
        case 3:
            zapisz(nazwa_pliku, temptab, il_dan);
            break;
        case 4:
            wypisz(temptab, il_dan);
            break;
        case 5:
            dopisz(nazwa_pliku);
            break;
        }
    } while(wybor != 6);
    cout << "Konczymy!";
    delete [] temptab;
    return 0;
}
