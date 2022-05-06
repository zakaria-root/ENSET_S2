#include <iostream>

using namespace std;

class vehicule
{
public:
	void afficher() const;
	virtual void afficher2() const;

protected:
	int m_prix;
};

class voiture : public vehicule
{
public:
	void afficher() const;
	void afficher2() const;

private:
	int m_portes;
};

class moto : public vehicule
{
public:
	void afficher() const;
	void afficher2() const;

private:
	double m_vitesse;
};

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
// TODO : FIN PARTIE 1

void vehicule::afficher2() const
{
	cout << "ceci est un vehicule " << endl;
}

void voiture::afficher2() const
{
	cout << "ceci est une voiture " << endl;
}

void moto::afficher2() const
{
	cout << "ceci est une moto " << endl;
}

void presenter(vehicule v) //! PROBLEME
{
	v.afficher();
}
// TODO : FIN PARTIE 2

void presenter2(vehicule const &v)
{
	v.afficher2();
}
// TODO : FIN PARTIE 3

int main()
{

	cout << endl
		 << "------------------ test 1 ----------------" << endl;

	vehicule v;
	v.afficher();

	moto m;
	m.afficher();

	// TODO : FIN TEST 1

	cout << endl
		 << "------------------ test partie 2 ------------------" << endl;

	presenter(v);
	presenter(m);

	// TODO : FIN TEST 2

	cout << endl
		 << "------------------ test partie  3 -----------------" << endl;
	presenter2(v);
	presenter2(m);

	// TODO : FIN TEST 3

	return 0;
}
