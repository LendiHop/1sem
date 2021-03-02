#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int a,b,c,delta,pzdelty,x1,x2;
    cout << "y = ax^2 + bx + c" << endl;

    cout << "Podaj a: ";
    cin >> a;

    cout << "Podaj b: ";
    cin >> b;

    cout << "Podaj c: ";
    cin >> c;

    delta = b*b - 4*a*c;
    cout << "delta = " << delta << endl;

    pzdelty = sqrt(b*b - 4*a*c);

    x1 = ((-b) - pzdelty)/2*a;
    x2 = ((-b) + pzdelty)/2*a;

    cout << "x1 = " << x1 << endl;
    cout << "x2 = " << x2 << endl;

    return 0;
}
