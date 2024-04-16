#include<iostream>
#include<cmath>
using namespace std;
int main(){
	int n;
	cout<<"Nhap so tien muon rut: ";cin>>n;
	if(n>5000000||n%50000!=0){
		cout<<"So tien khong hop le!";
		return 0;
	}
	   int tien500000 = n / 500000;
    n %= 500000;

    int tien200000 = n / 200000;
    n %= 200000;

    int tien100000 = n / 100000;
    n %= 100000;

    int tien50000 = n / 50000;

    int tong = tien500000 + tien200000 + tien100000 + tien50000;

    cout << "So to tien it nhat can tra: " << tong << endl;
	
	return 0;
}
