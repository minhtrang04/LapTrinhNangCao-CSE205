#include<iostream>
#include<cmath>
#include<string>
using namespace std;

int main(){
	string s;
	cout<<"Nhap xau: ";getline(cin,s);
	cout<<"Xau chuan hoa: ";
while(s[0] == ' ') s.append(s[0],s[1]);
    while(s[strlen(s)-1] == ' ') strcpy(&s[strlen(s)-1],&s[strlen(s)]);
       for(i=0; i< strlen(s); i++){
           if(s[i] == ' ' && s[i+1] == ' '){
              strcpy(&s[i],&s[i+1]);
              i--;
           }
       }
       cout<<"Xau sau khi chuan hoa: "<<s[i];
	
	return 0;
}
