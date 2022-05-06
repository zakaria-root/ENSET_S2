#include <iostream>
class point
{
private:
    int x,y;
public:
    point(int , int);
    ~point();
};

point::point(int x =0, int y=0):x(x),y(y)
{
    std::cout << "la costruction d'objet "<< x<< " "<< y << std::endl;
}
point::~point(){
    std::cout << "destruction du point" << std::endl;

}

int main(int argc, char const *argv[])
{
    point p[5] ={1,2,3};
    return 0;
}


