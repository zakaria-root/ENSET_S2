#include <iostream>
#include <conio.h>

class point
{
private:
    int x, y;

public:
    point(int , int );
    ~point();
};

point::point(int abs = 0, int ord = 0): x(abs), y(ord)
{
    
    std::cout << "constriction de point" << std::endl;
}
point::~point(){
    std::cout << "destruction du point" << std::endl;

}

class pointcol
{
private:
    point p;
    int couleur;

public:
    pointcol(int, int, int);
    ~pointcol();
};

pointcol::pointcol(int abs, int ord, int col) : p(abs, ord)
{
    std::cout << "constriction du pointcol" << std::endl;
    couleur = col;
}
pointcol::~pointcol(){
    std::cout << "destruction du pointcol" << std::endl;

}

int main(int argc, char const *argv[])
{
    std::cout << "debut de main" << std::endl;
    pointcol pc(1, 2, 3);
    std::cout << "la fin de main" << std::endl;

    return 0;
}
