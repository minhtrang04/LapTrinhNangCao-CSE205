#include<iostream>
#include<cmath>
using namespace std;
int main(){
	int soluong,dongia;
	float tong=0;
	cout<<"Nhap so luong mat hang: ";cin>>soluong;
	cout<<"Nhap don gia cua mat hang: ";cin>>dongia;
		if(soluong <0 || dongia<=1.000){
			cout << "So lieu khong hop le." <<endl;
        return 0;
		}
	tong=soluong*dongia;
	//so tien sau giam gia=gia goc-gia goc * ptram giam
  if(soluong>=10 ){
		 tong -= tong * 0.3; // giam 30%
   	}else if(soluong>4 && soluong<10){
		 tong -= tong * 0.15; // giam 15%
	}
	  cout << "Tong tien la: " << tong << endl;
	
	return 0;
}
