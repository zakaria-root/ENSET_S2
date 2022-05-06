#include <iostream>
#include <conio.h>

class point
{
private:
    int x, y;

public:
    point(int abs, int ord);
    ~point();
};

point::point(int abs, int ord) : x(abs), y(ord)
{
    std::cout << "Constriction du point " << x << " " << y  << " a l'adresse " << this<< std::endl;
}

point::~point()
{
    std::cout << "Destruction du point " << x << " " << y  << " a l'adresse "<< this<< std::endl;
}


int main(int argc, char const *argv[])
{
    std::cout << "debut du main" << std::endl;

    point a(1,2);
    point b =a;
    std::cout << "fin du main" << std::endl;
    getchar();
    return 0;
}
