#include <iostream>

using namespace std;

class vehicule
{
public:
    vehicule() = default;
    vehicule(int);
    virtual void afficher() const;
    virtual //* PARTIE 2
        ~vehicule()
    {
        std::cout << "-- vehicule" << std::endl;
    }

protected:
    int m_prix;
};

class voiture : public vehicule
{
public:
    voiture(int, int);
    virtual void afficher() const;
    virtual //* PARTIE 2
        ~voiture()
    {
        std::cout << "-- voiture" << std::endl;
    }

private:
    int m_portes;
};

class moto : public vehicule
{
public:
    moto(int, int);
    virtual void afficher() const;
    virtual //* PARTIE 2
        ~moto()
    {
        std::cout << "-- moto" << std::endl;
    }

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

int main()
{

    cout << endl
         << "------------------ TEST ----------------" << endl;
    vehicule *vh = new voiture(2000,5);
    vh->afficher();
    delete vh;
    // TODO : FIN TEST
    return 0;
}
