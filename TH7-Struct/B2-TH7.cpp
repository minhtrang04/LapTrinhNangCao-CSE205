#include<iostream>
#include<string>
using namespace std;
struct Sinhvien{
    string hoten;
    int ngay, thang, nam;
};
void Nhap(Sinhvien a[], int n){
    for (int i=0;i<n;i++){
        cout<<"\n\t\tNHAP THONG TIN SINH VIEN THU "<<i+1<<": ";
        cout<<"\nNhap ho ten: ";
        cin.ignore();
        getline(cin,a[i].hoten);
        cout<<"Nhap ngay sinh: ";
        cin>>a[i].ngay;
        cout<<"Nhap thang sinh: ";
        cin>>a[i].thang;
        cout<<"Nhap nam sinh: ";
        cin>>a[i].nam;
    }
}
void Xuat(Sinhvien a[], int n){
    for (int i=0;i<n;i++){
        cout << "\nSinh vien thu " << i + 1 << ":\n";
        cout<<"Ho ten: "<< a[i].hoten << endl;
        cout<<"Ngay thang nam sinh: "<<a[i].ngay<<"  "<<a[i].thang<<"  "<<a[i].nam<<endl;
    }
}
void namSinhK(Sinhvien a[], int k, int n) {
    bool co = false;
    for (int i = 0; i < n; i++) {
        if (a[i].nam == k) {
            cout << "\nHo ten: " << a[i].hoten << endl;
            cout << "Ngay thang nam sinh: " << a[i].ngay << " " << a[i].thang << " " << a[i].nam;
            co = true;
            cout<<endl;
        }
    }
    if(!co){
        cout<<"\nKhong co sinh vien nao sinh nam "<<k<<endl;
    }
}
bool ktNgayThang(Sinhvien a[], int n){
    for(int i=0;i<n;i++){
        if(a[i].ngay==29 && a[i].thang==2){
            return true;
        }
    }
    return false;
}
int main(){
    int n;
    Sinhvien a[100];
    cout<<"Nhap so luong sinh vien: ";
    cin>>n;
    Nhap(a,n);
    cout<<"\n\t\tTHONG TIN SINH VIEN";
    Xuat(a,n);
    //Nhap so nguyen k
    int k;
    cout<<"\nNhap so k nam sinh: ";
    cin>>k;
    namSinhK(a,k,n);
    //29 thang 2
    if(ktNgayThang(a,n)){
        cout<<"\nCo sinh vien sinh vao 29 thang 2"<<endl;
    }else{
        cout<<"\nKhong co sinh vien sinh vao 29 thang 2"<<endl;
    }
    return 0;    
}

