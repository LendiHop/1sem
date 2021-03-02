#include <iostream>

using namespace std;

int main()
{
    char wyraz[20];
    cout << "Podaj: ";
    cin >> wyraz;
    system( "cls" );

    int dlwyr;
    for (int i = 0; i < 20; i++) {
        if (wyraz[i] == '\0'){
            dlwyr = i;
            break;
        }
    }

    char proba[20];
    bool switcher = 0;

    for( int i = 1; i <= 10; i++) {
        cout << "wyraz ma " << dlwyr << " liter. Wskazowka: ";
        for (int j = 0; j < i-1; j++) {
            cout << wyraz[j];
        }
        cout << endl;
        cout << "zgadnij: ";
        cin >> proba;

        for (int j = 0; j < dlwyr; j++) {
            if (proba[j] != wyraz[j]) {
                break;
            }
            if (j == dlwyr - 1) {
                cout << "Zgadles! W " << i << " probach.";
                switcher = 1;
                break;
            }
        }
        if (switcher == 1) break;
    }

    return 0;
}
