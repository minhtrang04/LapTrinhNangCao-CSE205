#include<iostream>
#include<string>
using namespace std;
struct Sinhvien{
    int msv;
    string hoten;
    string lopqly;
};
void Nhap(Sinhvien a[],int n){
    for(int i=0;i<n;i++){
        cout<<"\n\t\tNhap thong tin sinh vien thu "<<i+1<<": ";
        cout<<"\nNhap ho ten: ";
        cin.ignore();
        getline(cin,a[i].hoten);
        cout<<"Nhap ma sinh vien: ";
        cin>>a[i].msv;
        cout<<"Nhap lop: ";
        cin.ignore();
        getline(cin,a[i].lopqly);
    }    
}
void Xuat (Sinhvien a[],int n){
    for (int i = 0; i < n; i++) {
        cout << "\nSinh vien thu " << i + 1 << ":\n";
        cout << "Ho ten: " << a[i].hoten << endl;
        cout << "Ma sinh vien: " << a[i].msv << endl;
        cout << "Lop: " << a[i].lopqly << endl;
    }    
}
// Hàm dua ra thông tin ve các sinh viên lop TTNT
void DsTTNT(Sinhvien a[], int n) {
    cout << "\t\t----THONG TIN SINH VIEN LOP TTNT----\n";
    for (int i = 0; i < n; i++) {
        if (a[i].lopqly == "TTNT") {
            cout << "Sinh vien thu " << i + 1 << ":\n";
            cout << "Ma sinh vien: " << a[i].msv << endl;
            cout << "Ho ten: " << a[i].hoten << endl;
            cout << "Lop: " << a[i].lopqly << endl;
        }
    }
}
void SxTenTang(Sinhvien a[], int n){
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(a[i].hoten>a[j].hoten){
                Sinhvien temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
}
int main(){
    int n;
    Sinhvien a[100];
    cout<<"Nhap so luong sinh vien: ";
    cin>>n;
    Nhap(a,n);
    cout<<"\n\t\tTHONG TIN SINH VIEN";
    Xuat(a,n);
    DsTTNT(a,n);
    SxTenTang(a,n);
    cout<<"\t\tDANH SACH SINH VIEN THEO THU TU TANG DAN"<<endl;
    Xuat(a,n);
    return 0;    
}

