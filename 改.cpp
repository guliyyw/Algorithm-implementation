//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//int main () {
//
//Node* LocateElem(LinkList L, int x) {
//	Node* p = L->next;
//	while (p && p->data != x) {
//		p = p->next;
//	}
//	return p;
//}
//
//Node* GetElem(LinkList L, int i) {
//	int j = 1;
//	Node* p = L->next;
//	if (i == 0) {
//		return L;
//	}
//	if (i < 1) return NULL;
//	while (p && j < i) {
//		p = p->next;
//		j++;
//	}
//	return p;
//}
//
//void Insert(LinkList& L, int i, int x) {
//	Node* p = GetElem(L, i - 1);
//	Node* s = (Node*)malloc(sizeof(Node));
//	s->data = x;
//	s->next = p->next;
//	p->next = s;
//}
//
//void Delete(LinkList& L, int i) {
//	if (i < 1 || i > Length(L)) {
//		cout << "插入失败" << endl;
//		return;
//	}
//	Node* p = GetElem(L, i - 1);
//	Node* q = p->next;
//	p->next = q->next;
//	free(q);
//}
//
//bool Empty(LinkList L) {
//	if (L->next == NULL) {
//		cout << "空" << endl;
//		return true;
//	}
//	else {
//		cout << "非空" << endl;
//		return false;
//	}
//}
//
//
//int mian() {
//	cout << "建立单链表，输入-1结束" << endl;
//	LinkList L = TailInsert(L);
//	Insert(L, 2, 2);
//	cout << "在第二个位置插入2" << endl;
//	PrintList(L);
//	Delete(L, 5);
//	cout << "删除第五个结点" << endl;
//	Node* p = GetElem(L, 5);
//	cout << "第五个结点的值为：" << p->data << endl;
//	Node* q = LocateElem(L, 10);
//	cout << "值为10的结点的下一个结点的值为：" << q->next->data << endl;
//	cout << "单链表的长度" << Length(L) << endl;
//	return 0;
//}