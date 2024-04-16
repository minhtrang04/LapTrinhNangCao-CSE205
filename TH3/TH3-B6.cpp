#include<iostream>
#include<cmath>
using namespace std;
int main(){
		int n,dem=0;
		int s=0;
		float tbc=0;
	cout<<"Nhap n:";cin>>n;
	cout<<"Cac uoc so cua "<<n<<" la: ";
	for(int i=1;i<=n;i++){
		if(n%i==0){
			cout<<i<<" ";
			s=s+i;
			tbc=(float)s/n;
		}
	}cout<<endl;
	cout<<"Tong cac uoc so la: "<<s<<endl;
	cout<<"Trung binh cong cac uoc so la: "<<tbc<<endl;
	
	return 0;
}
