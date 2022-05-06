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
		
	/*	void afficheC(){
			cout <<x << " "<<y <<" \n";
			cout <<" Couleur : "<<color<<" \n";
		}*/
		// cette solution n'est pas valable car elle ne respecte pas l'encaplsulation
		void afficheC(){
			affiche();
			cout <<" Couleur : "<<color<<" \n";
		}
};


main(){
	pointcol p;
	p.initialiser(10,20);
	p.colore(5);
	p.affiche();
	p.deplacer(2,4);
	//p.affiche();
	p.afficheC();
}

