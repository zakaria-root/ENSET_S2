#include <iostream>
#include <conio.h>
using namespace std;
class liste
{
    int taille;
    float *adr;

public:
    liste(int);
    liste(liste &);
    void saisie();
    void affiche();
    void operator=(liste &);
    float &operator[](int);
    ~liste();
};
liste::liste(int t)
{
    taille = t;
    adr = new float[taille];
    cout << "Construction \n";
    cout << " Adresse de l'objet: " << this;
    cout << " Adresse de liste: " << adr << "\n";
}

liste::liste(liste &v)
{
    taille = v.taille;
    adr = new float[taille];
    for (int i = 0; i < taille; i++)
        adr[i] = v.adr[i];
    cout << "\nConstructeur par recopie";
    cout << " Adresse de l'objet:" << this;
    cout << " Adresse de liste:" << adr << "\n";
}
void liste::saisie()
{
    int i;
    for (i = 0; i < taille; i++)
    {
        cout << "Entrer un nombre:";
        cin >> operator[](i); //* operateur dons la saisie []
    }
}
void liste::affiche()
{
    int i;
    cout << "Adresse tableau: " << adr << " ";
    for (i = 0; i < taille; i++)
        cout << operator[](i) << " "; //* operateur dons la affichage []
    cout << "\n\n";
}

void liste::operator=(liste &lis)
{
    int i;
    taille = lis.taille;
    delete adr;
    adr = new float[taille];
    for (i = 0; i < taille; i++)
        adr[i] = lis.adr[i];
}

float &liste::operator[](int index)
{
    return adr[index];
}


liste::~liste()
{
    delete adr;
}
int main()
{
    const int INDEX = 2;
    cout << "Debutde main()\n";
    liste a(3);
    a.saisie();
    a.affiche();
    cout << "tab[" << INDEX + 1 << "] = " << a[INDEX] << std::endl;
    cout << "Fin de main() \n";
}
