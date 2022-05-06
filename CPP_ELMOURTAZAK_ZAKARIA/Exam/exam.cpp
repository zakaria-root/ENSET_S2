#include <iostream>
#include <windows.h>
#include <stdio.h>

void gotoxy(short int x, short int y)
{
    COORD c;
    c.X = x;
    c.Y = y;

    SetConsoleCursorPosition(
        GetStdHandle(STD_OUTPUT_HANDLE), c);
}

class rectangle
{
private:
    int x;
    int y;
    int z;
    int t;
    inline static int count{0};

public:
    rectangle();
    rectangle(int, int, int, int);
    rectangle(int, int);
    double perimetre();
    double surface();
    void affiche();
    void affiche(const char *);
    bool coinside(const rectangle &);
    ~rectangle();
};

rectangle::rectangle(int, int y, int z, int t)
{
    std::cout << "la constriction de l'objet " << std::endl;
    std::cout << "il rest " << ++count << " objet ..." << std::endl;
    this->x = x;
    this->y = y;
    this->z = z;
    this->t = t;
}
rectangle::~rectangle()
{
    std::cout << "un objet vient de se détruire " << std::endl;
    std::cout << "il rest " << --count << " objet ..." << std::endl;
    // std::cout << "x = " << x << " , y = " << y << std::endl; //? partie 1
    // std::cout << "z = " << z << " , t = " << t << std::endl;//? partie 1
}
rectangle::rectangle(int x, int y)
{
    std::cout << "la constriction de l'objet " << std::endl;
    std::cout << "il rest " << ++count << " objet ..." << std::endl;
    this->x = x;
    this->y = x;
    this->z = y;
    this->t = y;
}
rectangle::rectangle()
{
    std::cout << "la constriction de l'objet " << std::endl;
    std::cout << "il rest " << ++count << " objet ..." << std::endl;
    this->x = 0;
    this->y = 0;
    this->z = 10;
    this->t = 5;
}

double rectangle::perimetre()
{
    return ((z - x) + (y - t)) * 2;
}
double rectangle::surface()
{
    return ((z - x) * (y - t));
}
void rectangle::affiche()
{
    system("cls");
    gotoxy(x, y);
    printf("*");
    gotoxy(z, y);
    printf("*");
    gotoxy(z, t);
    printf("*");
    gotoxy(x, t);
    printf("*");
}
void rectangle::affiche(const char *chaine)
{

    affiche();
    gotoxy(0, z);
    std::cout << "\n le traingle " << chaine << std::endl;
}
bool rectangle::coinside(const rectangle &r1)
{
    return (x == r1.x && y == r1.y && z == r1.z && t == r1.t);
}
void test()
{
    rectangle r1, r2;
}
main(int argc, char const *argv[])
{
    // rectangle r1(8, 4, 5, 8);
    // r1.affiche();
    // getchar();
    // std::cout << "le perimetre est " << r1.perimetre() << std::endl;
    // std::cout << "le surface est " << r1.surface() << std::endl;

    // todo : fin test 1

    // rectangle r1;
    // // rectangle r1(4, 5) //? partie 2
    // r1.affiche();
    // getchar();
    // std::cout << "le perimetre est " << r1.perimetre() << std::endl;
    // std::cout << "le surface est " << r1.surface() << std::endl;

    // todo : fin test 2

    // rectangle r1;
    // // rectangle r1(4, 5) //? partie 2
    // r1.affiche();
    // getchar();
    // std::cout << "le perimetre est " << r1.perimetre() << std::endl;
    // std::cout << "le surface est " << r1.surface() << std::endl;

    // todo : fin test 3

    // rectangle r0;
    // test();
    // rectangle r3;

    // todo : fin test 4

    // rectangle r0;
    // r0.affiche();
    // getchar();
    // r0.affiche("zakaria");

    // todo : fin test 5

    // rectangle r0;
    // rectangle r1;
    // (r0.coinside(r1)) ? (std::cout << " les deux rectangle coinside " << std::endl) : (std::cout << " les deux rectangle ne coincide pas " << std::endl);

    // todo : fin test 6
}
