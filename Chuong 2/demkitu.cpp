#include<iostream>
#include<cmath>
using namespace std;
int main(){
	char c;
	int dem=0;
	cout<<"Nhap ki tu: ";cin>>c;
	do {
		if(c== 'a' ){
			dem++;
		}cin >> c;//dung de nhan tiep ki tu de thuc hien vong lap
	}while (c!='*');//ktra dkien trong khoi lenh
	 cout<<"So lan chu a(thuong) xuat hien trong xau la: "<<dem;
	
	return 0;
}
