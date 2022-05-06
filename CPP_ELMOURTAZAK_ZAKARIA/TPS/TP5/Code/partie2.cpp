#include "partie1.h"
class cercle : public forme
{
protected:
    short rayon;
    coordonne centre;

public:
    cercle() = default;
    cercle(int, int, short, short);
    cercle(cercle &);
    cercle operator=(cercle &);
    void affiche();
    void deplace(int, int);
    int surface;
    int perimetre;
};

cercle::cercle(int x, int y, short couleur, short rayon) : forme(couleur)
{
    coordonne Centre(x, y);
    centre = Centre;
    this->rayon = rayon;
    surface = 0;
    perimetre = 0;
}

cercle::cercle(cercle& Cercle) : forme(Cercle.couleur)
{
    centre = Cercle.centre;
    rayon = Cercle.rayon;
    surface = 0;
    perimetre = 0;
}

cercle cercle::operator=(cercle &Cercle)
{
    cercle cercleCrr(Cercle);
    return Cercle;
}

void cercle::affiche()
{
    std::cout << "rayon = " << rayon << std::endl;
    centre.affiche();
    forme::affiche();
    std::cout << "surface = " << surface << " perimetre = " << perimetre << std::endl;
}

void cercle::deplace(int x, int y)
{
    centre.deplace(x,y);
}

int main(int argc, char const *argv[])
{
    cercle cl(10, 20, 5, 12);
    cl.surface = 2;
    cl.perimetre = 10;
    cl.affiche();
    std::cout << "--------------------" << std::endl;
    cl.deplace(2, 4);
    cl.affiche();
    std::cout << "--------------------" << std::endl;
    getchar();

    return 0;
}
