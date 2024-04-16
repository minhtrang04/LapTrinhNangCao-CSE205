#include<iostream>
#include<cmath>
using namespace std;
int main (){
	int a;
	cout<<"Nhap thang: ";cin>>a;
	switch(a){
		case 4:
		case 6:
		case 9: cout<<"Thang co 30 ngay. ";break;
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 11:
		case 12:cout<<"Thang co 31 ngay. ";break;
		case 2: cout<<"Thang có 28 ngay nam thuong va 29 ngay nam nhuan.";break;
		default: cout<<"Khong hop le!";
	}
	return 0;
}
