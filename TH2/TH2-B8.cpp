#include<iostream>
#include<cmath>
using namespace std;
int main(){
	float x;
	cout<<"Nhap x: ";cin>>x;
	if(x>0 && ((sqrt(x))+1)!=0){
     	cout<<"f(x)= "<<((exp(x))-1)/((sqrt(x))-1);
	}else{
		cout<<"Bieu thuc khong xac dinh!";
	}
	
	return 0;
}
