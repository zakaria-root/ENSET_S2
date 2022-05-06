
#include "partie4.h"

int main(int argc, char const *argv[])
{
    rectangle R(20, 30, 40, 40, 50);
    R.affiche();
    std::cout << "--> apres déplacement" << std::endl;
    getchar();
    R.deplace(5, 4);
    R.affiche();
    return 0;
}
