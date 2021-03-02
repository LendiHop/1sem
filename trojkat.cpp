#include <iostream>

using namespace std;

int main()
{
    int a,b,c;
    cout << "Podaj dlugosc bokow: " << endl;
    cin >> a >> b >> c;

    if (a < (b+c) && b < (a + c) && c < (a+b))
        cout << "Jest trojkat!";
    else
        cout << "Nie ma trojkata.";

    return 0;
}
