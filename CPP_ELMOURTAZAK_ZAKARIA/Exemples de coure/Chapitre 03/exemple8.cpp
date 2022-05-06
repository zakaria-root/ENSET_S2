#include <iostream>
#include <conio.h>
using namespace std;

class compte_objet
{

	inline static int ctr{0};

public:
	compte_objet();
	~compte_objet();
	static void compte();
};

compte_objet::compte_objet() 
{

	cout << " ++construction : il ya maintenant " << ++ctr << " objets\n";
}

compte_objet::~compte_objet()
{
	cout << " --destruction : il y a maintenant " << --ctr << " objets\n";
}

void compte_objet::compte()
{
	cout << " Appel compte : il y a " << ctr << " objets\n";
}

void fonction()
{
	compte_objet u, v;
}

main()
{
	void fonction();
	compte_objet ::compte();
	compte_objet a;
	compte_objet ::compte();
	fonction();
	compte_objet ::compte();
	compte_objet b;
	compte_objet ::compte();
}