#include <iostream>
#include <Windows.h>

class Point
{
private:
    int x, y;

public:
    Point():x(0),y(0){};
    Point(int x):x(x),y(0){};
    Point(int x, int y):x(x),y(y){};
    void afficher();
    void afficher(const char *);
};
void gotoxy(short a, short b);

void Point::afficher()
{

    gotoxy(x, y);
    std::cout << "*";
}

void Point::afficher(const char *nom)
{

    gotoxy(x, y);
    afficher();
    std::cout << nom;
    afficher();
}

void gotoxy(short a, short b)
{
    COORD pos = {a, b};
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}

main(int argc, char const *argv[])
{
    Point p1, p2(1), p3(1, 2);
    system("cls");
    p1.afficher();
    getchar();

    p2.afficher("p2");
    getchar();

    p3.afficher("p3");
    getchar();
}
