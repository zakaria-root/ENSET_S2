#include <iostream>
#include <math.h>

class segment
{
private:
    double x, y, z, t;
public:
    segment() = default;
    void definir(double x, double y, double z, double t) {
        this->x = x;
        this->y = y;
        this->z = z;
        this->t = t;
    }
    double langueur(){
        return sqrt(pow(x-z, 2) + pow(y-t, 2));
    }
    void afficher(){
        std::cout << "les cordonner de segment sont :" << std::endl;
        std::cout << "x = "<< x<< ", y = "<< y << ", z = "<< z<< ", t = "<< t<< std::endl;
    }

};



int main(int argc, char const *argv[])
{
    segment s;
    s.definir(1,2,3,4);
    std::cout << "la lanngeur de segment est :" << s.langueur() << std::endl;
    s.afficher();

    return 0;
}
