#include <iostream>

using namespace std;

class coul
{
	short color;

public:
	coul(int a)
	{
		cout << "++coul.const" << endl;
		color = a;
	}

	~coul()
	{
		cout << "--coul.dest" << endl;
	}
	void afficher()
	{
		cout << "color : " << color << endl;
	}
};
class point
{
	int x, y;

public:
	point(int a, int b)
	{
		cout << "++point.const" << endl;
		x = a;
		y = b;
	}
	~point()
	{
		cout << "--point.dest" << endl;
	}
	void afficher()
	{
		cout << "point :: " << x << ", " << y << endl;
	}
};

class pointcoul : public coul, public point
{

public:
	pointcoul(int a, int b, int c) : point(a, b), coul(c)
	{
		cout << "++pointcoul.const" << endl;
	}
	~pointcoul()
	{
		cout << "--pointcoul.dest" << endl;
	}
	void afficher()
	{
		point::afficher();
		coul::afficher();
	}
};

class A
{
public:
	A()
	{
		std::cout << "++ point A" << std::endl;
	}
};
class B : public A
{
public:
	B()
	{
		std::cout << "++ point B" << std::endl;
	}
};
class C : public A
{
public:
	C()
	{
		std::cout << "++ point C" << std::endl;
	}
};
class D : public B, public C
{
public:
	D()
	{
		std::cout << "++ point D" << std::endl;
	}
};

int main()
{
	pointcoul p(3, 9, 2);
	cout << "------------------------------------------" << endl;
	p.afficher();
	cout << "------------------------------------------" << endl;
	p.point::afficher();
	cout << "------------------------------------------" << endl;
	p.coul::afficher();
	cout << "------------------------------------------" << endl;
	D d;
	cout << "------------------------------------------" << endl;

	return 0;
}
