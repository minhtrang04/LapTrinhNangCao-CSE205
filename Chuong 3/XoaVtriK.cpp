#include<iostream>
#include<cmath>
using namespace std;
void xoaPtu(int k,int a[100],int &n){
	//&n khi thoat khoi ham gtri n ko bi thay doi
	for (int i = k ; i < n - 1; i++) {
    //k:vtri ptu can xoa
        a[i] = a[i+1];
    }n--; //cap nhat n
}
int main(){
	int n,i,a[100],k;
	cout<<"Nhap so phan tu cua day (<100) ="; cin>>n;
        for(i=0; i<n; i++) {
          cout<<"a["<<i<<"]="; cin>>a[i];
         }
    cout<<"Vi tri can xoa:"; cin>>k;
    // Xóa phan tu o vi trí k trong dãy
	xoaPtu(k,a,n);//goi ham
    cout << "Day sau khi xoa: ";
    for (int i = 0; i < n ; i++) {
        cout << a[i] << " ";
    }
	return 0;
}
