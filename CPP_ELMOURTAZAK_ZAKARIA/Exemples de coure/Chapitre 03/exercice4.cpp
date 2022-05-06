#include <iostream>
#include <conio.h>
using namespace std;

class vecteur
{
    float x, y;

public:
    vecteur(float, float);
    // vecteur homotethie(float);
    // vecteur *homotethie(float); //* par adresse 
    vecteur &homotethie(float); //* par reference
    void affiche();
    float det1(vecteur *);
    float det2(vecteur &);
};

vecteur::vecteur(float abs = 0, float ord = 0.)
{
    x = abs;
    y = ord;
}

// vecteur vecteur::homotethie(float val)
// {
//     vecteur res;
//     res.x = x * val;
//     res.y = y * val;
//     return res;
// }

//* ---------- retourne par valeur -------------------

// vecteur *vecteur::homotethie(float val)
// {
//     vecteur *res = new vecteur;
//     res->x = x * val;
//     res->y = y * val;
//     return res;
// }

//* ---------- retourne par adresse ------------------

vecteur &vecteur::homotethie(float val)
{
    static vecteur res;
    res.x = x * val;
    res.y = y * val;
    return res;
}

//* ---------- retourne par reference -----------------

void vecteur::affiche()
{
    cout << "x = " << x << " y= " << y << "\n";
}

float vecteur::det1(vecteur *v)
{
    return (v->x * y - v->y * x);
}

float vecteur::det2(vecteur &v)
{
    return (v.x * y - v.y * x);
}

int main(int argc, char const *argv[])
{
    std::cout << "---------- avant l'homotethie ------" << std::endl;
    vecteur v(1, 2);
    v.affiche();
    std::cout << "------- apres l’homothétie ------" << std::endl;
    // v = v.homotethie(2);
    // v = *v.homotethie(2); //* par adresse 
    v = v.homotethie(2); //* par refernce
    v.affiche();
    std::cout << "------- determinate ------" << std::endl;
    std::cout << "vecteur est ";
    vecteur v2(2, 3);
    v2.affiche();
    std::cout << "determinant de vecteur par adresse " << v.det1(&v2) << std::endl;
    std::cout << "determinant de vecteur par reference " << v.det2(v2) << std::endl;

    return 0;
}
