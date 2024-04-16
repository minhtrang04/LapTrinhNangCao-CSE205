#include<iostream>
#include<string>

using namespace std;

void nhapDanhSach(string* ds, int size) {
    for (int i = 0; i < size; i++) {
        cout << "Nhap ten sinh vien thu " << i + 1 << ": ";
        getline(cin, ds[i]);
    }
}

void sapXepDanhSach(string* ds, int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = i + 1; j < size; j++) {
            if (ds[i] > ds[j]) {
                string temp = ds[i];
                ds[i] = ds[j];
                ds[j] = temp;
            }
        }
    }
}

void inDanhSach(string* ds, int size) {
    cout << "Danh sach sau khi sap xep:" << endl;
    for (int i = 0; i < size; i++) {
        cout << ds[i] << endl;
    }
}

int main() {
    int size;
    cout << "Nhap so luong sinh vien: ";
    cin >> size;
    cin.ignore(); // Xoa bo dem nhap truoc do

    string* danhSach = new string[size];

    nhapDanhSach(danhSach, size);
    sapXepDanhSach(danhSach, size);
    inDanhSach(danhSach, size);

    delete[] danhSach;

    return 0;
}

