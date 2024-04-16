#include<iostream>
#include<cmath>
using namespace std;
int main(){
	float x;
	cout<<"Nhap x: ";cin>>x;
	if(x>0){
		//Can bac 4 cua x la x^1/4
		cout<<"Can bac 4 cua x: "<<pow(x,(1.0)/4);
	}else{
		cout<<"Khong tinh duoc";
	}
	
	return 0;
}
