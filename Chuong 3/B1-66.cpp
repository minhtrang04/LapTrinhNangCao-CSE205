#include<iostream>
#include<cmath>
#include<string>
using namespace std;
void ktrKtu(string x,char c){
	int dem=0;
	int vtri,i;
	vtri=x.find(c);
	if(vtri<0){
		cout<<"Ky tu \""<<c<<"\" khong xuat hien trong xau "<<x;
	}else{
	 
	      cout << "Vi tri xuat hien cua ky tu \"" << c << "\" trong xau \"" << x << "\" la: " ;
	      for(int i=0;i<x.size();i++){
	      	if(x[i]==c){
	      		dem++;
	      	cout<<i<<" ";
			  }

		  }cout<<endl;
	}//cout << "Vi tri xuat hien cua ky tu \"" << c << "\" trong xau \"" << x << "\" la: " << vtri<<endl;
	cout<<"Ky tu \"" << c << "\" xuat hien \""<< dem << "\" lan ";
}

int main(){
	string x;char c;
	cout<<"Nhap xau ky tu: ";getline(cin,x);
	cout<<"Nhap ky tu: ";cin>>c;
	ktrKtu(x,c);
	return 0;
}
