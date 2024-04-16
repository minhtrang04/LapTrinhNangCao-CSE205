#include<iostream>
#include<cmath>
using namespace std;
int main(){
	int n,i,s=0,dem=0;
	float tbc=0;
	cout<<"Nhap n: ";cin>>n;
	for(i=1;i<=n;i++){
		if(i%2==0)
		s=s+i;
		dem++;
	}
	if(dem==0){
		cout<<"Khong co so chan tu 1 den "<<n<<endl;
	}else{
		tbc=(float)s/dem;
		cout<<"Tong day so la: "<<s<<endl;
		cout<<"Trung binh cong day so la: "<<tbc<<endl;
	}
	return 0;
	//c2:for(i=0;i<=n;i+=2)
}
