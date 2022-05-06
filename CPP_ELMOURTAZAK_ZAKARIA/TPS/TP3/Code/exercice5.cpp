#include <iostream>
#include <Windows.h>

class Point
{
private:
    int x, y;

public:
    Point();
    Point(int);
    Point(int, int);
    void afficher();
    void afficher(const char *);
    int coincidence(Point *);
};
void gotoxy(short a, short b);

Point::Point()
{
    x = 0;
    y = 0;
}
Point::Point(int x)
{
    this->x = x;
    y = 0;
}
Point::Point(int x, int y)
{
    this->x = x;
    this->y = y;
}

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
    std::cout << "*" << std::endl;
}

int Point::coincidence(Point *p)
{
    return this == p;
}

void gotoxy(short a, short b)
{
    COORD pos = {a, b};
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}

main(int argc, char const *argv[])
{
    Point p1, p2(1, 2);
    (p1.coincidence(&p2) == 1) ? (std::cout << "les deux points p1 et p2 coïncident \n") :
    (std::cout << "les deux points p1 et p2 ne coïncident pas\n");
    getchar();
    (p1.coincidence(&p1) == 1) ? (std::cout << "les deux points p1 et p1 coïncident\n") :
    (std::cout << "les deux points p1 et p2 ne coïncident pas\n");
    getchar();
}
