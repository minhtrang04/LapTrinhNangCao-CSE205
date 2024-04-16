#include<iostream>
#include<cmath>
using namespace std;
double tinhDoTh(double x1,double y1,double x2,double y2){
	double dd;
	dd=sqrt((x2-x1)*(x2-x1))+((y2-y1)*(y2-y1));
	return dd;
}
int main(){
	double xA,xB,xC,yA,yB,yC;
	cout<<"Nhap  toa do A(x1,y1): ";cin>>xA>>yA;
	cout<<"Nhap  toa do B(x2,y2): ";cin>>xB>>yB;
	cout<<"Nhap  toa do C(x3,y3): ";cin>>xC>>yC;
	cout<<"Doan thang AB = "<<tinhDoTh(xA,yA,xB,yB)<<endl;
	cout<<"Doan thang BC = "<<tinhDoTh(xB,yB,xC,yC)<<endl;
	cout<<"Doan thang AC = "<<tinhDoTh(xA,yA,xC,yC)<<endl;
	
	
	return 0;
}
