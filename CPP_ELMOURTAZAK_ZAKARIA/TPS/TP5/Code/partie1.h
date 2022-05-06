#include <iostream>
class coordonne
{
private:
    int x, y;
public:
    coordonne(int,int);
    void deplace(int, int);
    void affiche();
};
coordonne::coordonne(int a = 0, int b = 0)
{
    x = a;
    y = b;
}
void coordonne::deplace(int a, int b)
{
    x += a;
    y += b;
    
}
void coordonne::affiche()
{
    std::cout << "x= " << x << " y = " << y << std::endl;
}
class forme
{
protected:
    short couleur;
public:
    forme(short);
    forme(forme &);
    void affiche();
    forme operator=(forme &);
};
forme::forme(short couleur = 1)
{
    this->couleur = couleur;
}
forme::forme(forme &other)
{
    this->couleur = other.couleur;
}
void forme::affiche()
{
    std::cout << "couleur = " << couleur << std::endl;
}

forme forme::operator=(forme &other)
{
    forme Forme(other.couleur);
    return Forme;
}
