#include<iostream>
#include<cmath>
using namespace std;
int main(){
	int i;
	  for(i=0;i<=99;i++){
	      cout<<i<<" \t";//in ra gtri bien i
	  	if((i+1)%10==0  ){//kiem tra xem i có phai vtri so 10 ko
	  		cout<<endl;
		  }
	  }  
	  return 0;
	/*i+1 :vì i bat dau tu 0 , %10 :toan tu chia lay phan du xem no
	phai so cuoi cung cua dong chua .VD;i=9=>(9+1)%10=0 là vtri t10*/
	  
}
