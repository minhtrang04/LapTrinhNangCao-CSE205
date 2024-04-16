#include<iostream>
#include<cmath>
#include<string>
using namespace std;
int main(){
	string str1;
	int dem=0;
cout<<"Nhap xau ky tu: ";getline(cin,str1);
for(int i=0;i<str1.length();i++){
		if(isdigit(str1[i]))
		dem++;
	}
	if(dem==0){
		cout<<"Khong co ki tu nao la chu so";
	}else{
		cout<<"Co "<<dem<<" ki tu la chu so";
	}
	
	return 0;
}
