#include <iostream>
#include <string>

using namespace std;
int main(){
	string s; int i;
	cout<<"Nhap W = "; getline(cin,s);
	fflush(stdin);
	   // X�a kho?ng tr?ng ? d?u x�u
    while (s[0] == ' ') {
        s.erase(0, 1);
    }
    
    // X�a kho?ng tr?ng ? cu?i x�u
    while (s[s.length() - 1] == ' ') {
        s.erase(s.length() - 1, 1);
    }
    
    // X�a c�c kho?ng tr?ng li?n nhau
    for (int i = 0; i < s.length() - 1; i++) {
        if (s[i] == ' ' && s[i + 1] == ' ') {
            s.erase(i + 1, 1);
            i--;
        }
    }
    
    cout << "Chuan hoa = " << s;
	return 0;
}
