#include<iostream>
#include<string>
using namespace std;
struct time
{
	 int gio,phut,giay;
	 
};
void Nhap(time &tm){
	cout<<"Nhap gio: ";cin>>tm.gio;
	cout<<"Nhap phut: ";cin>>tm.phut;
	cout<<"Nhap giay: ";cin>>tm.giay;cout<<endl;
	 
}

int khoangCach(time time1,time time2 ){
	int kcach=(time2.gio-time1.gio)*3600+(time2.phut-time1.phut)*60+(time2.giay-time1.giay);
       return kcach;
}
int main(){
	time time1,time2;
	Nhap(time1);
	Nhap(time2);
      int kcach=khoangCach(time1,time2);
      cout<<"Khoang cach cua 2 thoi diem la: "<<kcach;
	return 0;
}
