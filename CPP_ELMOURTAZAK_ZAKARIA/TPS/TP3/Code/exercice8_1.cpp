#include <iostream>

class Vecteur
{
private:
    float x, y;

public:
    Vecteur(float, float);
    Vecteur homotethie(float);
    void afficher();
    float det(Vecteur);
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

void Vecteur::afficher()
{
    std::cout << "x = " << x << ", y = " << y << std::endl;
}

float Vecteur::det(Vecteur v1)
{
    return ((x * v1.y) - (y * v1.x));
}

Vecteur Vecteur::homotethie(float val)
{
    Vecteur res;
    res.x = x * val;
    res.y = y * val;
    return res;
}

int main(int argc, char const *argv[])
{
    Vecteur v1(1, 2);
    Vecteur v2 = v1.homotethie(2);
    v2.afficher();
    return 0;
}
