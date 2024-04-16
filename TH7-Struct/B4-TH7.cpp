#include<iostream>
#include<string>
using namespace std;
struct Sinhvien {
  int msv;
  string hoten;
  int diem;
 Sinhvien *next;
};

void inputList(int n) {
  for (int i = 0; i < n; i++) {
    Sinhvien* node = new Sinhvien();

    cout << "Nhap ma sinh vien: ";
    cin >> node->msv;

    cout << "Nhap ten sinh vien: ";
    cin >> node->hoten;

    cout << "Nhap diem sinh vien: ";
    cin >> node->diem;

    node->next = head;
    head = node;
  }
}

void printList() {
  Sinhvien* node = head;

  while (node != NULL) {
    cout << "Ma sinh vien: " << node->msv << endl;
    cout << "Ten sinh vien: " << node->hoten << endl;
    cout << "Diem sinh vien: " << node->diem << endl;

    node = node->next;
  }
}

Sinhvien* Svdiemcaonhat() {
  Sinhvien* maxStudent = head;

  for (Sinhvien* node = head; node != NULL; node = node->next) {
    if (node->diem > maxStudent->diem) {
      maxStudent = node;
    }
  }

  return maxStudent;
}

void TimSv(string name) {
  Sinhvien* node = head;

  while (node != NULL) {
    if (node->hoten == name) {
      cout << "Ma sinh vien: " << node->msv << endl;
      cout << "Ten sinh vien: " << node->hoten << endl;
      cout << "Diem sinh vien: " << node->diem << endl;

      return;
    }

    node = node->next;
  }

  cout << "Khong tim thay sinh vien co ten " << name << endl;
}

void Themvaodau(Sinhvien* student) {
  student->next = head;
  head = student;
}

void XoaSVdiemthap() {
  Sinhvien* lowestStudent = head;
  Sinhvien* prevStudent = NULL;

  for (Sinhvien* node = head; node != NULL; node = node->next) {
    if (node->diem < lowestStudent->diem) {
      lowestStudent = node;
      prevStudent = head;
    }
  }

  if (prevStudent == NULL) {
    head = lowestStudent->next;
  } else {
    prevStudent->next = lowestStudent->next;
  }

  delete lowestStudent;
}
int main (){
	int n;
	cout<<"Nhap so sinh vien: ";cin.ignore();cin>>n;
	inputList(n);
    printList();

  Sinhvien* Diemcao = Svdiemcaonhat();
  cout << "Sinh vien co diem cao nhat: " << endl;
  cout << "Ma sinh vien: " << Diemcao->msv << endl;
  cout << "Ten sinh vien: " << Diemcao->hoten << endl;
  cout << "Diem sinh vien: " << Diemcao->diem << endl;
  //Tim sv
  string name;
  cout << "Nhap ten sinh vien can tim: ";
  cin >> name;

  TimSv(name);

  XoaSVdiemthap();
  cout << "Danh sach sau khi xoa sinh vien co diem thap nhat: " << endl;
  printList();
	
	
	return 0;
}
