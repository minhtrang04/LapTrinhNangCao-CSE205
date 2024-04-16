#include<iostream>
#include<cmath>
using namespace std;
int main(){
	int i, j, m,n;//m:hang doc,n:hang ngang
 cout<<"Nhap kich thuoc ma tran m x n: ";
        cin>>m>>n;
        //NHap so
	int a[20][30];
    cout << "Nhap ma tran:\n";
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cout << "a[" << i << "][" << j << "] = ";
            cin >> a[i][j];
        }
    }

	   //Tinh S
	 int s[20][30];
	 for(int i=0;i<m;i++){
       for(int j=0;j<n;j++){
       	if(a[i][j]>0){
       		s[i][j]=1;
		   }else if(a[i][j]==0){
       		s[i][j]=0;
		   }else if(a[i][j]<0){
       		s[i][j]=-1;
		   }
	   }
	}
	     //Xuat ra S
	     cout<<"Ma tran S:\n";
	     for(int i=0;i<m;i++){
	     	 for(int j=0;j<n;j++){
	     	 	 cout << s[i][j] << "\t ";
			  }cout<<endl;
		 }
	
	return 0;
}
