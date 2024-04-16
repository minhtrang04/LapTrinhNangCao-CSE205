#include<iostream>
#include<cmath>
using namespace std;
void Nhap (int *a,int &n){
	for(int i=0;i<n;i++){
		cout<<"a["<<i<<"]= ";cin>>a[i];
	}
	
}
void Xuat (int *a,int n){
	for(int i=0;i<n;i++){
		cout<<" "<<a[i];
	}
	
}
void ChiaBa(int *a,int n){
	int dem=0;
	for(int i=0;i<n;i++){
		if(a[i]%3==0){
			dem++;
		}
		
	}cout<<"\nCo "<<dem<<" so chia het cho 3.";
}
void TBC(int *a,int n){
	int s=0,dem1=0;double tbc=0.0;
	for(int i=0;i<n;i++){
		s=s+a[i];dem1++;
	}tbc=(double)s/dem1;
	cout<<"\nTrung binh cong day la: "<<tbc;
}
void MaxMin(int *a,int n){
	int max=a[0],min=a[0];
		for(int i=0;i<n;i++){
			if(max<a[i]){
				max=a[i];
			}
		}
		for(int i=0;i<n;i++){
			if(min>a[i]){
				min=a[i];
			}
		}
		cout<<"\nGia tri lon nhat cua mang la: "<<max;
		cout<<"\nGia tri nho nhat cua mang la: "<<min;
}
void dao (int *a,int n){
	for(int i=n-1;i>=0;i--){
		cout<<" "<<a[i];
	}
	
}
void SCP(int *a,int n){
	int demcp=0;
	cout<<"\nCac so chinh phuong trong mang: ";
	for(int i=0;i<n;i++){
		if((pow((int)sqrt(a[i]),2))==a[i]){
				cout<<" "<<a[i];demcp++;
		}
	
	}cout<<"\nCo "<<demcp<<" so chinh phuong";
}
bool ktSNT(int n){
	if(n<2){
		return false;
	}
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0){
			return false;
		}
	}return true;
}
void SNT(int *a,int n){
	cout<<"\nCac so nguyen to trong mang: ";
	for(int i=0;i<n;i++){
		if(ktSNT(a[i])){
			cout<<" "<<a[i];
		}
	}
}

int main(){
int n;
int *a=new int[50];
cout<<"Nhap N: ";cin>>n;
Nhap(a,n);
cout<<"In day so: ";
Xuat(a,n);
ChiaBa(a,n);
TBC(a,n);	
MaxMin(a,n);
cout<<"\nDay so theo thu tu nguoc lai: ";
dao(a,n);
SCP(a,n);
SNT(a,n);
	return 0;
}
