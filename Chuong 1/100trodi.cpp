#include<iostream>
#include<cmath>
using namespace std;
int main(){
	int n,i;
	cout<<"Nhap n: ";cin>>n;
	cout<<"Cac so tu 100 tro di la: ";
	for(i=0;i<=n;i++){
		cout<<100+i<<" ";//in ra cac so nguyen tu 100 tro di(100+i)
	}
	return 0;
}
