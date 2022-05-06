#include "partie4.h"

class carre : public rectangle
{
private:
    short cote;

public:
    carre(int, int, short, short);
    carre(carre &);
    carre operator=(carre &);
    void affiche();
    void deplace(int, int);
    int surface;
    int perimetre;
};

carre::carre(int x1, int y1, short cote, short couleur) : rectangle(x1, y1, y1, x1, couleur)
{
    this->cote = cote;
    surface = 0;
    perimetre = 0;
}

carre::carre(carre &cr) : rectangle(cr)
{
    cote = cr.cote;
    surface = 0;
    perimetre = 0;
}

carre carre::operator=(carre &cr)
{
    carre crCrr(cr);
    return crCrr;
}

void carre::affiche()
{
    rectangle::affiche();
    std::cout << "cote  = " << cote << std::endl;
}

void carre::deplace(int x, int y)
{
    rectangle::deplace(x, y);
}

int main(int argc, const char **argv)
{
    carre cr(54, 50, 23, 1);
    cr.affiche();
    std::cout << "--> apres déplacement" << std::endl;
    getchar();
    cr.deplace(2, 3);
    cr.affiche();
    return 0;
}
