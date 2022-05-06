/*------------- 1ere Situation -------------------------*/
class B
{
	// partie privée
		// ........
	// partie publique
	friend int A::FM_de_A(char, B);
};
class A
{
	// ..........
	int FM de_A(char, B);
};
int A::FMdeA(char c, B t)
{
	// .........
}// on pourra trouver ici une invocation des membres privés de l'objet t

/*------------- 2eme Situation -------------------------*/
class B 
{
	// partie privée
		// ........
	// partie publique
	friend void f_anonyme(B, A);
};

class A
{
	// partie privée
		// ........
	// partie publique
	friend void f_anonyme(B, A);
};


void f_anonymela(B to, A ti)
{
	// .............
}// on pourra trouver ici une invocation des nembres privés des objets to et ti.