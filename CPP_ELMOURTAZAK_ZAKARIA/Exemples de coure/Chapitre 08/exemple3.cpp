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
		
		void afficheC();
		void initialiseC(int ,int ,short);
		
};
void pointcol::afficheC(){
			affiche();
			cout <<" Couleur : "<<color<<" \n";
		}
void pointcol::initialiseC(int abs,int ord,short c){
	initialiser(abs,ord);
	color=c;
}

main(){
	pointcol p;
	p.initialiseC(10,20,5);
	p.afficheC();
	p.deplacer(2,4);
	//p.affiche();
	p.afficheC();
}

