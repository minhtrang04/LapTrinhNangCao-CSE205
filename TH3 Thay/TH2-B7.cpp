#include<iostream>
#include<cmath>
using namespace std;
  //PTDT di qua 2diem  A(xA, yA) và B(xB, yB) dc tính :
  //(y - yA)/(yB - yA) = (x - xA)/(xB - xA)
  //thay x=xm ta tim duoc ym
float tinhToado(float xa,float ya,float xb,float yb,float xm){
	float ym=((xm - xa) / (xb - xa)) * (yb - ya) + ya;
return ym;;
}
int main(){
	float xa, ya, xb, yb, xm;
	cout << "Nhap toa do diem A : ";
    cin >> xa >> ya;
    cout << "Nhap toa do diem B : ";
    cin >> xb >> yb;
    cout << "Nhap diem xM : ";
    cin >> xm;
    float ym= tinhToado(xa, ya, xb, yb, xm);
    cout << "Toa do yM cua diem M la: " << ym<<endl;
	return 0;
}
