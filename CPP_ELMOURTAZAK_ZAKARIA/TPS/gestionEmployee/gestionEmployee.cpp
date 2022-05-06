#include <iostream>
#include <string.h>
#include <time.h>
#include <typeinfo>
class Employee
{
private:
    int matricule;
    char nom[20];
    float salaire;
    int age;

public:
    Employee() = default;
    Employee(const char *);
    virtual void toString();
    virtual float getSalaire();
    void setSalaire(float);
    virtual void afficherS();
    int getAge();
    void setAge(int);
    void afficherA();
};

class Adherent : public Employee
{
private:
    char date[20];
    float montantParticipation;

public:
    Adherent() = default;
    Adherent(const char *, const char *);
    virtual void toString() override;
    virtual float getSalaire() override;
    virtual void afficherS() override;
    float getMontant();
    void setMontant(float);
};

//* -------------- DEFINITION DES CLASS -----------------

Employee::Employee(const char *nom)
{
    srand(time(NULL));
    strcpy(this->nom, nom);
    matricule = rand() % 1000000;
}

void Employee::toString()
{
    std::cout << " matricule  = " << matricule << std::endl;
    std::cout << " nom  = " << nom << std::endl;
    std::cout << " salaire  = " << salaire << std::endl;
    std::cout << " age  = " << age << std::endl;
}

float Employee::getSalaire()
{
    return salaire;
}

void Employee::setSalaire(float salaire)
{
    this->salaire = salaire;
}

void Employee::afficherS()
{
    std::cout << "salaire  = " << salaire << std::endl;
}

int Employee::getAge()
{
    return age;
}

void Employee::setAge(int age)
{
    this->age = age;
}

void Employee::afficherA()
{
    std::cout << "age  = " << getAge() << std::endl;
}

//* ------------------ FIN EMPLOYEE ---------------------

Adherent::Adherent(const char *nom, const char *date) : Employee(nom)
{
    strcpy(this->date, date);
}

void Adherent::toString()
{
    Employee::toString();
    std::cout << " montant de participation  = " << montantParticipation << std::endl;
    std::cout << " la date de l'adherent  = " << date << std::endl;
    std::cout << " salaire final = " << getSalaire() << std::endl;
}

float Adherent::getMontant()
{
    return montantParticipation;
}

void Adherent::setMontant(float montantParticipation)
{
    this->montantParticipation = montantParticipation;
};

float Adherent::getSalaire()
{
    return Employee::getSalaire() - montantParticipation;
}

void Adherent::afficherS()
{
    std::cout << "salaire  = " << getSalaire() << std::endl;
}

//*-------------------- FIN ADHERENT ------------------

void testEmployee(Employee &adherent)
{
    float salaire;
    int age;

    std::cout << "entre le salaire de l'employee :";
    std::cin >> salaire;
    adherent.setSalaire(salaire);
    std::cout << "entre le age de l'employee :";
    std::cin >> age;
    adherent.setAge(age);
    (strcmp(typeid(adherent).name(), "8Adherent") == 0) ? std::cout << "\nles informatin de l'adherent"<<std::endl
                                                        : std::cout << "\nles informatin de l'employee"<<std::endl;
    adherent.toString();
}

//*-------------------- FIN TEST ---------------------------


main(int argc, char const *argv[])
{
    char nom[20];
    char date[20];
    float montantParticipation;
    system("cls");
    std::cout << "---------- ADHERENT -------" << std::endl;
    std::cout << "entre le nom de l'adherent :";
    gets(nom);
    std::cout << "entre la date de l'adherent :";
    gets(date);
    Adherent adherent(nom, date);
    std::cout << "entre le montant de participation :";
    std::cin >> montantParticipation;
    adherent.setMontant(montantParticipation);
    testEmployee(adherent);
    std::cout << "________________________________" << std::endl;
getchar();
    std::cout << "\n---------- EMPLOYEE -------" << std::endl;

    std::cout << "entre le nom de l'employee :";
    gets(nom);
    Employee employee(nom);
    testEmployee(employee);
    std::cout << "________________________________" << std::endl;
}
