#include <iostream>
#include <string>

using namespace std;

struct Sinhvien {
    string ten;
    int diem;
    Sinhvien *tro;
};
//Ham tao 1 nut co dl=gtri
Sinhvien *Taonut(string t,int d){
	Sinhvien *q=new Sinhvien;
	q->ten=t;
	q->diem=d;
	q->tro=NULL;
	return q;
}
//Ham khoi tao DS rong
void Taods(Sinhvien *&head){
	head=NULL;
	tail=NULL;
}
void ThemcuoiDs(Sinhvien *&head, Sinhvien *&tail, string t, int d){
	Sinhvien *p;
	p=Taonut(t,d);
	if (head == NULL) {
        head = p;
        tail = p;
    }else{
    	tail->tro=p;
    	tail=p;
	}
}
void InDs(Sinhvien *head){
	Sinhvien *r;
	r=head;
	while(r!=NULL){
		cout<<r->ten<<"\t"<<r->diem<<endl;
		r=r->tro;
	}
}
void Dem8(Sinhvien *head){
	int d=0;
	Sinhvien *r;
	r=head;
	while(r!=NULL){
		if(r->diem>8){
			d++;
		}
		r=r->tro;
	}
	if(d==0){
		cout<<"\nKhong co sinh vien nao co diem >8";
	}else{
		cout<<"\nCo "<<d<<" sinh vien co diem >8";
	}
}
//Ham xoa nut con tro p
void Xoap(Sinhvien *head,Sinhvien *p){
	if(head == NULL){
		cout<<"Khong co nut can xoa";
	}else{
		Sinhvien *q=head;
		while(q->tro!=p)
		q=q->tro;
		q->tro=p->tro;
	}
	delete p;
}
void Timxoa(Sinhvien *&head,string x){
	if (head == NULL){
		cout<<"Khong co sinh vien nao trong danh sach";
	}else{
		Sinhvien *r=head;
		while (r!=NULL){
			if(r->ten==x)
			Xoap(head,r);
			r=r->tro;
		}
	}
}
int main(){
	Sinhvien *head;
	Sinhvien *tail;
	int n;
    cout << "Nhap so luong sinh vien: ";
    cin >> n;
	//Nhap tt svien
	 for (int i = 0; i < n; i++) {
        string ten;
        int diem;
        cout << "Nhap ten sinh vien thu " << i + 1 << ": ";
        cin.ignore();
        getline(cin, ten);
        cout << "Nhap diem cua sinh vien thu " << i + 1 << ": ";
        cin >> diem;
        ThemcuoiDs(head,tail,t,d);
    }
    InDs(head);
    Dem8(head);
    // Nhap và tìm sinh viên theo tên
    string x;
    cout << "Nhap ten sinh vien can tim: ";
    cin.ignore();
    getline(cin, x);
	Timxoa(head,x);
	InDs(head);
	return 0;
}
