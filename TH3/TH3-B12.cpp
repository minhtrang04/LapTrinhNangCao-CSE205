#include <iostream>
#include <cmath>
using namespace std;
int main(){
	int n;
	float p=1, s=0;
	cout<<"Nhap n: ";cin>>n;
	for(int i=1;i<=n;i++){
		p=p*i;
		s=s+1.0/p;
	}
		cout<<"S = "<<s;
	return 0;
}
