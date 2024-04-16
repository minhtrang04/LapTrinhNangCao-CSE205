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
void TimGtri(int a[100],int n,int x){
	for(int i=0;i<n;i++){
		if(x<=a[i])
		cout<<a[i]<<" ";
	}
}
void InvaXoa(int a[100],int n,int k){
	if (k >= 1 && k <= n) {
    cout << "Gia tri phan tu tai chi so " << k << " trong day so la: " << a[k-1] << endl;
// Xoa phan tu tai chi so k
        for (int i = k - 1; i < n - 1; i++) {
            a[i] = a[i + 1];
        }

        n--;

    cout << "Day so sau khi xoa phan tu tai chi so " << k << ": ";
        for (int i = 0; i < n; i++) {
            cout << a[i] << " ";
        }
        cout << endl;}
        else {
        cout << "Chi so khong hop le!" << endl;
    }

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
   //Tim gtr >=x
   float x;
   cout<<"Nhap x: ";cin>>x;
   TimGtri(a,n,x);
   //Tim va xoa gtri
   int k;
   cout<<"Nhap k: ";cin>>n;
   InvaXoa(a,n,k);
}
