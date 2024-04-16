#include<iostream>
#include<cmath>
using namespace std;
int main(){
	int n;
	int s= 0;
	float tb = 0;
	cout<<"nhap n: ";cin>>n;
	for (int i = n;i>0;i--){
		s+= i;
		tb = s/n;
	}
    cout<<"Tong day so: "<<s<<endl;
    cout<<"Trung binh cong day so: "<<tb;
	return 0;
}
