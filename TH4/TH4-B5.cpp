#include <iostream>
using namespace std;
void tinhGtr(int n, int a[], int x) {
    int giaTri = 0;
    for (int i = 0; i <= n; i++) {
        giaTri += a[i] * pow(x, i);
    }
    cout << "Gia tri cua da thuc la: " << giaTri << endl;
}

int main() {
    int n;
    cout << "Nhap n: ";
    cin >> n;

    int a[n+1];
    for (int i = 0; i <= n; i++) {
        cout << "a[" << i << "]= ";
        cin >> a[i];
    }

    int x;
    cout << "Nhap x: ";
    cin >> x;

    tinhGtr (n, a, x);

    return 0;
}

