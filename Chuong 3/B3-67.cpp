#include<iostream>
#include<cmath>
#include<string>
using namespace std;
int main(){
	string x,y;
cout<<"Nhap xau ky tu thu nhat: ";getline(cin,x);
cout<<"Nhap xau ky tu thu hai: ";getline(cin,y);
	int p,q;
	cout<<"Nhap vi tri thu nhat: ";cin>>p;
	cout<<"Nhap vi tri thu hai: ";cin>>q;
	
	if(p<=x.size() && q<=x.size() && q>=0 && p>=0){
		cout<<"Ket qua: ";
		for (int i=0; i<x.size(); i++){
			if(i==q||i==p){
				cout<<y;
			}
			if(i==q && i==p && p==q &&q!=0){
				cout<<y<<y;
			}else if(q==0&&i==q && i==p && p==q){
				cout<<y;	
			}
			cout << x[i];
		}
	}
	return 0;
}
