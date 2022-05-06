#include <iostream>
#include <conio.h>

class point
{
private:
    int x, y;

public:
    point(int abs, int ord);
    ~point();
};

point::point(int abs, int ord) : x(abs), y(ord)
{
    std::cout << "Constriction du point " << x << " " << y << std::endl;
}

point::~point()
{
    std::cout << "Destriction du point " << x << " " << y << std::endl;
}



int main(int argc, char const *argv[])
{
    void fct(point*);
    point *adr;
    std::cout << "debut du main" << std::endl;
    adr=new point(3,7);
    fct(adr);
    delete adr;
    
    std::cout << "fin du main" << std::endl;
    getchar();
    return 0;
}

void fct(point *adp){
    std::cout << "debut du fonction" << std::endl;
    delete adp;
    std::cout << "la fin du fonction" << std::endl;
}