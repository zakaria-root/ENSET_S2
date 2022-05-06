#include<iostream>
#include <conio.h>
using namespace std;

struct essai
{
    int n;
    float x;
};

void remis_a_zero(essai *e)
{
    e->n = 0;
    e->x = 0;
}

main()
{
    essai es;
    es.n = 5;
    es.x = 3.3;


    remis_a_zero(&es);
    cout << "es.n = " << es.n << "  es.x = " << es.x<<"\n";

    getch();

}