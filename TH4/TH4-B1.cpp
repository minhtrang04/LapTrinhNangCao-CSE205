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
void tinhToan(int n,int a[100]){
	float s=0,dem=0,i;
	float tbc=0;
	for(int i=1;i<n;i++){
		s=s+a[i];dem++;
	}tbc=(float)s/dem;
	 cout<<"Tong day so la: "<<s<<endl;
	cout<<"Trung binh cong day so la: "<<tbc<<endl;
}
void demSo(int a[100],int n){
int demcp=0;
for(int i=1;i<n;i++){
	if(pow( (int)sqrt(a[i]),2 ) ==a[i] )
     	demcp++;
}cout<<"Co "<<demcp<<" so chinh phuong trong day so"<<endl;
}
bool ktrSNT(int n) {
    if (n < 2) {
        return false;
    }
    for (int i = 2; i<sqrt(n); i++) {
        if (n % i == 0) {
            return false;
        }
    }

    return true;
}

void demSNT(int a[100],int n){
	int demsnt=0;
for(int i=1;i<n;i++){
	if(ktrSNT(a[i]))
     	demsnt++;
}cout<<"Co "<<demsnt<<" so nguyen to trong day so"<<endl;
}
int main(){
	int n,i,a[100];
	do{
	   cout<<"Nhap n: ";cin>>n;
	   if(n<2 || n>20){
	   	cout<<"Nhap lai!";
	   }
	}while(n<2 || n>20);
	
	//Nhap mang
       Nhap(n,a);
    //Xuat mang
       Xuat(n,a);
    //Tinh tong va tbc
   tinhToan(n,a);
   //Dem scp
   demSo(a,n);
   //Dem snt
   demSNT(a,n);
       
}
