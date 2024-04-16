#include<iostream>
#include<cmath>
using namespace std;
int main(){
	   //a,tinh pt
	int n;
	float x;
do{     cout<<"Nhap n: ";cin>>n;
		cout<<"Nhap x: ";cin>>x;
	}while(x<0 && cout<<"x>0 moi nhap lai!"<<endl);
	 cout<<"a) "<<(pow(3,n))+(5*fabs(x))+(log(3*x))<<endl;
	    //b,tinh S
	float a,b,c;
	float p;
	    cout<<"Nhap a: ";cin>>a;
		cout<<"Nhap b: ";cin>>b;
		cout<<"Nhap c: ";cin>>c;
		p=(a+b+c)/2;
	    cout<<"b) "<<sqrt(p*(p-a)*(p-b)*(p-c));
	return 0;
}
