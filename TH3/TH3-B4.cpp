#include<iostream>
#include<cmath>
using namespace std;
bool ktrSCP(int n){
	int kq=(int)sqrt(n);
	if(pow(kq,2)==n){
		return true ;//n la scp
	}
	  return false ;//n khong la scp
}
int main(){
		int n;
	do{
		   cout<<"Nhap n: ";cin>>n;
	}while(n<0 && cout<<"Khong hop le!Moi Nhap lai"<<endl);
	   cout<<"Cac so chinh phoung la: ";
	 for(int i=1;i<=n;i++){
	 //pow((int)sqrt(i),2)==i
	 	if(ktrSCP(i)){
	 		cout<<i<<" ";
		 }
	 }
	
	return 0;
}
