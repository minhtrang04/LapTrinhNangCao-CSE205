#include<iostream>
#include<cmath>
bool ktraSNT(int n){
	if (n <= 1) {
		return false;
	}
	for (int i = 2; i <= sqrt(n); i++){
			if (n % i == 0)
			return false;
	}
	return true;
}
using namespace std;
int main(){
	int n;
	cout<<"Nhap n: ";cin>>n;
	if (ktraSNT(n) == true)
	{
		cout << "So " << n << " la so nguyen to!!!!";
	}
	else
	{
		cout << "So " << n << " khong phai nguyen to!!!!";
	}
	return 0;
}
