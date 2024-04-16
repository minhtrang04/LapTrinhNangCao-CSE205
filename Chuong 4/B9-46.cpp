#include<iostream>
#include<vector>
using namespace std;
bool timX(vector<int> A,int x){
	for(int i=0;i<A.size();i++){
		if(A[i]==x){
			return true;
		}
	}return false;
}
int main(){
		int n,k;
	
	cout<<"Nhap n: ";cin>>n;
	vector <int> A(n) ;
	//NHap mang
	for(int i=0;i<A.size();i++){
		cout<<"A["<<i<<"]=";cin>>A[i];
	}
	//Xuat mang
	cout<<"Day so vua nhap la: ";
	for(int i=0;i<A.size();i++){
		cout<<A[i]<<" ";
	}
	//Tim va xoa X
	int x,i;
	cout<<"\nNhap x: ";cin>>x;
	if(timX(A,x)){
		while ( i<A.size()&&timX(A,x)!=-1 ){
			A.erase(A.begin()+timX(A,x));
			i++;}
				cout<<"Day so sau khi xoa la: ";
	      for(int i=0;i<A.size();i++){
	        	cout<<A[i]<<" ";
}
	}else{
		 cout<<"Phan tu x khong co trong A";
	}
	}
