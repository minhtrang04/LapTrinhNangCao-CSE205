#include<iostream>
#include<cmath>
using namespace std;
int main(){
	/*Ba canh a, b, c l� 3 canh cua tam gi�c khi 
	v� chi khi a+b>c v� a+c>b, b+c>a voi(a,b,c>0)
	Ba canh l� tam gi�c deu khi 3 canh = nhau a==b&&b==c&&a==c
	Ba canh l� tam gi�c c�n khi c� 2 canh = nhau a==b || b==c || c==a
	Ba c l� tam gi�c vu�ng khi b�nh phuong mot canh bang tong b�nh phuong
    hai canh c�n lai:a*a+b*b==c*c || a*c+c*c == b*b|| b*b +c*c==a*c */
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
