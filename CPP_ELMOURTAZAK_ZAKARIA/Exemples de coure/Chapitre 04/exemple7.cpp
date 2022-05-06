#include <iostream>
#include <conio.h>

class list
{
private:
    int taille;
    float *adr;

public:
    list(int);
    ~list();
};

list::list(int taille)
{
    this->taille = taille;
    adr = new float(taille);
    std::cout << "constriction de l'objet"
              << "a l'adresse " << this << std::endl;
    std::cout << "adresse de list" << adr << std::endl;
}

list::~list()
{
    std::cout << "destruction de l'objet"
              << " a l'adresse " << this << std::endl;
    std::cout << "destruction du list " << adr << std::endl;
    delete adr;
}

int main(int argc, char const *argv[])
{
    std::cout << "debut de la fonction main" << std::endl;
    list a(2);
    list b = a;
    std::cout << "la fin de la fonction main" << std::endl;
    getchar();
    return 0;
}
