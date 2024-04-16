#include<iostream>
#include<vector>
using namespace std;

int main(){
	float n;
	
	cout<<"Nhap n: ";cin>>n;
	//Day A
	vector<float> A(n);
	for(int i=0;i<A.size();i++){
		cout<<"A["<<i<<"]=";cin>>A[i];
	}
	// In dao nguwoc
	vector<float> C;
	for(int i=n-1;i>=0;i--){
			C.push_back(A[i]);
	}
	cout<<"Day dao nguoc: ";
		for(int i=0;i<C.size();i++){
		cout<<C[i]<<" ";
	}
	
	
	
	
	return 0;
}
