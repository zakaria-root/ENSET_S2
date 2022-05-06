#include <iostream>
#include <math.h>

class Complexe
{
private:
    double x, y;

public:
    Complexe(double, double);
    Complexe(double);
    Complexe();
    void set(double, double);
    double module();
    void afficher();
    double real();
    double img();
};

Complexe::Complexe(double x, double y)
{
    this->x = x;
    this->y = y;
}
Complexe::Complexe(double x)
{
    this->x = x;
    this->y = 0;
}
Complexe::Complexe()
{
    this->x = 0;
    this->y = 0;
}

void Complexe::set(double x, double y)
{
    this->x = x;
    this->y = y;
}

double Complexe::module()
{
    return sqrt(pow(x, 2) + pow(y, 2));
}

void Complexe::afficher()
{
    (y != 0) ? (std::cout << x << " + " << y << "i " << std::endl) : (std::cout << x << std::endl);
}

double Complexe::real()
{
    return x;
}
double Complexe::img()
{
    return y;
}

main(int argc, char const *argv[])
{
    Complexe cm1(1, 2);
    std::cout << "real  = " << cm1.real() << std::endl;
    std::cout << "imag  = " << cm1.img() << std::endl;
    std::cout << "module  = " << cm1.module() << std::endl;
    cm1.afficher();
    getchar();

    Complexe cm2(2);
    std::cout << "real  = " << cm2.real() << std::endl;
    std::cout << "imag  = " << cm2.img() << std::endl;
    std::cout << "module  = " << cm2.module() << std::endl;
    cm2.afficher();
    getchar();

    Complexe cm3;
    std::cout << "real  = " << cm3.real() << std::endl;
    std::cout << "imag  = " << cm3.img() << std::endl;
    std::cout << "module  = " << cm3.module() << std::endl;
    cm3.afficher();
    getchar();
}
