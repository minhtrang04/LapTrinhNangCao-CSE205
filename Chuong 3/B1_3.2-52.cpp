#include <iostream>

using namespace std;
void inmang(int *arr,int n){
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
}
void minmax(int *arr,int n){
	int max = arr[0];
  for (int i = 1; i < n; i++) {
    if (arr[i] > max) {
      max = arr[i];
    }
  }

  // Tìm giá tr? nh? nh?t
  int min = arr[0];
  for (int i = 1; i < n; i++) {
    if (arr[i] < min) {
      min = arr[i];
    }
  }
  cout<<"\nGia tri lon nhat la: "<<max;
  cout<<"\nGia tri nho nhat la: "<<min<<endl;
  
}
void sapxep(int *arr,int n){
	for (int i = 0; i < n; i++) {
    for (int j = i + 1; j < n; j++) {
      if (arr[i] > arr[j]) {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
      }
    }
  }
}
void timTSuat(int *arr,int n){
		int max = 1,maxvalue;int dem=0;
  for (int i = 0; i < n; i++) {
  	for (int j = i; j < n; j++)
    if (arr[i] == arr[j]) {
      dem++;
    }
    if(dem>max){
    	max=dem;
    	maxvalue=arr[i];
	}
  }
  
  cout<<"\nSo "<<maxvalue<<" xuat hien nhieu nhat la "<<max;
  
	
}
int main() {
  int *arr=new int[20];
  int n;
  cout<<"Nhap n: ";cin>>n;

  // Nh?p 10 giá tr? nguyên
  for (int i = 0; i < n; i++) {
    cout << "Nhap gia tri nguyen thu " << i + 1 << ": ";
    cin >> arr[i];
  }
  minmax(arr,n);
  // S?p x?p m?ng theo th? t? tang d?n
  sapxep(arr,n);
  cout<<"Gia tri theo thu tu tang dan la: ";
  inmang(arr,n);
   timTSuat(arr,n);
  

  return 0;
}
