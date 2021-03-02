#include <iostream>

using namespace std;

void trojk(int wysok, char wyp)
{
    if (wyp == 't')
    {
        for (int i = wysok-1; i >= 0; i--)
        {
            for (int j = 0; j < wysok-i;j++)
            {
                cout << "X";
            }
            cout << endl;
        }
    }
    else
    {
        for (int i = wysok-1; i >= 0; i--)
        {
            for (int j = 0; j < wysok-i;j++)
            {
                if (j == 0 || j == wysok-i-1 || i == 0)
                {
                    cout << "X";
                }
                else
                {
                    cout << " ";
                }

            }
            cout << endl;
        }
    }
}

int main()
{
    int wysok;
    char wyp;
    char t = 'r';
    while (t != 't')
    {
        cout << "Podaj wysokosc trojkata: " << endl;
        cin >> wysok;
        cout << "Czy trojkat ma byc wypelniony? t- tak, n- nie" << endl;
        cin >> wyp;
        trojk(wysok, wyp);
        cout << "Czy zakonczyc? t- tak" << endl;
        cin >> t;
    }
    return 0;
}
