#include<iostream>
#include<cmath>
using namespace std;
template <typename T>
void sWap(T &x,T &y){
	T temp=x;
	x=y;
	y=temp;
}
int main(){
	int n,m;
	float a,b;
	cout<<"Nhap so nguyen thu nhat: ";cin>>n;
	cout<<"Nhap so nguyen thu hai: ";cin>>m;
	cout<<"Nhap so thuc thu nhat: ";cin>>a;
	cout<<"Nhap so thuc thu hai: ";cin>>b;
	sWap(n,m);sWap(a,b);
	cout<<"So nguyen thu nhat sau khi hoan doi la: "<<n<<endl;
	cout<<"So nguyen thu hai sau khi hoan doi la: "<<m<<endl;
	cout<<"So thuc thu nhat sau khi hoan doi la: "<<a<<endl;
	cout<<"So thuc thu hai sau khi hoan doi la: "<<b;
	
}
