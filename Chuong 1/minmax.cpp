#include<iostream>
#include<cmath>
using namespace std;
int main(){
	int n;
	int min;
	int max;
	cout<<"Nhap n: ";cin>>n;
	//dat lam moc ,thiet lap gtri ban dau cua min,max dua tren gtri dau tien nguoi dung nhap vao
	min=n;max=n;
	while(n!=0){ 
	  cout<<"Nhap n: ";cin>>n;
	    if(n==0){
	 	  break;
	 } if(min>n){
	 	  min=n;
	 } if (max<n){
	      max=n;  
	 }
	  };
	cout<<"GTLN: "<<max<<endl;
	cout<<"GTNN: "<<min;
	return 0;
}
