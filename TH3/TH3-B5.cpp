#include<iostream>
#include<cmath>
using namespace std;
int main(){
	int n,i;
	int a = 1;
	int b = 1;
	int c = 1;
	cout<<"Nhap n: ";cin>>n;
	//a, N: N!= 1.2.3…N
	for(int i=2;i<=n;i++){
		a=a*i;
	}
	//b,A = 1.3.5…(2N+1)
	for(int i=1;i<=2*n+1;i++){
		b=b*i;
	}
	//: B = 2.4.6…(2N)
	for(int i=2;i<=2*n;i+=2){
		c=c*i;
	}
	cout<<"N!= "<<a<<endl;
	cout<<"A= "<<b<<endl;
	cout<<"B= "<<c<<endl;
	
	return 0;
}
