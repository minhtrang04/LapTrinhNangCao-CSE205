#include<iostream>
#include<cmath>
#include<string>
using namespace std;

void demChen(string str1,string str2){
	int dem=0;
	int vtri;
	vtri=str1.find(str2);
	if(vtri<0){
		cout<<"Xau khong co trong!"
	}else{
		dem++;
		cout << "Vi tri xuat hien cua str2 trong str1 la: " << vtri;
		vtri=str1.find(str2, vtri + 1);
	}cout<<endl;
	cout<<"Xau \""<<str2<<"\" xuat hien "<<dem<<" lan trong xau \""<<str1;
}

int main(){
	string str1,str2;
cout<<"Nhap xau ky tu thu nhat: ";getline(cin,str1);
cout<<"Nhap xau ky tu thu hai: ";getline(cin,str2);
	demChen(str1,str2);
	
	return 0;
}
