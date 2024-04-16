#include<iostream>
#include<cmath>
using namespace std;
void tinhdodai(float xa,float ya,float xb, float yb, float &AB)
{ 
  AB=sqrt((xb-xa)*(xb-xa))+((yb-ya)*(yb-ya));
}
int main(){
	float xa, ya,xb,yb,xc,yc,AB,BC,AC;
  cout<<"Nhap  toa do A(x1,y1): ";cin>>xa>>ya;
  cout<<"Nhap  toa do B(x2,y2): ";cin>>xb>>yb;
  cout<<"Nhap  toa do C(x3,y3): ";cin>>xc>>yc;
   tinhdodai(xa,ya,xb,yb,AB);
   tinhdodai(xb,yb,xc,yc,BC);
   tinhdodai(xa,ya,xc,yc,AC);
  cout<<"Doan thang AB = "<<AB<<endl;
  cout<<"Doan thang BC = "<<BC<<endl;
  cout<<"Doan thang AC = "<<AC<<endl;
	return 0;
}
