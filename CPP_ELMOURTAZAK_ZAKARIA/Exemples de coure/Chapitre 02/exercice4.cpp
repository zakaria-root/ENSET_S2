#include <iostream>
#include <conio.h>
using namespace std;
class compteur
{
	inline static int ctr{0};

public:
	compteur();
	compteur(const compteur &);
	~compteur();
};
compteur ::compteur()
{
	cout << "Un objet vient de se cree : "
		 << "\n";
	cout << "Il reste maintenant : " << ++ctr << " Objets \n";
	getch();
}
compteur ::~compteur()
{
	cout << "Un objet vient de se detruire : "
		 << "\n";
	cout << "Il reste maintenant : " << --ctr << " Objets \n";
	getch();
}

compteur::compteur(const compteur &ct)
{
	cout << "Un objet vient de se cree : "
		 << "\n";
	cout << "Il reste maintenant : " << ++ctr << " Objets \n";
	getch();
}

int main()
{
	void Essai();
	compteur a;
	Essai();
	compteur b;
}
void Essai()
{
	compteur u, v;
}
