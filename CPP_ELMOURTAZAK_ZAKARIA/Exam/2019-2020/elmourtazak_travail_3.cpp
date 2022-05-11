#include <iostream>
#include <math.h>

class segment
{
private:
    double x, y, z, t;

public:
    segment()
    {
        this->x = 0;
        this->y = 0;
        this->z = 10;
        this->t = 5;
    };
    segment(int x, int y)
    {
        this->x = x;
        this->y = x;
        this->z = y;
        this->t = y;
    };
    segment(double x, double y, double z, double t)
    {
        this->x = x;
        this->y = x;
        this->z = y;
        this->t = y;
    };
    void definir(double x, double y, double z, double t)
    {
        this->x = x;
        this->y = y;
        this->z = z;
        this->t = t;
    }
    ~segment()
    {
        std::cout << "fin de lobejt segment evec les cordonnees :   ";
        afficher();
    }
    double langueur()
    {
        return sqrt(pow(x - z, 2) + pow(y - t, 2));
    }
    void afficher()
    {
        std::cout << "x = " << x << ", y = " << y << ", z = " << z << ", t = " << t << std::endl;
    }
};

int main(int argc, char const *argv[])
{
    segment s1(1, 2, 3, 4);
    std::cout << "la lanngeur de segment est :" << s1.langueur() << std::endl;
    s1.afficher();
    segment s2;
    std::cout << "la lanngeur de segment est :" << s2.langueur() << std::endl;
    s2.afficher();
    segment s3(1, 2);
    std::cout << "la lanngeur de segment est :" << s3.langueur() << std::endl;
    s3.afficher();

    return 0;
}
