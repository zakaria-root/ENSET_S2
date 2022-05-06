#include <iostream>
#include <conio.h>
using namespace std;
float puissance(float val, int nb = 4 )
{
    float P = 1;
    for (int i = 1; i <= nb; i++)
        P = P * val;
    return P;
}

main()
{
    char c = 5;
    int i = 10,j = 6;
    float r = 5.246, r1, r2, r3, r4, r5,r6;
    r1 = puissance(r,j);
    r2 = puissance(r, c);
    r3 = puissance (j, i);
    r4 = puissance (j,r);
    r5 = puissance(0, 4);
    r6 = puissance(r);
    cout << "r1 = " << r1 << "\n";
    cout << "r2 = " << r2 << "\n";
    cout << "r3 = " << r3 << "\n";
    cout << "24 = " << r4 << "\n";
    cout << "r5 = " << r5 << "\n";
    cout << "r6 = " << r6 << "\n";
    getch();
}