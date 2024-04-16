#include<iostream>
#include<cmath>
using namespace std;
int main(){
	//s=1+..-  +   
	int n,i;
	int z=1;//bien z de luu trang thái dau (+/-) cua moi
	// phan tu trong tong. Ban dau, giá tri cua z duoc gán = 1.
	float s=1;
	 cout<<"Nhap n: ";cin>>n;
	  for(i=1;i<=2*n;i++){
	  	s=z*1.0/i;
	  	z=z*(-1);//dao ngc dau ,dam bao cac phan tu deu co dau dg va am
	  }cout<<"Z= "<<s;
	return 0;
	/*giá tri cua (1.0 / i) duoc nhân voi z và + vào bien s
	 Ðieu này de tính toán giá tri cua moi phân so trong tong.*/
}
