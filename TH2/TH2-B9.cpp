#include<iostream>
#include<cmath>
using namespace std;
int main(){
	float x;
	cout<<"Nhap x:";cin>>x;
	if(x>0 && x!=2){
		cout<<"f(x)= "<<(x+(2*sqrt(x)))/(x-2);
	}else{
		cout<<"f(x)= 0";
	}
	
	return 0;
}
