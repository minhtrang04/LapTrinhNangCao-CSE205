#include<iostream>
#include<cmath>
using namespace std;
int main(){
	float a,b,c;
    float d,x,x1,x2;
	cout<<"Nhap a: ";cin>>a;
	cout<<"Nhap b: ";cin>>b;
	cout<<"Nhap c: ";cin>>c;
	if(a==0){//pt bac1 bx+c=0
		 if(b==0 ){
		 	if(c!=0){
		 	cout<<"Phuong trinh vo nghiem"<<endl;}
		 }else if(c==0){
		 	cout<<"Phuong trinh co vo so nghiem"<<endl;
		 }else { x=-c/b;
		 	cout<<"Phuong trinh co nghiem duy nhat la: "<<x<<endl;
		 }
	}else{//pt bac 2
	       d=pow(b,2)-(4*a*c); 
	   if(d>0){
			x1=(-b+sqrt(d))/2*a;
			x2=(-b-sqrt(d))/2*a;
		  cout<<"Phuong trinh co nghiem x1 la: "<<x1<<endl;
		  cout<<"Phuong trinh co nghiem x2 la: "<<x2<<endl;
	    }else if(d==0){
	    	cout<<"Phuong trinh co nghiem kep x1=x2 la: "<<-b/2*a<<endl;
		}else{
		cout<<"Phuong trinh vo nghiem"<<endl;
		}
	}
	return 0;
}
