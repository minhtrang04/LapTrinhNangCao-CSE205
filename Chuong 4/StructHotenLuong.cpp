#include<iostream>
#include<vector>
#include<string>
using namespace std;
struct nVien
{
	 string hoten;
	 int luong;
	 
};
nVien NhapThongtin() {
    nVien nv;
    cout << "Nhap ho ten: ";
    getline(cin, nv.hoten);
    cout << "Nhap luong: ";
    cin >> nv.luong;
    cin.ignore();
    return nv;
}
void XuatThongtin(const vector<nVien>& nv) {
    for (int i = 0; i < nv.size(); i++) {
        cout << "Nhan vien " << i + 1 << ": " << nv[i].hoten ;
		cout<<"Luong: " << nv[i].luong << endl;
    }
}

nVien TimNhanVienLuongCaoNhat(const vector<nVien>& nv) {
    nVien nvLuongCaoNhat = nv[0];
    for (int i = 1; i < nv.size(); i++) {
        if (nv[i].luong > nvLuongCaoNhat.luong) {
            nvLuongCaoNhat = nv[i];
        }
    }
    return nvLuongCaoNhat;
}

int main(){
  // Nhap vào so luong nhân viên
  int n;
  cout << "Nhap so luong nhan vien: ";
  cin >> n;cin.ignore();
  vector<nVien> nv(n);
    for (int i = 0; i < n; i++) {
        cout << "Nhap thong tin nhan vien " << i + 1 << ":" << endl;
        nv[i] = NhapThongtin();
    }

    cout << "Danh sach nhan vien:" << endl;
    XuatThongtin(nv);

    nVien nvLuongCaoNhat = TimNhanVienLuongCaoNhat(nv);
    cout << "Nhan vien co muc luong cao nhat: " << nvLuongCaoNhat.hoten<<endl;
	cout<<"Luong: " << nvLuongCaoNhat.luong << endl;

return 0;	
	
}

