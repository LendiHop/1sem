#include <iostream>

using namespace std;

int main()
{

    /*int age;
    cout << "Ile masz lat? ";
    cin >> age;
    cout << "Juz wiem! Masz " << age << " lat." << endl;

    if (age >= 18)
        cout << "Jestes pelnoletni!";
    else
        cout << "Nie jestes pelnoletni."; */


    float temp;
    cout << "Podaj temperature: ";
    cin >> temp;

    if (temp > 40)
        cout << "Scrajnie Goraco";
    else if (temp <= 40 && temp > 35)
        cout << "Upal";
    else if (temp <= 35 && temp > 25)
        cout << "Goraco";
    else if (temp <= 25 && temp > 18)
        cout << "Komfortowo";
    else if (temp <= 18 && temp > 10)
        cout << "Chlodno";
    else if (temp <= 10 && temp > 0)
        cout << "Zimno";
    else if (temp <= 0 && temp > -10)
        cout << "Bardzo zimno";
    else if (temp <= -10 && temp > -20)
        cout << "Mroz";
    else if (temp <= -20)
        cout << "Silny mroz";
    if (temp < -89.2 || temp > 56.7)
        cout << "Taka temperatura nie wystempuje na Ziemi";

    return 0;
}
