#include<iostream>
#include<cmath>
using namespace std;
int main(){
	int x,y;
	int a;//su dung char thì thêm ki tu vd:case '1'
	cout<<"Nhap x: ";cin>>x;
	cout<<"Nhap y: ";cin>>y;
	cout<<"Nhap gia tri lua chon: ";cin>>a;
	switch(a){
		case 1: cout<<"x+y/(x^2+y^2+1)= "<<(float)(x+y)/(pow(x,2)+pow(y,2)+1)<<endl;break;
		case 2: cout<<"e^x + (5*y)= "<<exp(x)+ (5*y)<<endl;break;
		case 3: cout<<"(1+x^2)*y= "<<(1+pow(x,2))*y<<endl;break;
		default: cout<<"Khong hop le!";
	}
	return 0;
}
