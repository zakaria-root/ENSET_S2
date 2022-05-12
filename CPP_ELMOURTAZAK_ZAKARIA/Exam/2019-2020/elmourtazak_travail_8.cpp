#include <iostream>
#include <string.h>
class produit
{
private:
    int reference;
    char designation[20];
    float prixUnitaire;

public:
    produit() = default;
    produit(int, const char *, float);
    virtual float getPrix();
    void toString();
    void setPrix(float);
    virtual void afficherP();
};

produit::produit(int reference, const char *designation, float prixUnitaire)
{
    this->reference = reference;
    strcpy(this->designation, designation);
    this->prixUnitaire = prixUnitaire;
}

float produit::getPrix()
{
    return prixUnitaire;
}
void produit::toString()
{
    std::cout << " reference  = " << reference << ", designation  = " << designation << ", prixUnitaire = " << prixUnitaire << std::endl;
}

void produit::setPrix(float prixunitaire)
{
    this->prixUnitaire = prixunitaire;
}

void produit::afficherP()
{
    std::cout << "le prix  = " << getPrix() << std::endl;
}

class ProduitEnSolde : public produit
{
private:
    int tauxRemise;

public:
    ProduitEnSolde(int, const char *, float, int);
    int getRemise();
    void setRemise(int);
    virtual float getPrix() override;
    virtual void afficherP() override;
};

ProduitEnSolde::ProduitEnSolde(int reference, const char *designation, float prixUnitaire, int tauxRemise) : produit(reference, designation, prixUnitaire)
{
    this->tauxRemise = tauxRemise;
}

int ProduitEnSolde::getRemise()
{
    return tauxRemise;
}
void ProduitEnSolde::setRemise(int tauxRemise)
{
    this->tauxRemise = tauxRemise;
}

float ProduitEnSolde::getPrix()
{
    return produit::getPrix() - (produit::getPrix() * tauxRemise / 100);
}
void ProduitEnSolde::afficherP()
{
    std::cout << "le prix est : " << getPrix() << " avec une reduction de " << tauxRemise << "%" << std::endl;
}

int main(int argc, char const *argv[])
{
    std::cout << "le premoer produit " << std::endl;
    produit p0(12, "karamel", 30);
    p0.toString();
    p0.setPrix(20);
    std::cout << "le prix apres la modification " << p0.getPrix() << std::endl;
    getchar();
    std::cout << "le desieme produit " << std::endl;
    produit p1(12, "chokola", 20);
    p1.toString();
    p1.afficherP();
    getchar();
    std::cout << "le troisieme produit " << std::endl;
    ProduitEnSolde p2(1, "karmel", 20, 30);
    produit &p3 = p2;
    p3.afficherP();

    getchar();

    return 0;
}
