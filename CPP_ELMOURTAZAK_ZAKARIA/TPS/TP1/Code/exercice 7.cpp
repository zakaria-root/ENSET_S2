#include<iostream>
#include <conio.h>
#include <math.h>
using namespace std;




void affiche (float x, int n = 0)
{
    if (x == 0)
    cout << "0^0 = 0\n" ;
    else
    cout << x << "^" << n << " = " << pow(x,n)<<"\n";
}

void affiche (int n,float x=0)
{
    if (n == 0)
    cout << "0^0 = 0\n" ;
    else
    cout << x << "^" << n << " = " << pow(x,n)<<"\n";
}

main ()
{
    int nb = 3;
    float val = 3.3;

    affiche (val);
    affiche (nb);
    affiche (val,nb);
    affiche (val,nb);

    getch();
}
