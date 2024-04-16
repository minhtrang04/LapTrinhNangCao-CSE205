#include <iostream>
#include <string>
using namespace std;
void Nhap(int n,float a[100] ){
	 for(int i=0;i<n;i++){
   	cout<<"a["<<i<<"]=";cin>>a[i];
   }
}
void Xuat(int n,float a[100]){
	cout<<"Day so vua nhap la: ";
   for(int i=0;i<n;i++){
   	cout<<a[i]<<" ";
   }cout<<endl;
}
void tachDay(float a[100],int n,float x){
	 float mang1[100];
    float mang2[100];
    int m = 0, k = 0;

    // Tách dãy a thành hai dãy con
    for (int i = 0; i < n; i++) {
        if (a[i] < x) {
            mang1[m++] = a[i];
        } else {
            mang2[k++] = a[i];
        }
    }

    // In hai dãy con ra màn hình
    cout << "Day con thu nhat (nho hon x): ";
    for (int i = 0; i < m; i++) {
        cout << mang1[i] << " ";
    }

    cout << endl;

    cout << "Day con thu hai (lon hon hoac bang x): ";
    for (int i = 0; i < k; i++) {
        cout << mang2[i] << " ";
    }
}
int main() {
    float a[100];
    float mang1[100];
    float mang2[100];
    int n, m = 0, k = 0;
    float x;
    cout << "Nhap n: ";
    cin >> n;
    cout << "Nhap vao so thuc x: ";
    cin >> x;
	//Nhap mang
       Nhap(n,a);
    //Xuat mang
       Xuat(n,a);
    //Tach day
    tachDay(a, n, x);

    return 0;
}

