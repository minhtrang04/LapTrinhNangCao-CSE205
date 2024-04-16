#include<iostream>
#include<cmath>
#define PI 3.1416
using namespace std;
double tinhDT(double r){
	  double dt=PI*pow(r,2);
	return dt;
}
int main(){
 double r,dt;
 cout<<"Nhap gia tri r= "; cin>>r;
 dt=tinhDT(r);
 cout<<"Dien tich hinh tron la: "<<dt;
	
	return 0;
}
