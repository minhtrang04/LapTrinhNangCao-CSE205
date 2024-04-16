#include<iostream>
#include<cmath>
using namespace std;
int main(){
	float x;
	cout<<"Nhap x:";cin>>x;
	if(x>1){
		cout<<"f(x)= "<<(pow(x,3))+(sqrt(x-1))+(3*exp(x));
	}else{
		cout<<"f(x) khong xac dinh!";
	}
	
	return 0;
}
