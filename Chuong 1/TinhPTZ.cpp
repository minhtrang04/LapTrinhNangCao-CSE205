#include<iostream>
#include<cmath>
using namespace std;
int main(){
	//s=1+..-  +   
	int n,i;
	int z=1;//bien z de luu trang th�i dau (+/-) cua moi
	// phan tu trong tong. Ban dau, gi� tri cua z duoc g�n = 1.
	float s=1;
	 cout<<"Nhap n: ";cin>>n;
	  for(i=1;i<=2*n;i++){
	  	s=z*1.0/i;
	  	z=z*(-1);//dao ngc dau ,dam bao cac phan tu deu co dau dg va am
	  }cout<<"Z= "<<s;
	return 0;
	/*gi� tri cua (1.0 / i) duoc nh�n voi z v� + v�o bien s
	 �ieu n�y de t�nh to�n gi� tri cua moi ph�n so trong tong.*/
}
