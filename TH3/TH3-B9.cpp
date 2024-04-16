#include<iostream>
#include<cmath>
using namespace std;
bool ktrSNT(int n){
	if(n<=1){
		return false;
	}
     for(int i=2;i<sqrt(n);i++){
     	if(n%i==0){
     		return false;
		 }
	 }
	return true;
}
int main(){
	int n;
	int s=0,dem=0;
	float tbc=0;
	cout<<"Nhap n: ";cin>>n;
	cout<<"Cac so nguyen to trong day la: ";
	for(int i=0;i<=n;i++){
		if(ktrSNT(i)){
			cout<<i<<" ";
			s=s+i;dem++;
		}
	}cout<<endl;
	if(dem>0){
		tbc=float(s)/dem;
	}
	cout<<"Tong day so nguyen to la: "<<s<<endl;
	cout<<"Trung binh cong day so nguyen to la: "<<tbc<<endl;
	return 0;
}
