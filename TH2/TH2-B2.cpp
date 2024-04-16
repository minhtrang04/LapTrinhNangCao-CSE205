#include<iostream>
#include<cmath>
using namespace std;
int main(){
	int a,b,c;
	cout<<"Nhap canh a: ";cin>>a;
	cout<<"Nhap canh b: ";cin>>b;
	cout<<"Nhap canh c: ";cin>>c;	
	if(a>0 && b>0 && c>0 && a+c>b && a+b>c && b+c>a ){
		if(a==b && b==c){
		   cout<<"Day la 3 canh cua tam giac deu";
	   }else if(a==b||a==c||b==c){
	       cout<<"Day la 3 canh cua tam giac can";
	   }else{
           cout<<"Day la 3 canh cua tam giac thuong";
    	}
	}else{
		cout<<"Khong phai la 3 canh tam giac";
	}
	return 0;
}
