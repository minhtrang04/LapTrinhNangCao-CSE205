#include<iostream>
#include<string>
using namespace std;
struct nhanvien
{
	 string hoten;
	 int luong;
	 
};
void Nhap1nv(nhanvien &nv){
	cout<<"Nhap ho ten: ";fflush(stdin);getline(cin,nv.hoten);
	cout<<"Nhap luong: ";fflush(stdin);cin>>nv.luong;
	cout<<endl;
}
void Xuat1nv(nhanvien &nv){
	cout<<"Ho va Ten: "<<nv.hoten<<endl;
	cout<<"So tien luong: "<<nv.luong<<endl;
}
void NhapThongtin(nhanvien a[] ,int n){
	for (int i=0;i<n;i++){
		Nhap1nv(a[i]);
	}
}

void XuatDs(nhanvien a[],int n){
	 for (int i=0;i<n;i++){
		Xuat1nv(a[i]);
	}
}
nhanvien LuongCaoNhat(nhanvien a[],int n){
	  nhanvien maxLuong;
	  for (int i=0;i<n;i++){
		if (a[i].luong > maxLuong.luong)
			maxLuong = a[i];
	}
	return maxLuong;
}
int main(){
	int n;
	nhanvien a[100];
	cout<<"Nhap so luong nhan vien: ";fflush(stdin);cin>>n;
	cout<<"\t\t\tNHAP DANH SACH NHAN VIEN "<<endl;
	NhapThongtin(a,n);
	cout<<"\t\t\tXUAT DANH SACH NHAN VIEN "<<endl;
	XuatDs(a,n);
	nhanvien maxLuong = LuongCaoNhat(a,n);
	cout<<"\nNhan vien co luong cao nhat la: "<<maxLuong.hoten<<" voi so luong: "<<maxLuong.luong<<endl;
	return 0;
}
