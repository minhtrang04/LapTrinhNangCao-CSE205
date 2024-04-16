#include <iostream>
#include <cmath>

using namespace std; 
struct Node{
	int data;//gtr ptu
	Node*next;
};
//tao nut moi vs dl x
Node *taoNode(int x) {
  Node *newNode = new Node();//tao node ms
  newNode->data = x;
  newNode->next = NULL;
  return newNode;
}
//them vao dau ds
void *Themdau(Node* head,int x){
	 Node *newNode = taoNode(x);
  newNode->next = head;
  head = newNode;
}
int sumList(Node *head){
	int sum = 0;
  Node *current = head;
  while (current != NULL) {
    sum += current->data;
    current = current->next;
  }
  return sum;
}

int main() {
  int n, x;
  cout<<"Nhap n: ";
  cin >> n;
  Node* head = NULL;
  for (int i = 0; i < n; i++) {
    cout<<"Nhap x: ";cin >> x;
    Themdau(head,x);
  }
  int sum=sumList(head);
  cout << "Tong cac so trong danh sach la: " << sum << endl;
  return 0;
}
