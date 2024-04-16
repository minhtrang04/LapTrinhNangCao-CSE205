#include<iostream>
#include<cmath>
#include<string.h>
using namespace std;
void inTruong (){
	cout << "Truong Dai hoc Thuy Loi" << endl;
    cout << "Khoa Cong nghe thong tin" << endl;
    cout << "========================" << endl;
}

void tenLop(string ten,string lop){
	cout<<"Xin chao ban"<<endl;
    cout <<"Ten: "<< ten << endl;
    cout << "Lop:  " << lop << endl;
	
}
int main(){
	string ten,lop;
	inTruong();
	cout << "Nhap ten: ";
    getline(cin, ten);

    cout << "Nhap lop: ";
    getline(cin, lop);
    
	tenLop(ten,lop);
	
	return 0;
}
