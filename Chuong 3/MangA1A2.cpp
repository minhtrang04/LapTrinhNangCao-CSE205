#include<iostream>
#include<cmath>
using namespace std;
int main (){
	int n,i,a[100];
	cout<<"Nhap n: ";cin>>n;
	//Nhap mang
   for(int i=0;i<n;i++){
   	cout<<"a["<<i+1<<"]=";cin>>a[i];
   }
    //Xuat mang
  cout<<"Day so vua nhap la: ";
   for(int i=0;i<n;i++){
   	cout<<a[i]<<" ";
   }cout<<endl;
    //tim cac so bang so truoc no cong 3
    bool cong3=false;
     cout << "\nCac so bang so truoc no cong 3: ";
    for (int i = 1; i < n; i++) {
        if (a[i] == a[i-1] + 3) {
    //a[i-1]:so truoc a[i]//a[i-1]+3::so truoc a[i] cong 3
            cout << a[i] << " ";
            cong3=true;
        }
    } if (!cong3) {
        cout << "Khong co so nao bang so truoc no cong 3!";}
	cout<<endl;
	//bo ba so thoa man dieu kien Ai = Ai-1 + Ai+1
	bool boba=false;
	cout << "\nCac bo ba so thoa man dieu kien Ai = Ai-1 + Ai+1: ";
    for (int i = 1; i < n - 1; i++) {
        if (a[i] == a[i-1] + a[i+1]) {
            cout << "(" << a[i-1] << ", " << a[i] << ", " << a[i+1] << ") ";
                boba=true;
		}
    }
    if (!boba) {
        cout << "Khong co bo ba so nao thoa man dieu kien!";}
    
	return 0;
}
