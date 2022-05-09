#ifndef __COMPLEX
#define __COMPLEX

using namespace std;
class complex
{
private:
  double re, im;

public:
  complex() = default;
  complex(double, double);
  double real(complex);
  double image(complex);
  complex conj(complex);
  double norm(complex);
  double arg(complex);
  complex polar(double, double);
  complex operator+(complex);
  friend complex operator+(double, complex);
  friend complex operator+(complex, double);
  complex operator-(complex);
  friend complex operator-(double, complex);
  friend complex operator-(complex, double);
  complex operator*(complex);
  friend complex operator*(complex, double);
  friend complex operator*(double, complex);
  complex operator/(complex);
  friend complex operator/(complex, double);
  friend complex operator/(double, complex);
  int operator==(complex);
  int operator!=(complex);
  complex operator-();
  friend ostream &operator<<(ostream &, complex);
  friend istream &operator>>(istream &, complex &);
  ~complex();
};

#endif
