#include<iostream>
#include<cmath>
using namespace std;
int main(){
	int n,i;
	do{
		cout<<"Nhap n: ";cin>>n;
			}while(n<0);
		cout<<"Cac so chinh phuong tu 1 den "<<n<<" la: "<<endl;
	      for(i=1;i<=n;i++){
		    	if(sqrt(i)*sqrt(i)==i)
		    	  cout<<i<<endl;
			}
	  
	return 0;
}
