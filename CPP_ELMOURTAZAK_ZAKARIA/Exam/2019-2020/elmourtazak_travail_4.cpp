#include <iostream>
#include <math.h>

class segment
{
private:
    double x, y, z, t;
    inline static int count{0};

public:
    segment()
    {
        std::cout << "la creation de nouveau segment " << std::endl;
        std::cout << "il rest " << ++count << " segment" << std::endl;
        this->x = 0;
        this->y = 0;
        this->z = 10;
        this->t = 5;
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
        std::cout << "il rest " << --count << " segment ." << std::endl;
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

void test()
{
    segment s1;
    segment s2;
}

main()
{
    segment s0;
    test();
    segment s3;
    
}
