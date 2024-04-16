#include<iostream>
#include<cmath>
#include<string.h>
using namespace std;
void Nhap(int n,int a[100] ){
	 for(int i=0;i<n;i++){
   	cout<<"a["<<i<<"]=";cin>>a[i];
   }
}
int tongLe(int n,int a[100]){
	int i,s=0;
	for(int i=1;i<n;i+=2){
		{
			s=s+a[i];
		}
	}
	return s;
}
void giamDan(int n,int a[100]){
int j,temp;
    for(int i = 0; i < n-1; i++){//duyet qua tung ptu trong mang tu ptu dau den n-1
     for(j = i + 1; j < n; j++)//duyet qua tung ptu con lai trong mang tu sau i den ptu cuoi
     if(a[i] < a[j]) {
     temp = a[i];
     a[i] = a[j];
     a[j] = temp;
     }};
}
void Xuat(int n,int a[100]){
   for(int i=0;i<n;i++){
   	cout<<a[i]<<" ";
   }cout<<endl;
}
void xoaPhanTu(int a[100],int &n,int x){
	int pos = -1;

    // Tìm vi trí cua phan tu can xóa
    for (int i = 0; i < n; i++) {
        if (a[i] == x) {
            pos = i;
            break;
        }
    }

    // Neu tìm thay phan tu can xóa
    if (pos != -1) {
        // Dich chuyen các phan tu phía sau ve truoc
        for (int i = pos + 1; i < n; i++) {
            a[i - 1] = a[i];
        }
        
        // Giam kích thuoc mang xuong 1
        n--;
    }
}
void themPhanTu(int a[], int& n, int k, int y) {
    // Dich chuyen các phan tu phía sau ve sau de tao cho trong cho ptu moi
    for (int i = n - 1; i >= k; i--) {
        a[i + 1] = a[i];
    }
    // Thêm ptu moi vào vi trí k
    a[k] = y;
    
    // Tang kích thuoc mang lên 1
    n++;
}
int main(){
	int n,i,a[100];
	do{
	   cout<<"Nhap n: ";cin>>n;
	   if(n<0 || n>=20){
	   	cout<<"Nhap lai!";
	   }
	}while(n<0 || n>=20);
	
	//Nhap mang
       Nhap(n,a);
    //Xuat mang
       cout<<"Day so vua nhap la: "<<endl;
	   Xuat(n,a);
	 //Tinh tong cac ptu so le
	 int s=tongLe(n,a);
	 cout<<"Tong cac phan tu o chi so le la: "<<s<<endl;
    //thu tu giam dan
     giamDan(n,a);
     cout<<"Day so theo thu tu giam dan la: ";
     Xuat(n,a);
    //Nhap x,tim x,xoa x
	 int x;
	 cout<<"Nhap phan tu muon xoa: ";cin>>x;
	 xoaPhanTu(a, n, x);
    cout << "Mang sau khi xoa phan tu " << x << ":" << endl;
    Xuat(n,a);
    cout << endl;
    //Chen vtri k
    int k,y;
    cout<<"Nhap vi tri chen: ";cin>>k;
    cout<<"Nhap phan tu chen: ";cin>>y;
	themPhanTu(a,n,k,y);
	cout << "Mang sau khi them phan tu la :" ;
	Xuat(n,a);
	return 0;
}
