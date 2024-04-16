#include<iostream>
#include<cmath>
using namespace std;
int main(){
	int n,m;
	cout<<"Nhap n:";cin>>n;
	cout<<"Nhap m:";cin>>m;

	for(int i=n;i<=m;i++){	cout<<"Day so theo thu tu tang dan la: ";
		cout<<i<<" ";
	}cout<<endl;
	cout<<"Day so theo thu tu giam dan la: ";
	for(int i=m;i>=n;i--){
		cout<<i<<" ";
	}
	
	return 0;
}
