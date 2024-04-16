#include<iostream>
#include<cmath>
#include<string.h>
using namespace std;
void Nhap(int n,int a[100] ){
	 for(int i=0;i<n;i++){
   	cout<<"a["<<i<<"]=";cin>>a[i];
   }
}
void Xuat(int n,int a[100]){
	cout<<"Day so vua nhap la: ";
   for(int i=0;i<n;i++){
   	cout<<a[i]<<" ";
   }cout<<endl;
}
bool ktrTang(int a[],int n) {
    for (int i = 1; i < n; i++) {
      if (a[i] < a[i-1]) //Neu ptu hien tai(ai) < ai-1(ptu truoc do) => mang ko sx tang dan
		{//Tra ve false
            return false;
        }
    }
    return true;
}
void xoaPtu(int a[100],int &n,float x){
	 int pos = 0;//theo doi vtri them cac ptu > x vao mang
    for (int i = 0; i < n; i++) {
        if (a[i] >= x) {
            a[pos] = a[i];
            pos++;
        }
    }
    n = pos;//
	
}

int main(){
	int n,i,a[100];
	do{
	   cout<<"Nhap n: ";cin>>n;
	   if(n<0 || n>=10){
	   	cout<<"Nhap lai!";
	   }
	}while(n<0 || n>=10);
	
	//Nhap mang
       Nhap(n,a);
    //Xuat mang
       Xuat(n,a);
    //Ktra có tang dan ko
    if (ktrTang(a,n)) {
        cout << "Cac phan tu trong day B theo thu tu tang dan." << endl;
    } else {
        cout << "Cac phan tu trong day B khong theo thu tu tang dan." << endl;
    }
    //NHap x xoa ptu nho hon x
    float x;
    cout << "Nhap x: ";
    cin >> x;
    xoaPtu(a,n,x);
    cout<<"Day so sau khi xoa la: ";
    for(int i=0;i<n;i++){
   	cout<<a[i]<<" ";
   }


    
    return 0;
}
