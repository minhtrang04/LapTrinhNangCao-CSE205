#include<iostream>
#include<cmath>
using namespace std;
int main(){
	float x;
	cout<<"Nhap x: ";cin>>x;
	if(x>0 && x!=sqrt(2)){
	cout<<"f= "<<(pow(x,2)+1)/((sqrt(x))-2);
	}else{
		cout<<"Bieu thuc khong xac dinh!";
	}
	
	
	return 0;
}
