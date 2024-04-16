#include<iostream>
#include<cmath>
#include<string>
using namespace std;
//Cach nay ktra tung kí tu tren xau goc
bool ktrDx(string c){
	for(int i=0;i<=c.size()/2;i++){
		if(c[i]!=c[c.size()-i-1])
//kiem tra 1 ktu tu dau vao và tu cuoi vao neu 2 ktu khac nhau thi tra ve false 
		   return false;
	}return true;
}

int main(){
	string c;
	cout<<"Nhap xau ky tu: ";getline(cin,c);
	if(ktrDx(c)){
		cout<<"Xau doi xung";
	}else{
		cout<<"Xau khong doi xung";
	}
	
	return 0;
}
