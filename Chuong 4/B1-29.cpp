#include<iostream>
#include<string>
using namespace std;
struct Sach{
	string tensach;
	string nhaxb;
	int gia;
	
};
void Nhap(Sach &sa){
	cout<<"Nhap ten sach: ";fflush(stdin);getline(cin,sa.tensach);
	cout<<"Nhap ten Nha xuat ban: ";fflush(stdin);getline(cin,sa.nhaxb);
	cout<<"Nhap gia sach: ";fflush(stdin);cin>>sa.gia;
	cout<<endl;
}
void Xuat(Sach &sa){
   	cout<<"Ten sach: "<<sa.tensach<<endl;
	cout<<"Ten Nha xuat ban: "<<sa.nhaxb<<endl;
	cout<<"Gia sach: "<<sa.gia<<endl;
	cout<<endl;
}
void nhapDs(Sach a[],int n){
	for(int i=0;i<n;i++){
		Nhap(a[i]);
	}
}
void xuatDs(Sach a[],int n){
	for(int i=0;i<n;i++){
		 Xuat(a[i]);
	}
}
Sach DemNXB(Sach a[],int n){
	Sach dem=0;
	for (int i=0;i<n;i++){
		if (a[i].nhaxb=="Giao Duc")
			dem++;
	}
	return dem;
}
Sach GiaCaoNhat(Sach a[],int n){
	  Sach maxGia=a[0].gia;
	  for (int i=0;i<n;i++){
		if (a[i].gia > maxGia.gia)
			maxGia = a[i];
	}
	return maxGia;
}

int main(){
	Sach a[100];
	int n;
	cout<<"Nhap so sach: ";fflush(stdin);cin>>n;
	cout<<"\t\t\tNHAP DANH SACH CUA SACH "<<endl;
	nhapDs(a,n);
	cout<<"\t\t\tXUAT DANH SACH THONG TIN CUA SACH "<<endl;
	xuatDs(a,n);
	Sach dem= DemNXB(a,n);
	if(dem==0){
		cout<<"Khong sach nao co NXB Giao Duc";
	}else{
		cout<<"Co "<<dem<<" cuon sach cua NXB Giao Duc";
	}
	Sach maxGia = GiaCaoNhat(a,n);
	cout<<"\nSach co gia tien cao nhat la "<<maxGia.tensach<<" voi gia sach la: "<<maxGia.gia<<endl;
	return 0;
}
