#include <iostream>

using namespace std;

class vehicule
{
public:
    vehicule() = default;
    vehicule(int);
    virtual void afficher() const;
    virtual ~vehicule()
    {
        std::cout << "-- vehicule" << std::endl;
    }
    virtual int nbRoue() const = 0;

protected:
    int m_prix;
};

class voiture : public vehicule
{
public:
    voiture(int, int);
    virtual void afficher() const;
    virtual ~voiture()
    {
        std::cout << "-- voiture" << std::endl;
    }
    virtual int nbRoue() const;

private:
    int m_portes;
};

class moto : public vehicule
{
public:
    moto(int, int);
    virtual void afficher() const;
    virtual ~moto()
    {
        std::cout << "-- moto" << std::endl;
    }
    virtual int nbRoue() const;

private:
    double m_vitesse;
};

vehicule::vehicule(int m_prix)
{
    this->m_prix = m_prix;
}

voiture::voiture(int m_prix, int m_portes)
{
    this->m_portes = m_portes;
    this->m_prix = m_prix;
}
moto::moto(int m_prix, int m_vitesse)
{
    this->m_vitesse = m_vitesse;
    this->m_prix = m_prix;
}
void vehicule::afficher() const
{
    cout << "ceci est un vehicule " << endl;
}

void voiture::afficher() const
{
    cout << "ceci est une voiture " << endl;
}

void moto::afficher() const
{
    cout << "ceci est une moto " << endl;
}

int voiture::nbRoue() const
{
    return 4;
}

int moto::nbRoue() const
{
    return 2;
}

int main()
{

    cout << endl
         << "------------------ TEST ----------------" << endl;
    // vehicule *vh1 = new vh1(2000); //! ERREUR DE COMPILAION

    vehicule *vh = new voiture(2000, 5);
    std::cout << "nombre de roue dune voiture  = " << vh->nbRoue() << std::endl;

    // TODO : FIN TEST
    return 0;
}
