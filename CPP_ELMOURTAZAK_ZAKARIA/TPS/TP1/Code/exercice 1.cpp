#include <iostream>
using namespace std;
int main(void)
{
    int n;
    float x;
    cout << "donnez un entier et un flottant\n";
    cin >> n >> x;
    cout << "le produit de " << n
        << " par " << x
         << "\n est " << n * x;
    return 0;
}