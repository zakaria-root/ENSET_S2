#include<iostream>
#include<conio.h>
using namespace std;
class point{
	int x,y;
	public :
		 point(int abs=0,int ord=0){
			cout<<" ++ Const.point "<<abs<< " "<<ord <<endl;
			x=abs;
			y=ord;
		}
		~point(){
			cout<<"-- Destr.point "<<x<< " "<<y <<endl;
			
		}
		};
class pointcol :public point{
	short color;
	public:
		 pointcol(int ,int ,short);
		~pointcol(){
			cout<<"-- Destr.pointcol "<<color<<endl;
			
		}
};
 pointcol::pointcol(int abs=0,int ord=0,short c=1):point(abs,ord){
		cout<<"++ Cons.pointcol "<<abs<< " "<<ord <<" "<<c<<endl;
		
	color=c;
}

main(){
	pointcol a(10,15,3);
	pointcol(2,3);
	pointcol c(12);
	pointcol d;
	pointcol *adr;
	adr=new pointcol(12,25);
	delete adr;
}

