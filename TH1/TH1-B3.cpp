#include<iostream>
#include<cmath>
#define PI 3.1416
using namespace std;
int main(){
	float r;
	cout<<"Nhap r: ";cin>>r;
	cout<<"Chu vi hinh tron la: "<<PI*2*r <<endl;
	cout<<"Dien tich hinh tron la: "<<PI*pow(r,2) ;
	return 0;
}
