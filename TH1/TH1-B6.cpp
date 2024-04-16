#include<iostream>
#include<cmath>
#define PI 1.31416
using namespace std;
int main(){
	float a,b,C,S;
	cout << "Nhap do dai hai canh a: ";cin>>a;
	cout << "Nhap do dai hai canh b: ";cin>>b;
	cout << "Nhap goc C (radian): ";cin>>C;
	C=(C*PI)/180;//chuyen do sang rad
	  S= (1.0/2)*a*b*sin(C);
	cout << "Dien tich tam giac ABC la: " <<S;
	
	return 0;
}
