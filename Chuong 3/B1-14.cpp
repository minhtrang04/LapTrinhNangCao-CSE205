#include<iostream>
#include<cmath>
#include<string.h>
using namespace std;
void Nhap(int n,int a[100] ){
	 for(int i=0;i<n;i++){
   	cout<<"a["<<i<<"]=";cin>>a[i];
   }
}
void Xuat(int n,int a[100]){
	cout<<"Day so vua nhap co cac so chan la: ";
   for(int i=0;i<n;i++){
   	if(a[i]%2==0)
   	cout<<a[i]<<" ";
   }cout<<endl;
}
int demSo(int n,int a[100]){
	int i,dem1=0;
	 for(int i=0;i<n;i++){
		if(a[i]>10)
				dem1++;
  	} 
  	if ( a[i]<10) {
		cout << "Khong co so nao lon hon 10" << endl;
    }else {
    	cout<<"Co "<<dem1<<" so lon hon 10";
    }
}
int timSo (int n,int a[100]){
	int i;
     cout << "\nCac so bang so truoc no cong 2: ";
       for (int i = 1; i < n; i++) {
        if (a[i] == a[i-1] + 2) {
    //a[i-1]:so truoc a[i]//a[i-1]+2::so truoc a[i] cong 2
            cout << a[i] << " "; break  ;
        }
       if(a[i]!= a[i-1] + 2){
        	cout<<"Khong co so nao thoa man dieu kien!";break;
		}
}
	cout<<endl;
}
int timBoBa(int n,int a[100]){
	int i;
	cout << "Cac bo ba so trong day thoa man Aj = Aj-1 + Aj+1: la: ";
	 for (int i = 1; i < n-1; i++){
	  if (a[i] == a[i-1] + a[i+1]){
	    cout<<a[i]<<" ";break;
		}
		 if (a[i] != a[i-1] + a[i+1]){
			cout<<"Khong co bo ba nao thoa man dieu kien!";break;
		}
	}
	
}

int main(){
	int n,i,a[100];
	do{
	   cout<<"Nhap n: ";cin>>n;
	   if(n<0 || n>=20){
	   	cout<<"Nhap lai!";
	   }
	}while(n<0 || n>=20);
	
	//Nhap mang
       Nhap(n,a);
    //Xuat mang
       Xuat(n,a);
	 //Dem cac so lon hon 10
	 demSo(n,a);
    //tim cac so bang so truoc no cong 2
      timSo(n,a);
	//bo ba so thoa man dieu kien Ai = Ai-1 + Ai+1
	timBoBa(n,a);
	
	return 0;
}
