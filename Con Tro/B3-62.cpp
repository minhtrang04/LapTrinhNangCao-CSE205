#include<iostream>

using namespace std;

int* nhapMang(int& size) {
    cout << "Nhap so luong phan tu cua mang: ";
    cin >> size;

    int* mang = new int[size];

    cout << "Nhap gia tri cua tung phan tu trong mang:" << endl;
    for (int i = 0; i < size; i++) {
        cout << "Mang[" << i << "] = ";
        cin >> mang[i];
    }

    return mang;
}

void hienThiMang(int* mang, int size) {
    cout << "Cac phan tu cua mang:" << endl;
    for (int i = 0; i < size; i++) {
        cout << mang[i] << " ";
    }
    cout << endl;
}

int tinhTong(int* mang, int size) {
    int tong = 0;
    for (int i = 0; i < size; i++) {
        tong += mang[i];
    }
    return tong;
}

void themPhanTu(int*& mang, int& size, int x, int k) {
    // T?o m?ng m?i c� k�ch thu?c l?n hon 1 don v?
    int* newMang = new int[size + 1];

    // Sao ch�p gi� tr? t? m?ng cu sang m?ng m?i
    for (int i = 0; i < k; i++) {
        newMang[i] = mang[i];
    }

    // Th�m ph?n t? x v�o sau ph?n t? ? v? tr� k
    newMang[k] = x;

    // Sao ch�p ph?n c�n l?i c?a m?ng cu sang m?ng m?i
    for (int i = k + 1; i < size + 1; i++) {
        newMang[i] = mang[i - 1];
    }

    // Gi?i ph�ng b? nh? c?a m?ng cu
    delete[] mang;

    // C?p nh?t m?ng v� k�ch thu?c m?i
    mang = newMang;
    size += 1;
}

void xoaPhanTu(int*& mang, int& size, int x) {
    int count = 0; // Bi?n d?m s? ph?n t? c?n x�a

    // �?m s? ph?n t? c?n x�a
    for (int i = 0; i < size; i++) {
        if (mang[i] > x) {
            count++;
        }
    }

    // T?o m?ng m?i c� k�ch thu?c gi?m di s? ph?n t? c?n x�a
    int newSize = size - count;
    int* newMang = new int[newSize];

    int index = 0; // Bi?n ch? m?c c?a m?ng m?i

    // Sao ch�p c�c ph?n t? nh? hon ho?c b?ng x sang m?ng m?i
    for (int i = 0; i < size; i++) {
        if (mang[i] <= x) {
            newMang[index] = mang[i];
            index++;
        }
    }

    // Gi?i ph�ng b? nh? c?a m?ng cu
    delete[] mang;

    // C?p nh?t m?ng v� k�ch thu?c m?i
    mang = newMang;
    size = newSize;
}

int main() {
    int* mang;
    int size;

    mang = nhapMang(size);
    hienThiMang(mang, size);

    int tong = tinhTong(mang, size);
    cout << "Tong cac phan tu trong mang: " << tong << endl;

    int x, k;
    cout << "Nhap gia tri phan tu muon them (x): ";
    cin >> x;
    cout << "Nhap vi tri muon them phan tu (k): ";
    cin >> k;
    themPhanTu(mang, size, x, k);
    hienThiMang(mang, size);

    int giaTriXoa;
    cout << "Nhap gia tri can xoa cac phan tu lon hon: ";
    cin >> giaTriXoa;
    xoaPhanTu(mang, size, giaTriXoa);
    hienThiMang(mang, size);

    delete[] mang;

    return 0;
}

