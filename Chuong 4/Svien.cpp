#include<iostream>
#include<string>
using namespace std;
struct sinhvien{
	string hoten;
	string khoahoc;
	string lopqly;
	string diachi;
	int sdt;
};
void Nhap(sinhvien &sv){
	cout<<"Nhap ho ten sinh vien thu: ";fflush(stdin);getline(cin,sv.hoten);
	cout<<"Nhap khoa hoc: ";fflush(stdin);getline(cin,sv.khoahoc);
	cout<<"Nhap lop quan ly: ";fflush(stdin);getline(cin,sv.lopqly);
	cout<<"Nhap dia chi: ";fflush(stdin);getline(cin,sv.diachi);
	cout<<"Nhap so dien thoai: ";fflush(stdin);cin>>sv.sdt;
	cout<<endl;
}
void Xuat(sinhvien &sv){
	cout<<"Ho va ten: "<<sv.hoten<<endl;
	cout<<"Khoa hoc: "<<sv.khoahoc<<endl;
	cout<<"Lop quan ly: "<<sv.lopqly<<endl;
	cout<<"Dia chi: "<<sv.diachi<<endl;
	cout<<"So dien thoai: "<<sv.sdt<<endl;
	cout<<endl;
}
void nhapDs(sinhvien a[],int n){
	for(int i=0;i<n;i++){
		Nhap(a[i]);
	}
}
void xuatDs(sinhvien a[],int n){
	for(int i=0;i<n;i++){
		 Xuat(a[i]);
	}
}


int main(){
	sinhvien a[100];
	int n;
	cout<<"Nhap so luong sinh vien: ";fflush(stdin);cin>>n;
	cout<<"\t\t\tNHAP DANH SACH SINH VIEN "<<endl;
	nhapDs(a,n);
	cout<<"\t\t\tXUAT DANH SACH SINH VIEN "<<endl;
	xuatDs(a,n);
	
	return 0;
}
