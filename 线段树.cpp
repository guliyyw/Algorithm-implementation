//#include<iostream>
//
//using namespace std;
//
//const int maxn = 10005;
//int nums[maxn * 4];
//int ans[maxn];
//
//void updatamax(int p) {
//	nums[p] = max(nums[p * 2], nums[p * 2 + 1]);//ȡ�������������ֵ
//}
//
//void build(int p, int l, int r) {//����
//	if (l == r) {//Ҷ�ӽڵ�
//		nums[p] = ans[l];
//		return;
//	}
//	int mid = (l + r) / 2;//���ֽ���
//	build(p * 2, l, mid);//��������Ӧ����λ��2p
//	build(p * 2 + 1, mid + 1, r);//��������Ӧ����λ��2p+1
//	updatamax(p);//��������
//}
//
////�ݹ��ѯ
//int query(int nl, int nr, int l, int r, int p) {//nl��nrΪ��ѯĿ�����䣬l��rΪ���鷶Χ��pΪ�±�
//	int res = 0;
//	if (nl <= l && r <= nr) {//���Ŀ��������ȫ��������ѯ������
//		return nums[p];
//	}
//	int mid = (l + r) / 2;
//	if (nl <= mid) {
//		res = max(query(nl, nr, l, mid, p * 2),res);
//	}
//	if (nr > mid) {
//		res = max(query(nl, nr, mid + 1, r, p * 2 + 1),res);
//	}
//	return res;
//}
//
//
//int main(void) {
//	int n;
//	scanf_s("%d", &n);
//	for (int i = 1; i <= n; i++) {//����
//		scanf_s("%d", &ans[i]);
//	}
//	build(1, 1, n);
//	int q;
//	scanf_s("%d", &q);
//	for (int i = 0; i < q; i++) {//��ѯ����
//		int x, y;
//		scanf_s("%d %d", &x,&y);
//		int num = query(x + 1, y + 1, 1, n,1);//��ѯ��������
//		printf("%d\n", num);
//	}
//	return 0;
//}