#include <iostream>

using namespace std;
void NhapMang(int a[4][4]){
	cout << "Nhap gia tri cho ma tran 4x4:" << endl;//dong:ngang,cot:doc
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            cout << "a[" << i << "][" << j << "]: ";
            cin >> a[i][j];
        }
    }
	
}
void InBang(int a[4][4]){
	for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            cout << a[i][j]<<" \t ";
        }cout<<endl;
    }
}
void Ingiatri(int a[4][4]) {
    cout << "Cac gia tri > 5 tren dong i=3 o dong cuoi: ";
    for (int j = 0; j < 4; j++) {
        if (a[3][j] > 5) {
            cout << a[3][j] << " ";
        }
    }
    cout<<endl;
}

void demSo(int a[4][4]) {
    int demduong = 0;
    int demam = 0;

    for (int i = 0; i < 4; i++) {
        if (a[i][2] > 0) {
            demduong++;
        } else if (a[i][2] < 0) {
            demam++;
        }
    }

    cout << "So luong so duong tren cot j=2: " << demduong << endl;
    cout << "So luong so am tren cot j=2: " << demam << endl;
}
//Tinh tong hoac tbc nhuwng khi in gtri o ham main
void DuongCheoChinh(int a[4][4]){//truyen tham tri
	 int cheo=0;
	for (int i = 0; i < 4; i++){
		cheo+=a[i][i];
	}
	cout<<"Tong cac phan tu tren hang dau la: "<<cheo<<endl;
}

void TongTbc(int a[4][4]){
	int s=0,dem=0;
	float tbc=0;
		for (int j = 0; j < 4; j++){
			s+=a[0][j];dem++;
		}
	 tbc=(float)s/dem++;
	 cout<<"Tong cac phan tu tren hang dau la: "<<s<<endl;
	 cout<<"Trung binh cong cac phan tu tren hang dau la: "<<tbc<<endl;
	 
	
}

int main() {
    int a[4][4];

    // Nhap gia tri cho ma tran 4x4
    NhapMang(a);
     //In mang
     InBang(a);
     
    // In cac gia tri > 5 tren dong i=3
    Ingiatri(a);

    // Dem so luong so duong va so am tren cot j=2
    demSo(a);
    //Tong cac ptu duong cheo
    DuongCheoChinh(a);
    
    //Tong va tbc
    TongTbc(a);
    return 0;
}

