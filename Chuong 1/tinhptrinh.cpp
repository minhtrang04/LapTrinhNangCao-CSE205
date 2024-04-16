#include<iostream>
#include<cmath>
using namespace std;
int main(){
	int n,i;
	float x, s=1;
	cout<<"Nhap x: ";cin>>x;
	cout<<"Nhap n: ";cin>>n;
	for(i=1;i<=n;i++){
		s=s+(pow(x,i))/(i+1);
	}cout<<"S= "<<s;
	return 0;
}
