#include <iostream>

class Vecteur
{
private:
    float x, y;

public:
    Vecteur(float, float);
    void homotethie(float);
    void afficher();
    float det(Vecteur&);
    float getX()
    {
        return x;
    };
    float getY()
    {
        return y;
    };
};

Vecteur::Vecteur(float abs = 0, float ord = 0)
{
    x = abs;
    y = ord;
}

void Vecteur::homotethie(float val)
{
    x *= val;
    y *= val;
}
void Vecteur::afficher()
{
    std::cout << "x = " << x << ", y = " << y << std::endl;
}

float Vecteur::det(Vecteur &v1)
{
    return ((x * v1.y) - (y * v1.x));
}

int main(int argc, char const *argv[])
{
    Vecteur v1(1, 2);
    Vecteur v2(3, 4);
    std::cout << "le determinant des deux vecteur v1: x = " << v1.getX() << ", y = " << v1.getY() 
    << " et v2: x = " << v2.getX() << ", y = " << v2.getY() << " est " << v1.det(v2) << std::endl;
    return 0;
}
