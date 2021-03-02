#include <iostream>
#include <cstdlib>
#include <stdio.h>
#include <time.h>
#include <math.h>

using namespace std;

double Monte_Pi (long int n)
{
    double x,y,pi;
    long int point_in=0;

    cout << "\nobliczam...\n";

    for (int i=0; i<n; i++)
    {
     x=double(rand())/RAND_MAX;
        y=double(rand())/RAND_MAX;
        if ((x*x+y*y)<=1)
        {
            point_in=point_in+1;
        }
    }
    pi=((double(point_in))/n)*4;
    return pi;
}
// algorytm rekurencyjny
double silnia_r (int a)
{
    long int silnia;
    if (a == 1 || a == 0)
    {
        silnia = 1;
        return silnia;
    }
    else
    {
        return a * silnia_r(a-1);
    }
}
// algorytm iteracyjny
double silnia_i (int a)
{
    long int silnia = 1;
    if (a == 1 || a == 0)
    {
        return silnia;
    }
    else
    {
        for (int i = 1; i <= a; i++)
        {
            silnia *= i;
        }
        return silnia;
    }
}

double euler (long int n)
{
    double e = 1;
    for (int i = 1; i <= n; i++)
    {
        e += 1/silnia_i(i);
    }
    return e;
}

int main()
{
    time_t t;
    srand ((unsigned) time(&t)); //inicjalizacja generatora losowego;

    long int n = 0;
    int wybor;

    cout << "Co obliczyc? 1-PI 2- Liczba Eulera e" << endl;
    cin >> wybor;

    switch(wybor)
    {
    case 1:
        cout << "podaj liczbe punktow do losowania: ";
        cin >> n;

        cout.precision(9);
        cout << "PI z biblioteki math.h: " << M_PI << endl;
        cout << "\npoliczone PI: " << Monte_Pi(n) << endl << endl;
        break;

    case 2:
        cout << "podaj liczbe ilosc krokow: ";
        cin >> n;
        cout.precision(20);

        cout << "Liczba Eulera z biblioteki math.h: " << M_E << endl;
        cout << "\npoliczona e: " << euler(n) << endl << endl;
        break;
    }

    return 0;
}
