#include<iostream>
#include<cmath>
using namespace std;
 void chenSo(int a[100],int &n, int x,int pos=2){
 	 //ktra mang con du hay bi vuot qua size khong
 	 int size =sizeof(a)/sizeof(a[0]);
 	 if(n==size){
 	 	cout<<"Khong the them vao mang !";
	  }n++;//cap nhat size
	   for(int i=n-1;i>pos;i--){
	   	a[i]=a[i-1];//don het tat ca ptu sau k ra phias sau 1 dvi
	   } a[pos]=x;//tai vtri k chen so x vao
 }     
int main(){
	int n,i,a[100];
	int x,pos=2;
	do{
	   cout<<"Nhap n: ";cin>>n;
	}while(n<0 && n>50);
	cout<<"Nhap x: ";cin>>x;
	for(int i=0;i<n;i++){
		cout<<"a["<<i<<"]=";cin>>a[i];
	}  
	  cout<<"Day so vua nhap: ";
		for(int i=0;i<n;i++){
			cout<<a[i]<<" ";
		} cout<<endl;
		chenSo(a,n,x,pos);
		 cout<<"Day so sau khi chen: ";
		for(int i=0;i<n;i++){
			cout<<a[i]<<" ";
		}
	
	return 0;
}
