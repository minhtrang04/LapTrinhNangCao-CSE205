#include<iostream>
#include<cmath>
using namespace std;
int main (){
	float x;
	cout<<"Nhap x: ";cin>>x;
	if(x>0 && x!=3){
		cout<<"f(x)= "<<((2*pow(x,2))+1+sqrt(x))/(x-3);
	}else{
		cout<<"f(x)= 0";
	}
	
	return 0;
}
