#include<iostream>
#include<cmath>
using namespace std;
int main(){
	int n,i;
	do{
	  cout<<"Nhap n: ";cin>>n;
	  	}while(n<0);
	  cout<<"Cac so chinh phuong tu 1^2 den "<<pow(n,2)<<" la: "<<endl;
	    for(i=1*1;i<=pow(n,2);i++){
	    	if(sqrt(i)*sqrt(i)==i)///ktra so cp
	 	        cout<< i <<endl;
	           }
	return 0;
}
