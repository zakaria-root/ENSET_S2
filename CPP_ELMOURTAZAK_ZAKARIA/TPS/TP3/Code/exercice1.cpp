#include <iostream>

class Compteur
{
private:
    static int ctr;

public:
    Compteur();
    ~Compteur();
};
int Compteur::ctr = 0;
Compteur::Compteur()
{
    std::cout << "Un objet vient de se détruire : "
            << "\n";
    std::cout << "Il reste maintenant : " << ++ctr << " Objets";
    getchar();
}
Compteur::~Compteur()
{
    std::cout << "Un objet vient de se détruire : "
            << "\n";
    std::cout << "Il reste maintenant : " << --ctr << " Objets";
    getchar();
}
void essai()
{
    Compteur u, v;
}
int main(int argc, char const *argv[])
{
    Compteur a;
    essai();
    Compteur b;
    return 0;
}
