#include <stdio.h>
#include <string.h>
#include <iostream>
#include <conio.h>
using namespace std;
#define MAX 100

// Bài toán nhậ danh sách liên kết đơn các số nguyên. Tìm giá trị lớn nhất trong danh sách


// ============= khai báo cấu trúc danh sách liên kết đơn các số nguyên ===================
// ==== khai báo


struct node {
	int data; // dữ liệu chưa 1 cái node
	struct node* pNext; // con trỏ dùng để liên kết giữa các node với nhau 
};
typedef struct node NODE; // thay thế struct node thành NODE

// khai báo cấu trúc của danh sách liên kết đơn
struct list {
	NODE *phead; // node quản lý đầu danh sách
	NODE* ptail; // node quản lý cuối danh sách
};
typedef struct list LIST; // thay thế struct list thành LIST


// ============== Khởi tạo cấu trúc danh sách liên kết đơn số nguyên ===============
void khoitao(LIST& l) {
	// cho 2 node trỏ đến NULL - vì danh sách liên kết đơn chưa có phần tử 
	l.phead = NULL;
	l.ptail = NULL;
}
 // hàm khởi tạo 1 cái node
NODE* khoitaoNODE(int x) {
	NODE* p = new NODE; // cấp phát vùng nhớ cho NODE p
	if (p == NULL) {
		cout << "\nkhong du bo nho cap phat !";
		return NULL;
	}
	p->data = x;// truyền giá trị x vào cho data
	p->pNext = NULL;// đầu tiên khai báo node thì node đó chưa có liên kết đến node nào hết ==> con trỏ của nó sẽ trỏ đến NULL
	return p; // trả về NODE p vừa khởi tạo
}
// hàm thêm node vào đầu danh sách liên kết 
void themvaodau(LIST &l, NODE *p) {
	// danh sách đang rỗng 
	if (l.phead == NULL) {
		l.phead = l.ptail = p; // node đầu cũng chính là node cod và là p 
	}
	else {
		p->pNext = l.phead; // cho con trỏ của node cần thêm là node p liên kết node đầu - pHead
		l.phead = p;// cập nhật lại pHead chính là node p
	}
}
void themVaoCuoi(LIST& l, NODE* p) {
	// danh sách đang rỗng 
	if (l.phead == NULL) {
		l.phead = l.ptail = p; // node đầu cũng chính là node cod và là p 
	}
	else {
		p->pNext = l.phead; // cho con trỏ của node cần thêm là node p liên kết node đầu - pHead
		l.phead = p;// cập nhật lại pHead chính là node p
	}
}
int main() {

	node x;
	system("pause");
	return 0;
}