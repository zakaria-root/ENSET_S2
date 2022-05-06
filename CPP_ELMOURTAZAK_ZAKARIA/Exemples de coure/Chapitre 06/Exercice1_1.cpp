#include <iostream>
#include <conio.h>
using namespace std;
class vecteur
{
    float x, y;

public:
    vecteur(float, float);
    void afficher();
    vecteur operator*(vecteur);
    vecteur operator*(float);
    friend vecteur operator*(float val, vecteur vec);
};
vecteur::vecteur(float abs = 0, float ord = 0)
{
    x = abs;
    y = ord;
}
void vecteur::afficher()
{
    cout << "x =" << x << " y=" << y << "\n";
}

vecteur vecteur::operator*(vecteur vec)
{
    vecteur res(vec.x * x, vec.y * y);
    return res;
}

vecteur vecteur::operator*(float val)
{
    vecteur res(x * val, y * val);
    return res;
}

vecteur operator*(float val, vecteur vec)
{
    vec.x *= val;
    vec.y *= val;
    return vec;
}

int main()
{
    vecteur a(2, 6), b(4, 8), c, d, e, f;
    c = a * b;
    c.afficher();
    c = a * 2.3;
    c.afficher();
    c = 2.3 * a;
    c.afficher();
    getch();
    return 1;
}
