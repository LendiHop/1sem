#include <iostream>

using namespace std;

int main()
{
    int input;
    cout << "Wybierz opcje: " << endl;
    cout << "1. Dollar ---> Zloty" << endl;
    cout << "2. Zloty ---> Dollar" << endl;
    cout << "3. Zloty ---> Hrywna" << endl;
    cout << "4. Hrywna ---> Zloty" << endl;
    cin >> input;

    float amount;
    cout << "ilosc: ";
    cin >> amount;

    switch(input) {
    case 1:
        cout << "w zlotych: " << amount*3.8;
        break;
    case 2:
        cout << "w dollarach: " << amount/3.8;
        break;
    case 3:
        cout << "w hrywnach: " << amount*7.5;
        break;
    case 4:
        cout << "w zlotych: " << amount/7.5;
        break;
    default:
        cout << "Sprobuj jeszcze raz";
    }

    return 0;
}
