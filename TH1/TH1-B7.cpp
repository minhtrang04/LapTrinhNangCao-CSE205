#include<iostream>
#include<cmath>
using namespace std;
int main(){
	float x1,x2,x3,y1,y2,y3;
	float AB,BC,AC;
	float cvi,p;
	cout<<"Nhap toa do diem A(x1,y1): ";cin>>x1>>y1;
	cout<<"Nhap toa do diem B(x2,y2): ";cin>>x2>>y2;
	cout<<"Nhap toa do diem C(x3,y3): ";cin>>x3>>y3;
	//|ab|=sqrt((xAB)^2+(yAB)^2)//cmtt
	AB=sqrt((pow(x2-x1,2))+(pow(y2-y1,2)));
	BC=sqrt((pow(x3-x2,2))+(pow(y3-y2,2)));
	AC=sqrt((pow(x3-x1,2))+(pow(y3-y1,2)));
	cvi=AB+BC+AC;
	p=(AB+BC+AC)/2;
		cout << "Chu vi tam giac ABC la: " <<cvi <<endl;
		cout << "Dien tich tam giac ABC la: " <<sqrt(p*(p-AB)*(p-BC)*(p-AC));
	return 0;
}
