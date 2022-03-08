//#include <iostream>
//#include <vector>
//
//using namespace std;


//一维
//int main() {
//	int n,m;
//	scanf_s("%d %d", &n,&m);//n个元素，m个查询
//	vector<int> nums(n + 1), cha(n + 2);
//	for (int i = 1; i <=  n; i++) {//输入
//		scanf_s("%d", &nums[i]);
//		cha[i] = nums[i] - nums[i - 1];//构建差分数组
//	}
//	int l, r, c;
//	for (int i = 0; i < m; i++) {
//		scanf_s("%d %d %d", &l, &r, &c);
//		cha[l] += c;//表示将序列中[l, r]之间的每个数加上c
//		cha[r + 1] -= c;
//	}
//	for (int i = 1; i <= n; i++) {
//		cha[i] += cha[i - 1];//求前缀和运算
//		printf("%d ", cha[i]);
//	}
//	return 0;
//}
// 
// 
//二维

//void insert(int x1, int y1, int x2, int y2, int c) {
//
//}
//int main() {
//	int n, m, q;
//	scanf_s("%d %d %d", &n, &m, &q);
//	vector<int> tmp(m + 1);
//	vector<vector<int> > num(n + 1, tmp);
//	vector<vector<int> > cha(n + 2, tmp);
//	for (int i = 1; i <= n; i++) {
//		for (int l = 1; l <= m; l++) {
//			scanf_s("%d", &num[i][l]);
//
//		}
//	}
//	int x1, y1, x2, y2, c;
//	for (int i = 0; i < n; i++) {
//		scanf_s("%d %d %d %d", &x1, &y1, &x2, &y2, &c);
//		printf("%d\n", );
//	}
//	return 0;
//}