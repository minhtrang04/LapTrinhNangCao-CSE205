#include<iostream>
#include<cmath>
using namespace std;
// Hàm tính s? ti?n di?n ph?i tr? d?a trên s? di?n nang tiêu th?
int TienDien(int soDien) {
    if (soDien < 250) {
        return soDien * 2000;
    } else if (soDien >= 250 && soDien < 400) {
        return soDien * 3000;
    } else if (soDien >= 400 && soDien < 500) {
        return soDien * 4000;
    } else {
        return soDien * 5000;
    }
}

int main() {
    int n; // So ho gia dình
    cout << "Nhap so ho gia dinh: ";
    cin >> n;

    int minTienDien = INT_MAX; // So tien dien ít nhat
    for (int i = 0; i < n; i++) {
        int soDien;
        cout << "Nhap so dien tieu thu cua ho gia dinh thu " << i + 1 << ": ";
        cin >> soDien;

        int tienDien = TienDien(soDien);
        if (tienDien < minTienDien) {
            minTienDien = tienDien;
        }
    }

    cout << "So tien dien it nhat la: " << minTienDien << " dong" << endl;

    return 0;
}
