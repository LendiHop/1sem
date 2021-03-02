#include <iostream>

using namespace std;

void prostok(int szer, int wys, bool wyp)
{
    switch (wyp)
    {
    case 1:
        for (int i = 0; i < wys; i++)
        {
            for (int j = 0; j < szer; j++)
            {
                cout << 'x';
            }
            cout << endl;
        }
        break;
    case 0:
        for (int i = 0; i < wys; i++)
        {
            if (i == 0 || i == wys-1)
            {
                for (int j = 0; j < szer; j++)
                {
                    cout << 'x';
                }
                cout << endl;
            }
            else
            {
                for (int j = 0; j < szer; j++)
                {
                    if (j == 0 || j == szer-1)
                    {
                       cout << 'x';
                    }
                    else
                    {
                        cout << ' ';
                    }
                }
                cout << endl;
            }
        }
        break;
    }
}

int main()
{
    int a,b;
    bool c;
    cout << "podaj szerokosc: ";
    cin >> a;
    cout << "podaj wysokosc: ";
    cin >> b;
    cout << "Czy prostokat ma byc wypelniony? 1 - tak, 0 - nie: ";
    cin >> c;
    cout << endl;
    prostok(a,b,c);

    return 0;
}

