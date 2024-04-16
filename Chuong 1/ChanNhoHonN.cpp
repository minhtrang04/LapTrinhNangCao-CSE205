#include<iostream>
#include<cmath>
using namespace std;
int main(){
	int n,i,dem=0;
	cout<<"Nhap n: ";cin>>n;
	cout<<"Cac so chan nho hon "<<n<<" la: ";
	for(i=0;i<n;i++){
		if(i%2==0){
				cout<<i<<" ";
		}	
	}
	
	return 0;
}
