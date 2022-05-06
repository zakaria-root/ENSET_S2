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
    std::cout << "Constriction du point " << x << " " << y << std::endl;
}

point::~point()
{
    std::cout << "Destriction du point " << x << " " << y << std::endl;
}

void test()
{
    std::cout << "debut du test" << std::endl;

    static point a(1, 5);
    std::cout << "fin de test" << std::endl;
}
int main(int argc, char const *argv[])
{
    std::cout << "debut du main" << std::endl;

    point a(1, 4);
    test();
    point b(5, 100);

    std::cout << "fin du main" << std::endl;
    getchar();
    return 0;
}
