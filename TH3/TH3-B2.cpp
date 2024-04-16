#include<iostream>
#include<cmath>
using namespace std;
int main(){
		int n,m;
	cout<<"Nhap n:";cin>>n;
	cout<<"Nhap m:";cin>>m;
	  int s=0;
	for(int i=n;i<=m;i++){
		s=s+i;
	}cout<<"Tong day so la: "<<s;
	return 0;
}
