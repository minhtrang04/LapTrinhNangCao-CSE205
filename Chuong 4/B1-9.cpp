#include<iostream>
#include<vector>
using namespace std;
void inVector(vector <int> V){
	for(int i=0;i<V.size();i++){
		cout<<V[i]<<" ";
	}
}
int main(){
	int n;
	
	cout<<"Nhap n: ";cin>>n;
	//Day A
	vector<int> A(n);
	for(int i=0;i<A.size();i++){
		cout<<"A["<<i<<"]=";cin>>A[i];
	}
	//Day B
	vector<int> B;
	
	for(int i=0;i<A.size();i++){
		if(A[i]%2==0){//ktra ptu thu i cua mang A phai schan ko
			B.push_back(A[i]);//Neu co thi phan tu do se duoc them vao mang B
		}
	}
	cout<<"Day so chan la: " ;
	inVector(B);
	//In dao nguoc

	
	
	return 0;
}
