#include<iostream>
#include<cmath>
using namespace std;
int main(){
	int n;
	double s=1.0;
	do {
		cout<<"Nhap n: ";cin>>n;
	}while(n<1);
	
	 for (int i = 1; i <= n; i++) {
        s += 1.0 / (i * (i + 1));
    }
	cout<<"S = "<<s;
	
	return 0;
}
