#include<iostream>
#include<string.h>
using namespace std;
void Dem(string c){
	int dem=0;
	for(int i=0;i<=c.size();i++){
		if(isupper(c[i]))
		dem++;
	}
	if(dem==0){
		cout<<"Khong co ky tu in hoa";
	}else {
		cout<<"Co "<<dem<<" ky tu in hoa";
	}
}
int main(){
	string c;
	cout<<"Nhap xau ky tu: ";getline(cin,c);
	Dem(c);
	return 0;
	
	
}
