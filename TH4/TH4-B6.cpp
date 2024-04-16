#include<iostream>
#include<cmath>
using namespace std;
void Nhap(int a[][50],int n,int m){
	for(int i=0;i<n;i++){
	  for(int j=0;j<m;j++){
	  	cout<<"a["<<i<<"]["<<j<<"]= ";cin>>a[i][j];
	  }
	}
}
void inBang(int a[][50],int n,int m){
 cout << "Cac phan tu cua mang:" << endl;
	for(int i=0;i<n;i++){
	  for(int j=0;j<m;j++){
	  	cout<<a[i][j]<<" ";
	  } cout << endl;
	}
}
void demSo(int a[][50],int n,int m){
	int duong=0,am=0;
	for(int i=0;i<n;i++){
	  for(int j=0;j<m;j++){
	  	if(a[i][j]>0){
	  		duong++;
		  }else{
		  	am++;
		  }
	  } 
	}
	cout << "Co " << duong <<" so duong trong mang" <<endl;
    cout << "Co " << am <<" so am trong mang"<<endl;
}
void Tongtbc(int a[][50],int n,int m){
	int s=0,dem=0;float tbc=0;
	for(int j=0;j<m;j++){
	   s+=a[0][j];dem++;
		  }tbc=(float)s/dem;
	cout<<"Tong cac phan tu o hang dau tien la: "<<s<<endl;
	cout<<"Tbc cac phan tu o hang dau tien la: "<<tbc<<endl;

}
int inChan(int a[][50],int n,int m){
	int demchan=0;
	for(int i = 0; i < n; i++){
		if(a[i][m-1]%2==0){//m-1 la ctri cot cuoi
			demchan++;
		}
	}return demchan;
}
void doiCho(int a[][50],int n,int m){
	  for(int j=0;j<m;j++){
	  	  int temp = a[0][j];//gan vao bien temp
        a[0][j] = a[n-1][j];//gan cho dau bang cho cuoi
        a[n-1][j] = temp;//gan bien temp da luu tru cho dau chuyen den cho cuoi
		  }
}
int main(){
	int i,j,n,m;//n:hang doc,m:cot ngang
	int a[50][50];
	cout<<"Nhap so hang: ";cin>>n;
	cout<<"Nhap so cot: ";cin>>m;
	//NHAP
	Nhap(a,n,m);
	//In bang
	inBang(a,n,m);
	//Dem so am ,duong
	demSo(a,n,m);
	//Tong + TBc a[0]
	Tongtbc(a,n,m);
	//In so chan cot cuoi
	int demChan=inChan(a,n,m);
	cout<<"Co "<<demChan<<" so chan o cot cuoi cuoi la"<<endl;
	//Doi cho
	doiCho(a,n,m);
	cout << "Bang sau khi doi cho:" << endl;
	inBang(a,n,m);
	
	return 0;
}
