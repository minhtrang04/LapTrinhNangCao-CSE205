#include<iostream>
#include<cmath>
#include <string>
using namespace std;
int main(){
	string c;
	string a;
	cout<<"Nhap ten sinh vien: ";getline(cin,c);//getline(cin,ham string)
	cout<<"Lop: ";getline(cin,a);
	cout<<"Loi chao tieng Viet:Xin chao "<<c<<" lop "<<a<<endl;
	cout<<"Loi chao tieng Anh:Hello "<<c<<" class "<<a;
 //dung bien char*/
  /*char c[100];
    char a[100];
    // kieu cin.getline(bien char,LENGTH);
    cout<<"Nhap ten sinh vien: ";cin.getline(c,100);
	cout<<"Lop: ";cin.getline(a,100);
	cout<<"Loi chao tieng Viet:Xin chao "<<c<<" lop "<<a<<endl;
	cout<<"Loi chao tieng Anh:Hello "<<c<<" class "<<a;*/
	
return 0;
}
