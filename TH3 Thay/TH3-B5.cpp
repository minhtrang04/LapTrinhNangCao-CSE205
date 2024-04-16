#include<iostream>
#include<cmath>
using namespace std;
int tinhPt(int n){
	float s=0;
	if(n<1){
		return -1;
	}else{
		for(int i=1;i<n;i++){
			s=s+(1.0)/i;
		}
		return s;
	}
}
int main(){
	int n;
	float s;
	cout<<"Nhap n: ";cin>>n;
	if(s==-1){
		cout << "Khong the tinh duoc." << endl;
	}else{
			cout<<"S= "<<tinhPt(n);
	}

	
	return 0;
}
