#include <iostream>
#include <string>
using namespace std;

int main(){
	
	
	
	string str;
	
	cout <<"Nhap mot xau ki tu: ";
	
	getline(cin, str);
	
	for(int i=0; i< str.size(); i++){
		if(str[0] > = 'a' && str[0] <= 'z'){
			str[0] = str[0] - 32;
		}
	}
	cout << "In hoa:" << str;
	return 0;
}
