#include<iostream>
#include<cmath>
#include<string.h>
using namespace std;
float LogA(float x,float a){
	return log(x)/log(a);
}
int main(){
	float x,a;
	// Tính và in ra màn hình Log2(4)
    x = 4;
    a = 2;
    float kq = LogA(x, a);
    cout << "Log" << a << "(" << x << ") = " << kq << endl;
    
    // Tính và in ra màn hình Log10(100)
    x = 100;
    a = 10;
    kq = LogA(x, a);
    cout << "Log" << a << "(" << x << ") = " << kq << endl;

    // Tính và in ra màn hình Log3(27)
    x = 27;
    a = 3;
    kq = LogA(x, a);
    cout << "Log" << a << "(" << x << ") = " << kq << endl;

	
	return 0;
}
