#include<iostream>
#include<cmath>
#include<string>
using namespace std;
int demKtu(string str,char ch){
	
	int dem=0,demSpace=0;
	for(int i=0;i<str.size();i++){
		if(str[i]==ch  ){
			dem++;
		}else if(str[i]==' '){
			dem++;
		}
	}return dem;
	
}

int main(){
	string str;
	char ch;
	cout<<"Nhap xau ky tu: ";getline(cin,str);
	cout<<"Nhap ky tu: ";cin>>ch;
	//In so lan xh
	int dem=demKtu(str,ch);
	if(dem==0){
		cout<<"Ki tu " <<ch<<" khong co trong xau";
}
	else{
		cout<<"Co "<<dem<<" ki tu "<<ch<<" xuat hien trong xau";
	}
	
	return 0;
}
