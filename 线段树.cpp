//#include<iostream>
//
//using namespace std;
//
//const int maxn = 10005;
//int nums[maxn * 4];
//int ans[maxn];
//
//void updatamax(int p) {
//	nums[p] = max(nums[p * 2], nums[p * 2 + 1]);//取左右子树的最大值
//}
//
//void build(int p, int l, int r) {//建树
//	if (l == r) {//叶子节点
//		nums[p] = ans[l];
//		return;
//	}
//	int mid = (l + r) / 2;//二分建树
//	build(p * 2, l, mid);//左子树对应数组位置2p
//	build(p * 2 + 1, mid + 1, r);//右子树对应数组位置2p+1
//	updatamax(p);//更新数组
//}
//
////递归查询
//int query(int nl, int nr, int l, int r, int p) {//nl，nr为查询目标区间，l，r为数组范围，p为下标
//	int res = 0;
//	if (nl <= l && r <= nr) {//如果目标区间完全包含被查询的区间
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
//	for (int i = 1; i <= n; i++) {//输入
//		scanf_s("%d", &ans[i]);
//	}
//	build(1, 1, n);
//	int q;
//	scanf_s("%d", &q);
//	for (int i = 0; i < q; i++) {//查询输入
//		int x, y;
//		scanf_s("%d %d", &x,&y);
//		int num = query(x + 1, y + 1, 1, n,1);//查询函数调用
//		printf("%d\n", num);
//	}
//	return 0;
//}