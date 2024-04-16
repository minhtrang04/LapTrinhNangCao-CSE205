#include<iostream>
#include<cmath>
#include<string.h>
using namespace std;
int doiTime(int gio,int phut,int giay){
	int tongGiay=gio * 3600 + phut * 60 + giay;
	return tongGiay;
}
int tinhKhoangThoiGian(int h1, int m1, int s1, int h2, int m2, int s2) {
    int khoang_cach = doiTime(h2, m2, s2) - doiTime(h1, m1, s1);
    return khoang_cach;
}
int main(){
   // int gio,int phut,int giay;
   // cout<<"Nhap gio:";cin>>gio;
   // cout<<"Nhap phut:";cin>>phut;
   // cout<<"Nhap giay:";cin>>giay;
    int khoang_cach_thoi_gian = tinhKhoangThoiGian(3, 40, 55, 9, 35, 45);
     cout << "Khoang cach thoi gian tu 3:40:55 den 9:35:45 là " << khoang_cach_thoi_gian << " giay" << endl;


	return 0;
}
