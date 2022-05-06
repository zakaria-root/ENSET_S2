#include "partie1.h"

class triangle : public forme
{
protected:
    coordonne a, b, c;

public:
    triangle(int, int, int, int, int, int, short);
    triangle(triangle &);
    triangle operator=(triangle &);
    void affiche();
    void deplace(int, int);
    int surface;
    int perimetre;
};

triangle::triangle(int x1, int y1, int x2, int y2, int x3, int y3, short couleur) : forme(couleur)
{
    a = coordonne(x1, y1);
    b = coordonne(x2, y2);
    c = coordonne(x3, y3);
    surface = 0;
    perimetre = 0;
}

triangle::triangle(triangle &Triangle)
{
    a = Triangle.a;
    b = Triangle.b;
    c = Triangle.c;
    surface = 0;
    perimetre = 0;
}

triangle triangle::operator=(triangle &Triangle)
{
    triangle triangleCrr(Triangle);
    return triangleCrr;
}

void triangle::affiche()
{
    std::cout << "les coordonne de a :" << std::endl;
    std::cout << "----------------------" << std::endl;
    a.affiche();
    forme::affiche();
    std::cout << "surface = " << surface << " perimetre = " << perimetre << std::endl;

    std::cout << "----------------------" << std::endl;

    std::cout << "les coordonne de b :" << std::endl;
    std::cout << "----------------------" << std::endl;
    b.affiche();
    forme::affiche();

    std::cout << "surface = " << surface << " perimetre = " << perimetre << std::endl;

    std::cout << "----------------------" << std::endl;

    std::cout << "les coordonne de c :" << std::endl;
    std::cout << "----------------------" << std::endl;
    c.affiche();
    forme::affiche();

    std::cout << "surface = " << surface << " perimetre = " << perimetre << std::endl;

    std::cout << "----------------------" << std::endl;
}

void triangle::deplace(int x, int y)
{
    a.deplace(x, y);
    b.deplace(x, y);
    c.deplace(x, y);
}

int main(int argc, char const *argv[])
{
    triangle T(10, 20, 30, 40, 50, 50, 11);
    T.affiche();
    getchar();
    T.deplace(5, 4);
    T.affiche();
    return 0;
}
