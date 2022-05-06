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

    p2.afficher("point 2");
    getchar();

    p3.afficher("point 3");
    getchar();
}
