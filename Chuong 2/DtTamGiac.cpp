#include<iostream>
#include<cmath>
using namespace std;
void tinhDt(double a,double b,double c){
	double p;
	double dt;
	p=(a+b+c)/2;
	dt=sqrt(p*(p-a)*(p-b)*(p-c));
	cout<<"Dien tich tam giac ABC la: "<<dt;
}
int main(){
	double a,b,c,dt;
	cout<<"Nhap canh a: ",cin>>a;
	cout<<"Nhap canh b: ",cin>>b;
	cout<<"Nhap canh c: ",cin>>c;
	tinhDt(a,b,c);
	return 0;
}
