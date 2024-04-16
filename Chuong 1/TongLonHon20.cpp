#include<iostream>
#include<cmath>
using namespace std;
int main(){
	int n,i;
	int s=0,dem=0;
	 do{
	 	cout<<"Nhap n: ";cin>>n;
		cout<<"Cac so trong day: ";
	 	for(i=0;i<=n;i++){
	 		s=s+i;dem++; 
			 cout<<i<<" ";
		 }cout<<endl;
	 }while(s<=20);
    cout<<"Tong S: "<<s<<endl;
    cout << "So cac so da cong: " << dem <<endl;
  
	
	return 0;
}
