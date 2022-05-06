#include "partie1.h"

class rectangle : public forme
{
protected:
    coordonne a, b;

public:
    rectangle(int, int, int, int, short);
    rectangle(rectangle &);
    rectangle operator=(rectangle &);
    void affiche();
    void deplace(int, int);
    int surface;
    int perimetre;
};

rectangle::rectangle(int x1, int y1, int x2,int y2, short couleur) : forme(couleur)
{
    a = coordonne(x1, y2);
    b = coordonne(x2, y1);
    surface = 0;
    perimetre = 0;
}

rectangle::rectangle(rectangle &Rectangle)
{
    a = Rectangle.a;
    b = Rectangle.b;
    surface = 0;
    perimetre = 0;
}

void rectangle::affiche()
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
}

void rectangle::deplace(int x, int y)
{
    a.deplace(x, y);
    b.deplace(x, y);
}

rectangle rectangle::operator=(rectangle &Rectangle)
{
    rectangle rectangleCrr(Rectangle);
    return rectangleCrr;
}
