#include <iostream>
#include <string>

using namespace std;

struct Sinhvien {
    string ten;
    int diem;
    Sinhvien *tro;
};

// H�m th�m sinh vi�n v�o cuoi danh s�ch
void ThemSinhVien(Sinhvien *&dau, Sinhvien *&cuoi, string ten, int diem) {
    Sinhvien *p = new Sinhvien;
    p->ten = ten;
    p->diem = diem;
    p->tro = NULL;
    if (dau == NULL) {
        dau = p;
        cuoi = p;
    } else {
        cuoi->tro = p;
        cuoi = p;
    }
}

// H�m in ra danh s�ch sinh vi�n
void InDanhSach(Sinhvien *dau) {
    Sinhvien *p = dau;
    if (p == NULL) {
        cout << "Danh sach sinh vien rong." << endl;
    } else {
        cout << "Danh sach cac sinh vien:" << endl;
        while (p != NULL) {
            cout << p->ten << " " << p->diem << endl;
            p = p->tro;
        }
    }
}

// H�m dem so luong sinh vien c� diem >8
int DemSinhVien(Sinhvien *dau) {
    int count = 0;
    Sinhvien *p = dau;
    while (p != NULL) {
        if (p->diem > 8) {
            count++;
        }
        p = p->tro;
    }
    return count;
}

// H�m t�m v� x�a sinh vi�n trong danh s�ch
void XoaSinhVien(Sinhvien *&dau, string ten) {
    Sinhvien *p = dau;
    Sinhvien *q = NULL;
    while (p != NULL) {
        if (p->ten == ten) {
            if (q == NULL) {
                dau = p->tro;
            } else {
                q->tro = p->tro;
            }
            delete p;
            cout << "Da xoa sinh vien co ten " << ten << " khoi danh sach." << endl;
            return;
        }
        q = p;
        p = p->tro;
    }
    cout << "Khong tim thay sinh vien co ten " << ten << " trong danh sach." << endl;
}

int main() {
    Sinhvien *dau = NULL;
    Sinhvien *cuoi = NULL;
    int n;
    cout << "Nhap so luong sinh vien: ";
    cin >> n;

    // Nh?p th�ng tin v? n sinh vi�n
    for (int i = 0; i < n; i++) {
        string ten;
        int diem;
        cout << "Nhap ten sinh vien thu " << i + 1 << ": ";
        cin.ignore();
        getline(cin, ten);
        cout << "Nhap diem cua sinh vien thu " << i + 1 << ": ";
        cin >> diem;
        ThemSinhVien(dau, cuoi, ten, diem);
    }

    InDanhSach(dau);

    // �em v� in ra so luong sinh vien c� diem >8
    int count = DemSinhVien(dau);
    cout << "So luong sinh vien co diem > 8: " << count << endl;

    // Nhap v� t�m sinh vi�n theo t�n
    string tenCanTim;
    cout << "Nhap ten sinh vien can tim: ";
    cin.ignore();
    getline(cin, tenCanTim);
    XoaSinhVien(dau, tenCanTim);

    InDanhSach(dau);

    return 0;
}
