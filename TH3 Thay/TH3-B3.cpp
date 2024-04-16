#include<iostream>
#include<cmath>
#include<string.h>
using namespace std;
void TinhTong(float x1, float x2, float x3){
	float s,tbc;
	s = x1 + x2 + x3;
    tbc = s / 3;

    cout << "Tong: " << s << endl;
    cout << "Trung binh cong: " << tbc << endl;
}
int main(){
	float x1=2.5;
	 float x2=4.5;
	  float x3=7.6;
	  TinhTong(x1, x2, x3); //kqua duoc tính tu các so dã duoc gán 
	  cout<<"Nhap x1: ";cin>>x1;
	  cout<<"Nhap x2: ";cin>>x2;
	  cout<<"Nhap x3: ";cin>>x3;
	  TinhTong(x1,x2,x3);//kqua duoc tính tu các so nhap tu bphim
	
	return 0;
}
