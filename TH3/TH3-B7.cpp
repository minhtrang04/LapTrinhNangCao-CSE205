#include<iostream>
#include<cmath>
using namespace std;
bool ktrSCP(int n){
	int kq=(int)sqrt(n);
	if(pow(kq,2)==n){
		return true ;//n la scp
	}
	  return false ;//n khong la scp
}
int main(){
	int n,s=0,dem=0;
	float tbc=0;
	cout<<"Nhap n: ";cin>>n;
	cout<<"Cac so chinh phuong trong khoang "<<n<<" den "<<3*n<<" la: ";
  for(int i=n;i<=3*n;i++){
  //pow((int)sqrt(i),2)==i
  	if(ktrSCP(i)){
  		cout<<i<<" ";
  		s=s+i;dem++;
	  }
  }	cout<<endl;
  if(dem>0){
		tbc=float(s)/dem;
	}
  	cout<<"Tong cac so chinh phuong la: "<<s<<endl;
	cout<<"Trung binh cong cac so chinh phuong la: "<<tbc;
	
	
	
	return 0;
}
