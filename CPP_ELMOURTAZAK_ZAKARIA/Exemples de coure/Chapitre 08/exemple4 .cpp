#include<iostream>
#include<conio.h>
using namespace std;
class point{
	int x,y;
	public :
		void initialiser(int abs,int ord){
			x=abs;y=ord;
		}
		void deplacer(int dx,int dy){
			x+=dx;
			y+=dy;
		}
		void affiche(){
			cout <<" Le Point est en "<<x<<" "<<y <<" \n";
		}
};
class pointcol :public point{
	short color;
	public:
		void colore(short c){
			color=c;
		}
		
		void affiche();
		void initialiser(int ,int ,short);
		
};
void pointcol::affiche(){
			point::affiche();
			cout <<" Couleur : "<<color<<" \n";
		}
void pointcol::initialiser(int abs,int ord,short c){
	point::initialiser(abs,ord);
	color=c;
}

main(){
	pointcol p;
	p.initialiser(10,20,5);
	p.colore(5);
	p.affiche();
	p.point::affiche();
	p.deplacer(2,4);
	p.colore(2);
	p.affiche();
}

