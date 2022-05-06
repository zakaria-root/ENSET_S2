#include <iostream>
#include <conio.h>
using namespace std;
class point
{
    int x, y;

public:
    point(int, int);
    ~point();
};
point ::point(int abs, int ord)
{
    x = abs;
    y = ord;
    cout << "Construction du point " << x << "  " << y << "\n";
}
point::~point()
{
    cout << "destruction du point " << x << " " << y << "\n";
}
void test()
{
    cout << "Debut de test() \n";
    static point u(3, 7);
    cout << "Fin de test()\n";
}
int main()
{
    cout << "Debut de test()\n";
    point a(1, 4);
    test();
    point b(5, 10);
    cout << "Fin de Main() \n";
    return 0;
}
