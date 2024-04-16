#include<iostream>
#include<cmath>
using namespace std;

double tinhPt(double x){
    if(abs(x)>2){
        return (pow(x,5)+(5*(pow(x,3)))+x+1);
    }else{
        return (sqrt(exp(2*x+1)+1)+7);
    }
}
int main(){
    double x,y;
    cout<<"Nhap x: ";
    cin>>x;
    cout<<"Nhap y: ";
    cin>>y;
    double kq=pow((tinhPt(x)+tinhPt(y)),2);
    cout<<"(f(x)+f(y))^2= "<<kq<<endl;
    cout<<"Cac cap <x,f(x)>: "<<endl;
    
    double i=-5.0;
    while(i<=3.0){
    	  double f=tinhPt(i);
        cout<<"<"<<i<<","<<f<<"> "<<endl;
    	i=i+=0.1;
	}
   //for (double i=-5.0;i<=3.0;i+=0.1){
      
  //  }
    return 0;
}
