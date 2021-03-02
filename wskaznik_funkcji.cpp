#include <cstdlib>

#include <iostream>

#include <math.h>


using namespace std;

float funkcja1(float x,float y)
{
    cout << "\nsin(x)+cos(y)\n";

    return sin(x)+cos(y);

}



float funkcja2(float x, float y)
{
    cout << "\nsin(x)/y\n";

    return sin(x)/y;
}



int main(int argc, char *argv[])
{
      float a, b;



    float (*wsk_fun)(float,float);



    int ktora;

    cout << "ktora funkcje wywolac? 1/2? :" ;

    cin >> ktora;



    switch(ktora)
    {
        case 1:

        wsk_fun=funkcja1;

        break;



        case 2:

        wsk_fun=funkcja2;

        break;



        default:

        wsk_fun=NULL;

        cout << "\n nie znam takiej funkcji!\n";

        break;
    }


    if (wsk_fun!=NULL)
    {
        cout << "podaj x i y: ";

        cin >> a  >> b;

        cout << "wynik to " << wsk_fun(a,b) << endl;
    }




    system("PAUSE");

    return EXIT_SUCCESS;
}

