#include <iostream>
#include <string.h>
class person
{
private:
    char nom[20];
    char prenom[20];
    char date[20];

public:
    person() = default;
    virtual void afficher() const = 0;
};

class etudiant : public person
{
private:
    int niveau;
    char specialite[20];
    double note[10];

public:
    etudiant() = default;
    etudiant(int, const char *, double *);
    void saisire();
    virtual void afficher() const override;
    double moyenne() const;
};

class ensignant : public person
{
private:
    char diplome[20];
    char specialite[20];
    int nombre_heurs;
    int taux;

public:
    ensignant() = default;
    ensignant(const char *, const char *, int, int);
    void saisire();
    virtual void afficher() const override;
    double salaires() const;
};

etudiant::etudiant(int niveau, const char *specialite, double *note)
{
    this->niveau = niveau;
    strcpy(this->specialite, specialite);
    for (size_t i = 0; i < 10; i++)
    {
        this->note[i] = note[i];
    }
}

void etudiant::saisire()
{
    std::cout << "entre le  niveu d'etudiant : ";
    std::cin >> niveau;

    std::cout << "entre la speclite d’étudiant : ";
    scanf("%s", specialite);

    for (int i = 0; i < 10; i++)
    {
        std::cout << "entre la note N " << i + 1 << ": ";
        std::cin >> note[i];
    }
}

double etudiant::moyenne() const
{
    double sum = 0;
    for (int i = 0; i < 10; i++)
    {
        sum += note[i];
    }
    return sum / 10.0;
}

void etudiant::afficher() const
{
    std::cout << "le niveau d'etudant ; " << niveau << std::endl;
    std::cout << "la specialite d'etudiant  :" << specialite << std::endl;
    for (size_t i = 0; i < 10; i++)
    {
        std::cout << "la note N :" << note[i] << std::endl;
    }
    std::cout << "la moyenne de l'etudiant " << moyenne() << std::endl;
}

ensignant::ensignant(const char *diplome, const char *specialite, int nombre_heurs, int taux)
{
    strcpy(this->diplome, diplome);
    strcpy(this->specialite, specialite);
    this->nombre_heurs = nombre_heurs;
    this->taux = taux;
}

void ensignant::saisire() 
{
    std::cout << "entre le  dimplome d'ensignant : ";
    std::cin >> diplome;
    std::cout << "entre la speclite d'ensignant : ";
    std::cin >> specialite;
    std::cout << "entre le nombre d'heur d'ensignant : ";
    std::cin >> nombre_heurs;
    std::cout << "entre le taux d'ensignant : ";
    std::cin >> taux;
}
double ensignant::salaires() const
{
    double salaire = nombre_heurs * taux * 12;
    return salaire + (salaire * 0.17);
}

void ensignant::afficher() const
{
    std::cout << " le  dimplome d'ensignant : ";
    std::cout << diplome << std::endl;
    std::cout << " la speclite d'ensignant : ";
    std::cout << specialite << std::endl;
    std::cout << " le nombre d'heur d'ensignant : ";
    std::cout << nombre_heurs << std::endl;
    std::cout << " le taux d'ensignant : ";
    std::cout << taux << std::endl;
    std::cout << " le salaire d'ensignant : ";
    std::cout << salaires() ;
}

void presenter(person &pr)
{
    pr.afficher();
}

int main(int argc, char const *argv[])
{
    etudiant et;
    ensignant en;
    et.saisire();
    en.saisire();
    std::cout << "----------- ETUDIANT --------------" << std::endl;
    presenter(et);
    std::cout << "----------- ENSIGNANT --------------" << std::endl;
    presenter(en);
    return 0;
}
