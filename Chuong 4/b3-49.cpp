#include <iostream>
#include <cmath>

using namespace std;
struct Node{
	int data;//du lieu cua node
	Node *next;//dchi node tiep theo
};
typedef Node* node;
//tao node
node taoNode(int x){
	node temp=new Node();
	temp->data=x;
	temp->next=NULL;
	return temp;
}
//Tao ds rong
node DSrong() {
  return NULL;
}
//them phan tu vao cuoi ds
void themCuoi(node &a ,int x){
	node temp=taoNode(x);
	if(a==NULL){
		a=temp;
	}else{
		node p=a;
		while(p->next!=NULL){
			p=p->next;
		}
		p->next=temp;
	}
}
int demSoChan(node a) {
  int count = 0;
  while (a != NULL) {
    if (a->data % 2 == 0) {
      count++;
    }
    a = a->next;
  }
  return count;
}
void print(node head){
	while (head != NULL) {
    cout << head->data << " ";
    head = head->next;
  }
}
int main(){
	node head=NULL;
	int n, x;

  // Nhap sa luong so nguyên
  cout << "Nhap so luong so nguyen: ";
  cin >> n;

  // Nhap các so nguyên
  for (int i = 0; i < n; i++) {
    cout << "Nhap so nguyen thu " << i + 1 << ": ";
    cin >> x;
    themCuoi(head, x);
  }
  //in cac so
  cout<<"Day so: ";
 print(head);

  // Ðem so luong các so chan trong danh sách
  int count = demSoChan(head);

  // In ra sl các so chan trong danh sách
  cout << "\nSo luong cac so chan la: " << count;

	
	return 0;
}
