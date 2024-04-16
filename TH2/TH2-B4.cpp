#include<iostream>
#include<cmath>
using namespace std;
int main(){
	float diem;
	cout<<"Nhap diem trung binh: ";cin>>diem;
	if(diem<4.5){
		cout<<"Xep loai Yeu ";
	}else if(4.5<=diem && diem<7){
		cout<<"Xep loai Trung binh ";
	}else if(7<=diem && diem<8.5){
		cout<<"Xep loai Kha ";	
	}else if(diem>=8.5){
		cout<<"Xep loai Gioi ";
	}
	
	return 0;
}
