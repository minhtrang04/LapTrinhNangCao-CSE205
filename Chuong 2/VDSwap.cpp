#include <iostream>
using namespace std;
void swap(int &a, int &b) {
int x = a;
a = b;
b = x;
}
int main() {
int a = 5, b = 100;
cout<<"Truoc: a = "<<a<<", b = "<<b<<endl;
swap(a,b);
cout<<"Sau: a = "<<a;<<", b = "<<b;

return 0;
}

