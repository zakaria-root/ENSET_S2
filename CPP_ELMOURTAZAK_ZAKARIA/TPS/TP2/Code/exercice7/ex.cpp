#include <iostream>
#include <time.h>

class hasard
{
private:
    int *val;
    int nbMax;

public:
    hasard(int, int);
    ~hasard();
    afficher();
};

hasard::hasard(int nb, int max)
{
    val = new int(nbMax = nb);
    srand(time(NULL));
    for (int index = 0; index < nbMax; index++)
        val[index] = rand() % max + 1;
}

hasard::~hasard()
{
    delete val;
}

hasard::afficher()
{
    for (int index = 0; index < nbMax; index++)
        std::cout << val[index] << " ";
    std::cout << std::endl;
}

main(int argc, char const *argv[])
{
    hasard suite1(4, 10);
    suite1.afficher();
    getchar();
}
