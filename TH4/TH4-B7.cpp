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
void Xuat(int a[][50],int n,int m){
 cout << "Cac phan tu cua mang:" << endl;
	for(int i=0;i<n;i++){
	  for(int j=0;j<m;j++){
	  	cout<<a[i][j]<<" ";
	  } cout << endl;
	}
}
void DuongChan(int a[][50],int n,int m){
	 for(int j=0;j<m;j++){	
	 cout<<"Cot "<<j+1<<": ";
     for(int i=0;i<n;i++){
	  	if(a[i][j]%2==0 && a[i][j]>0){
	  		cout<<a[i][j]<<" ";
		  }
	  }cout<<endl;
	}
}
void ChiaBa(int a[][50],int n,int m){
	int dem=0;
	cout<<"Cac phan tu chia het cho 3 la: "<<endl;
	for(int i=0;i<n;i++){
		cout<<"Hang "<<i+1<<": ";
	  for(int j=0;j<m;j++){
	  	if(a[i][j]%3==0){
	  		cout<<a[i][j]<<" ";
	  		dem++;
		  }
	  }cout<<endl;
	}cout<<"Co "<<dem<<" so chia het cho 3"<<endl;;
}
void LonNho(int a[][50],int n,int m){
	int max=a[0][m-1];
	 int min=a[0][m-1];

	 for(int i=0;i<n;i++){
	 	if(max<a[i][m-1]){
	 		max=a[i][m-1];break;
		 }
		if(min>a[i][m-1]){
	 		min=a[i][m-1];break;
	}
	}
	cout<<"Gia tri lon nhat cua cot cuoi la: "<<max<<endl;
	cout<<"Gia tri nho nhat cua cot cuoi la: "<<min<<endl;
}
int TongLe(int a[][50],int n,int m){
	 int s=0;
	 for(int i=0;i<n;i++){
	  	if(a[i][0]%2!=0){
	  		s=s+a[i][0];
		  }
	 }return s;
}

int main(){
	int n,m;//n:hang doc;m:cot ngang
	int a[50][50];
	cout<<"Nhap so hang: ";cin>>n;
	cout<<"Nhap so cot: ";cin>>m;
	//Nhap mang
	Nhap(a,n,m);
	//Xuat mang
	Xuat(a,n,m);
	//Xuat ptu duong la chan tren tung cot
	DuongChan(a,n,m);
	//So ptu chia het cho 3
	 ChiaBa(a,n,m);
	 //Min max o dong cuoi
	 LonNho(a,n,m);
	 //Tong le o dau hang
	 int s=TongLe(a,n,m);
	 cout<<"Tong cac phan tu le o hang dau la: "<<s;
	return 0;
}
