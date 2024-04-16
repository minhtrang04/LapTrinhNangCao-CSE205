#include<iostream>
#include<cmath>
using namespace std;
int main(){
	char c[100];
	int i;
	cout<<"Nhap diem: ";cin.getline(c,100);
	if(c[i]=='A'){
		cout<<"Dat loai gioi";
	}else if(c[i]=='B'){
		cout<<"Dat loai kha";
	} else if(c[i]=='C'){
		cout<<"Dat loai trung binh";
	} else if(c[i]=='D'){
		cout<<"Dat loai trung binh yeu";
	} else if(c[i]=='F'){
		cout<<"Dat loai yeu";
	}else{
		cout<<"Khong hop le";
	} 
	
	return 0;
}
