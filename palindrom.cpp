#include <iostream>

using namespace std;

int main()
{
    char wyraz[20];
    cout << "podaj wyraz (maks 20 liter)" << endl;
    cout << "podales: ";
    cin >> wyraz;

    int dlwyr;
    for (int i = 0; i < 20; i++) {
        if (wyraz[i] == '\0'){
            dlwyr = i;
            break;
        }
    }

    cout << "dlugosc wyrazu: " << dlwyr << endl;

    cout << "wspak: ";
    for (int i = dlwyr-1; i >= 0; i--) {
        cout << wyraz[i];
    }
    int switcher = 1;
    for (int i = 0; i < dlwyr/2; i++) {
        if(wyraz[i] != wyraz[dlwyr-1-i]) {
            cout << endl << "Wyraz nie jest palindromem.";
            switcher = 0;
            break;
        }
    }
    if(switcher = 1)
        cout << endl << "To jest palindrom";

    return 0;
}
