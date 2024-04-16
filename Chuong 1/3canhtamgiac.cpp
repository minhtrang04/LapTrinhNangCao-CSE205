#include<iostream>
#include<cmath>
using namespace std;
int main(){
	/*Ba canh a, b, c là 3 canh cua tam giác khi 
	và chi khi a+b>c và a+c>b, b+c>a voi(a,b,c>0)
	Ba canh là tam giác deu khi 3 canh = nhau a==b&&b==c&&a==c
	Ba canh là tam giác cân khi có 2 canh = nhau a==b || b==c || c==a
	Ba c là tam giác vuông khi bình phuong mot canh bang tong bình phuong
    hai canh còn lai:a*a+b*b==c*c || a*c+c*c == b*b|| b*b +c*c==a*c */
	int a,b,c;
	cout<<"Canh a: ";cin>>a;
	cout<<"Canh b: ";cin>>b;
	cout<<"Canh c: ";cin>>c;
	if( a>0 && b>0 && c>0 && a+c>b && a+b>c && b+c>a){
	    if(a==b && b==c){
		   cout<<"Day la 3 canh cua tam giac deu";
	   }else{
           cout<<"Day la 3 canh cua tam giac";
    	}
  	}else{
		   cout<<"Day khong phai 3 canh cua tam giac";
	}
	return 0;
}
