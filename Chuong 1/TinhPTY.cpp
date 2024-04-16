#include<iostream>
#include<cmath>
using namespace std;
int main(){
	int n,i;
	float y=0;
	 cout<<"Nhap n: ";cin>>n;
	  for(i=1;i<=n;i++){
	  	y=y+(1.0/i);
	  }cout<<"Y= "<<y;
	
	return 0;
}
