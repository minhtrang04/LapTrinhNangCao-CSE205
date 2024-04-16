#include<iostream>
#include<cmath>
using namespace std;
int main(){
	int n,i,a[100];
	cout<<"Nhap n: ";cin>>n;
	//Nhap mang
   for(int i=0;i<n;i++){
   	cout<<"a["<<i<<"]=";cin>>a[i];
   }
    //Xuat mang
  cout<<"Day so vua nhap la: ";
   for(int i=0;i<n;i++){
   	cout<<a[i]<<" ";
   }cout<<endl;
	//dem cac so chia het cho 3
	int dem=0;
	for(int i=0;i<n;i++){
		if(a[i]%3==0)
		dem++;
  	} 
	 //Dem cac so lon hon 10
	 int dem1=0;
	 for(int i=0;i<n;i++){
		if(a[i]>10)
				dem1++;
  	} 
  	if (a[i]%3!=0 && a[i]<10) {
        cout << "Khong co so nao chia het cho 3" << endl;
		cout << "Khong co so nao lon hon 10" << endl;
    }else {
    	cout<<"Co "<<dem<<" so chia het cho 3"<<endl;
    	cout<<"Co "<<dem1<<" so lon hon 10";
    }
	
	return 0;
}
