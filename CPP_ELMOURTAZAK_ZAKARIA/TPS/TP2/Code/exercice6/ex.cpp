#include <iostream>
#include <stdlib.h>
#include <conio.h>
class SuiteArithmetique
{
    int nbval, *val;

public:
    SuiteArithmetique(int, int);
    SuiteArithmetique();
    ~SuiteArithmetique();
    void afficher();
};

SuiteArithmetique::SuiteArithmetique(int nb, int mul)
{
    int i;
    nbval = nb;
    val = new int[nbval];
    for (int i = 0; i < nbval; i++)
        val[i] = i * mul;
}

SuiteArithmetique::~SuiteArithmetique()
{
    delete val;
}

void SuiteArithmetique::afficher()
{
    for (int i = 0; i < nbval; i++)
        std::cout << val[i] << " ";
    std::cout << "\n";
}
main()
{
    system("cls");
    SuiteArithmetique suite1(10, 4);
    suite1.afficher();
    getch();
    SuiteArithmetique suite2(6, 8);
    suite2.afficher();
    getch();
}