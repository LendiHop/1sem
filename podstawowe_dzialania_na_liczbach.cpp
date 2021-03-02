#include <iostream>

using namespace std;

int main()
{
   /* cout << "==============" << endl;
    cout << "= To proste! =" << endl;
    cout << "==============" << endl;
    cout << "\t A jak to zrobic?" << endl;
    cout << "Koniec :)"; */

    /* float a,b,c;
    bool czyBlad = cin.fail();
    cin >> a;
    cout << "a= " << a << " ";
    cout <<  "Blad? " << czyBlad << endl;

    cin.clear();
    cin.ignore( 1000, '\n' );

    cin >> b;
    czyBlad = cin.fail();
    cout << "b= " << b << " ";
    cout <<  "Blad? " << czyBlad << endl;

    cin.clear();
    cin.ignore( 1000, '\n' );

    cin >> c;
    czyBlad = cin.fail();
    cout << "c= " << c << " ";
    cout <<  "Blad? " << czyBlad << endl;

    cin.clear();
    cin.ignore( 1000, '\n' ); */


    /* int a,b;
    cout << "podaj a: ";
    cin >> a;

    cout << "podaj b: ";
    cin >> b;

    cout << "a+b= " << a+b << endl;
    cout << "a-b= " << a-b << endl;
    cout << "a/b= " << a/b << endl;
    cout << "a*b= " << a*b << endl;
    cout << "a%b= " << a%b << endl; */

    /* float a,b;
    cout << "podaj a: ";
    cin >> a;

    cout << "podaj b: ";
    cin >> b;

    cout << "a+b= " << a+b << endl;
    cout << "a-b= " << a-b << endl;
    cout << "a/b= " << a/b << endl;
    cout << "a*b= " << a*b << endl; */

    /* int a,b,c;
    a = b = c = 10;
    cout << a << b << c; */

    /* bool wynik;
    wynik = false || (false && true || !true);
    cout << "wynik = " << wynik << endl; */

    /* int wiek;
    cin >> wiek;
    if( wiek >= 18 && wiek <= 100 )
    {
        cout << "Twierdzisz, ze jestes pelnoletni..." << endl;
        cout << "ale czy to kogos interesuje? :)" << endl;
    }
    cout << "Koniec" << endl; */

    float a,b;
    cout << "podaj dwie liczby" << endl;
    cin >> a >> b;

    char dzialanie;
    cout << "wprowadz typ dzialania" << endl;
    cin >> dzialanie;

    switch(dzialanie) {
    case '+':
        cout << a + b;
        break;
    case '-':
        cout << a - b;
        break;
    case '*':
        cout << a * b;
        break;
    case '/':
        cout << a / b;
        break;

    default:
        cout << "pomylka";
        break;
    }

    return 0;
}
