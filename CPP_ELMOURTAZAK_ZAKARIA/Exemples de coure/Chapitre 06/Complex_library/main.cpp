#include <iostream>
#include "complex.h"
#include "implementationComplex.h"

int main(int argc, char const *argv[])
{
     const double VAL = 3;
     complex cm1(0, 0);
     complex cm2(0, 0);
     cout << "Saisire le premier complex :" << endl;
     cin >> cm1;
     cout << "la partie real du  (" << cm1 << " )   = " << cm1.real(cm1) << endl;
     cout << "la partie imaginaire du  (" << cm1 << " )   = " << cm1.image(cm1) << endl;
     cout << "le conjuge du  (" << cm1 << "  )  = " << cm1.conj(cm1) << endl;
     cout << "la norm e du (" << cm1 << "  )  = " << cm1.norm(cm1) << endl;
     cout << "l'argument du  (" << cm1 << "  )  = " << cm1.arg(cm1) << endl;

     cout << "Saisire le desieme complex :" << endl;
     cin >> cm2;
     cout << "------------------------------------------" << endl;

     cout << "( " << cm1 << ") + (" << cm2 << " )"
          << " = " << cm1 + cm2 << endl;
     cout << "( " << VAL << ") + (" << cm2 << " )"
          << " = " << VAL + cm2 << endl;
     cout << "( " << cm2 << ") + (" << VAL << " )"
          << " = " << cm1 + VAL << endl;
     cout << "------------------------------------------" << endl;
     cout << "( " << cm1 << ") -  (" << cm2 << " )"
          << " = " << cm1 - cm2 << endl;
     cout << "( " << VAL << ")  - (" << cm2 << " )"
          << " = " << VAL - cm2 << endl;
     cout << "( " << cm2 << ") -  (" << VAL << " )"
          << " = " << cm1 - VAL << endl;
     cout << "------------------------------------------" << endl;
     cout << "( " << cm1 << ") * (" << cm2 << " )"
          << " = " << cm1 * cm2 << endl;
     cout << "( " << VAL << ") * (" << cm2 << " )"
          << " = " << VAL * cm2 << endl;
     cout << "( " << cm2 << ") * (" << VAL << " )"
          << " = " << cm1 * VAL << endl;
     cout << "------------------------------------------" << endl;
     cout << "( " << cm1 << ") / (" << cm2 << " )"
          << " = " << cm1 / cm2 << endl;
     cout << "( " << VAL << ") / (" << cm2 << " )"
          << " = " << VAL / cm2 << endl;
     cout << "( " << cm2 << ") / (" << VAL << " )"
          << " = " << cm1 / VAL << endl;

     cout << "------------------------------------------" << endl;
     if (cm1 == cm2)
          cout << "( " << cm1 << ") et (" << cm2 << " )"
               << " sont egaux" << endl;
     if (cm1 != cm2)
          cout << "( " << cm1 << ") et (" << cm2 << " )"
               << " ne sont pas egaux" << endl;

     return 0;
}
