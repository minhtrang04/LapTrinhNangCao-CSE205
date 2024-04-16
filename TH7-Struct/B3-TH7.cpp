#include <iostream>
#include <cmath>
using namespace std;

struct Node {
  float value;
  Node *next;
};

Node *head = NULL;

void NhapDanhSach(int n) {
  for (int i = 0; i < n; i++) {
    Node *node = new Node();
    cout << "Nhap phan tu thu " << i + 1 << ": ";
    cin >> node->value;
    node->next = head;
    head = node;
  }
}

void InDanhSach() {
  Node *node = head;
  while (node != NULL) {
    cout << node->value << " ";
    node = node->next;
  }
  cout << endl;
}

void InSoChia() {
  Node *node = head;
  while (node != NULL) {
    if (fmod(node->value, 3) == 0) {
      cout << node->value << " ";
    }
    node = node->next;
  }
  cout << endl;
}
bool isPrime(float number) {
  if (number < 2) {
    return false;
  }
  for (int i = 2; i <= sqrt(number); i++) {
    if (fmod(number, i) == 0) {
      return false;
    }
  }
  return true;
}

int DemSoNguyenTo() {
  int count = 0;
  Node *node = head;
  while (node != NULL) {
    if (isPrime(node->value)) {
      count++;
    }
    node = node->next;
  }
  return count;
}

bool ktDayTang() {
  if (head == NULL || head->next == NULL) {
    return true;
  }
  Node *node = head;
  while (node->next != NULL) {
    if (node->value >= node->next->value) {
      return false;
    }
    node = node->next;
  }
  return true;
}

void XoaDauDS() {
  if (head == NULL) {
    return;
  }
  Node *node = head;
  head = head->next;
  delete node;
}

void ThemcuoiDS(float x) {
  Node *node = new Node();
  node->value = x;
  node->next = NULL;
  if (head == NULL) {
    head = node;
    return;
  }
  Node *last = head;
  while (last->next != NULL) {
    last = last->next;
  }
  last->next = node;
}

int main() {
  int n;
  cout << "Nhap so luong phan tu: ";
  cin >> n;
  NhapDanhSach(n);
  InDanhSach();
  InSoChia();
  cout << "So luong so nguyen to trong danh sach: " << DemSoNguyenTo() << endl;
  if (ktDayTang()) {
    cout << "Day tang" << endl;
  } else {
    cout << "Day khong tang" << endl;
  }
  XoaDauDS();
  InDanhSach();
  float x;
  cout << "Nhap so x: ";
  cin >> x;
  ThemcuoiDS(x);
  InDanhSach();
  return 0;
}

