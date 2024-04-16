#include<iostream>
#include<cmath>
using namespace std;
int main(){
	int a,b,c;
	cout << "Nhap ngay: ";cin >> a;
    cout << "Nhap thang: ";cin >>b;
    cout << "Nhap nam: ";cin >>c;
	if (c < 1000 || b < 1 || b > 12 ) {
        cout<<"Ngay thang nam khong hop le!"<<endl;
        return 0;
    }
    int songay;
    switch(b){
    	case 1: case 3: case 5: case 7:case 8:case 10:case 12:
    	    songay=30;break;
		case 4:case 6:case 9:case 11:
		   songay=31;
		case 2:	
    	  if(c%4==0&&c%100!=0 || c%400==0){
    	  	songay=29;
		  }else{
		  	songay=28;
		  }
	}
    if(a>=songay || a<=0){
    	 cout<<"Ngay thang nam khong hop le!"<<endl;
	}else{
		 cout<<"Ngay thang nam hop le!"<<endl;
	}
    
    if (a == songay && b == 12) {
            a = 1;//chinh a=1 ngay dau thang
            b = 1;//chinh b thanh thang thu 1
            c++;//duoc tang len 1 nam tiep
        } else if (a == songay) {
            a = 1;//chinh a=1 ngay dau thang
            b++;//tang thang bien b len 1 dv de sang thang tiep
        } else {
            a++;//tang ngay len de lay ngay tiep
        }
        
        // In ra ngày tiep theo
        cout << "Ngay tiep theo: " << a << "/" << b << "/" << c << endl;
    
	return 0;
}
