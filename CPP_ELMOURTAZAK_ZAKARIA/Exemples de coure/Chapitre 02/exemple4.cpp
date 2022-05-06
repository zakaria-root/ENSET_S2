#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <time.h>
using namespace std;

class hasard
{
	int nbval;
	int *val;

public:
	hasard(int, int);
	~hasard();
	void affiche();
};
hasard::hasard(int nb, int max)
{
	int i;
	srand(time(NULL));
	val = new int[nbval = nb];
	for (i = 0; i < nb; i++)
		val[i] = rand()% max;
}

hasard::~hasard()
{
	delete val;
}

void hasard::affiche()
{
	int i;
	for (i = 0; i < nbval; i++)
	{
		cout << val[i] << " ";
	}
	cout << "\n";
}

int main()
{
	hasard suite1(15, 5);
	suite1.affiche();
	getch();
	hasard suite2(6, 12);
	suite2.affiche();
	getch();
}
