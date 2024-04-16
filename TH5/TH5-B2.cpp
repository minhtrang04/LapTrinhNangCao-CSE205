#include<iostream>
#include<cmath>
#include <string>
using namespace std;
int main(){
	string c;
		cout<<"Nhap xau ky tu: ";getline(cin,c);
		//(ten bien).empty();
	 if(c.empty()){
	 	cout<<"Xau rong";
	 }else{
        cout << "Noi dung xau la: " << c << endl;
	 	cout<<"Do dai xau la: "<<c.size()<<endl;//co the dung c.length
	 	cout<<"Xau dao nguoc la: ";
	 	for(int i=c.size()-1;i>0;i--){
	 		cout<<c[i];
		 }
	 	
	 }
		 
		return 0;
}
