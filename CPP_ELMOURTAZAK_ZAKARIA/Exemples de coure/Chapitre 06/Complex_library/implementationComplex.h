#include <iostream>
#include "complex.h"
#include <math.h>

complex::complex(double reel, double imaginaire) : re(reel), im(imaginaire){};
complex::~complex()
{
  re = im = 0;
}
double complex::real(complex cm)
{
  return cm.re;
}

double complex::image(complex cm)
{
  return cm.im;
};

complex complex::conj(complex cm)
{
  complex conj(cm.re, -1 * cm.im);
  return conj;
};

double complex::norm(complex cm)
{
  return sqrt(pow(cm.re, 2) + pow(cm.im, 2));
}

double complex::arg(complex cm)
{
  return atan(cm.im / cm.re);
}

complex complex::polar(double mag, double angle = 0.0)
{
  complex polar(mag * cos(angle), mag * sin(angle));
  return polar;
}

complex complex::operator+(complex cm)
{
  complex addCm(cm.re + this->re, cm.im + this->im);
  return addCm;
}

complex operator+(double val, complex cm)
{
  complex addCm(val + cm.re, cm.im);
  return addCm;
}

complex operator+(complex cm, double val)
{
  complex addCm(val + cm.re, cm.im);
  return addCm;
}

complex complex::operator-(complex cm)
{
  complex sousCm(this->re - cm.re, this->im - cm.im);
  return sousCm;
}

complex operator-(double val, complex cm)
{
  complex sousCm(val - cm.re, cm.im);
  return sousCm;
}

complex operator-(complex cm, double val)
{
  complex sousCm(cm.re - val, cm.im);
  return sousCm;
}

complex complex::operator*(complex cm)
{
  complex multCm((this->re * cm.re) - (this->im * cm.im), (this->re * cm.im) + (this->im * cm.re));
  return multCm;
}

complex operator*(double val, complex cm)
{
  complex multCm(val * cm.re, val * cm.im);
  return multCm;
}

complex operator*(complex cm, double val)
{
  complex multCm(val * cm.re, val * cm.im);
  return multCm;
}

complex operator/(complex cm, double val)
{
  complex divCm(cm.re / val, cm.im / val);
  return divCm;
}

complex operator/(double val, complex cm)
{
  complex divCm(0, 0);
  complex opCm(cm.re, -1 * cm.im);
  complex dividende = (val * opCm);
  double diviseur = pow(cm.re, 2) + pow(cm.im, 2);
  divCm = dividende / diviseur;
  return divCm;
}

complex complex::operator/(complex cm)
{
  complex divCm(0, 0);
  if (cm.re != 0 || cm.im != 0)
  {
    complex opCm(cm.re, -1 * cm.im);
    complex dividende = (*this * opCm);
    double diviseur = pow(cm.re, 2) + pow(cm.im, 2);
    divCm = dividende / diviseur;
  }
  return divCm;
}

int complex::operator==(complex cm)
{
  return ((cm.re == this->re) && (cm.im == this->im));
}

int complex::operator!=(complex cm)
{
  return ((cm.re != this->re) || (cm.im != this->im));
}

complex complex::operator-()
{
  return *this * -1;
}

ostream &operator<<(ostream &os, complex cm)
{

  if (cm.image(cm) != 0)
  {
    cm.image(cm) > 0 ? (os << cm.real(cm) << " + " << cm.image(cm) << "i")
                     : (os << cm.real(cm) << " - " << -1 * cm.image(cm) << "i");
  }
  else
  {
    os << cm.real(cm);
  }
  return os;
}

istream &operator>>(istream &is, complex &cm)
{
  cout << "Enter la partie reel ";
  is >> cm.re;
  cout << "Enter la partie imaginaire ";
  is >> cm.im;
  return is;
}
