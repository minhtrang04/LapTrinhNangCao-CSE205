#include <iostream>
#include <string>

using namespace std;
int main(){
	string s; int i;
	cout<<"Nhap W = "; getline(cin,s);
	fflush(stdin);
	   // Xóa kho?ng tr?ng ? d?u xâu
    while (s[0] == ' ') {
        s.erase(0, 1);
    }
    
    // Xóa kho?ng tr?ng ? cu?i xâu
    while (s[s.length() - 1] == ' ') {
        s.erase(s.length() - 1, 1);
    }
    
    // Xóa các kho?ng tr?ng li?n nhau
    for (int i = 0; i < s.length() - 1; i++) {
        if (s[i] == ' ' && s[i + 1] == ' ') {
            s.erase(i + 1, 1);
            i--;
        }
    }
    
    cout << "Chuan hoa = " << s;
	return 0;
}
