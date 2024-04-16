#include<iostream>
#include<cmath>
using namespace std;
int main(){
	float soluong,dongia;
	cout<<"Nhap so luong san pham: ";cin>>soluong;
	cout<<"Nhap don gia san pham: ";cin>>dongia;
	if(soluong<=0 || dongia<1000){
		cout<<"So lieu khong hop le";
		return 0;
	}
	float tong;
	tong=soluong*dongia;
	//so tien sau khi giam=tong so tien -tong so tien*so % giam;
	if(soluong>=10){
		tong-=tong*0.3;
	}else if(soluong>4 && soluong <10){
		tong-=tong*0.15;
	}else{
		tong;
	}
	cout<<"So tien phai tra: "<<tong;
	return 0;
}
