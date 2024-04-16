#include<iostream>
#include<cmath>
using namespace std;
int main(){
	float diem;
	cout<<"Nhap diem: ";cin>>diem;
	if(diem>=8.5){
		cout<<"Dat diem A";
	}else if(diem>=7 && diem<8.5){
		cout<<"Dat diem B";
	} else if(diem>=5.5 && diem<7){
		cout<<"Dat diem C";
	} else if(diem>=4.5 && diem<5.5){
		cout<<"Dat diem D";
	} else if(diem<4.5){
		cout<<"Dat diem F";
	} 
	
	return 0;
}
