#include <iostream>
#include <conio.h>
#include <Windows.h>
#include <string.h>

void gotoxy(short a, short b);
// les classes
class point
{
    int x, y;
    char couleur[10] = "color ";

public:
    point(int, int, const char *);
    ~point();
    void deplacer(int, int);
    void afficher();
    void effacer();
};

point::point(int abs, int ord, const char *c)
{
    x = abs;
    y = ord;

    strcat(couleur, c);
}
point::~point()
{
    std::cout << "\nla dernier point a des coordonnées (x = " << x << " , y = " << y << " )" << std::endl;
}

void point::deplacer(int dx, int dy)
{
    effacer();
    x = x + dx;
    y = y + dy;
    afficher();
}

void point::afficher()
{
    system("cls");
    system(couleur);
    gotoxy(x, y);
    std::cout << "*";
}

void point::effacer()
{

    gotoxy(x, y);
    std::cout << " " << std::endl;
}

void gotoxy(short a, short b)
{
    COORD pos = {a, b};
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}

void Scene()
{
    point u(30, 15, "2");
    u.afficher();
    getch();
    u.deplacer(10, 5);
    getch();
}

int main(int argc, char const *argv[])
{
    Scene();
    return 0;
}
