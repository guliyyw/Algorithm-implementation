//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//int main() {
//	int n,m;
//	scanf_s("%d %d", &n,&m);//n个元素，m个查询
//	vector<int> nums(n + 1), sum(n + 1);;
//	for (int i = 1; i <=  n; i++) {
//		scanf_s("%d", &nums[i]);
//		sum[i] = sum[i - 1] + nums[i];
//	}
//	int x, y;
//	for (int i = 0; i < m; i++) {
//		scanf_s("%d %d", &x, &y);
//		printf("%d\n", sum[y] - sum[x - 1]);
//	}
//	return 0;
//}
/*输入一个长度为n的整数序列。
接下来再输入m个询问，每个询问输入一对l, r。
对于每个询问，输出原序列中从第l个数到第r个数的和。
输入格式
第一行包含两个整数n和m。
第二行包含n个整数，表示整数数列。
接下来m行，每行包含两个整数l和r，表示一个询问的区间范围。
输出格式
共m行，每行输出一个询问的结果。
数据范围
1≤l≤r≤n,
1≤n,m≤100000,
−1000≤数列中元素的值≤1000
输入样例：
5 3
2 1 3 6 4
1 2
1 3
2 4
输出样例：
3
6
10
*/

//二维
//int main() {
//	int n, m, q;
//	scanf_s("%d %d %d", &n, &m, &q);
//	vector<int> tmp(m + 1);
//	vector<vector<int> > num(n + 1, tmp);
//	vector<vector<int> > sum(n + 2, tmp);
//	for (int i = 1; i <= n; i++) {
//		for (int l = 1; l <= m; l++) {
//			scanf_s("%d", &num[i][l]);
//			sum[i][l] = sum[i][l - 1] + sum[i - 1][l] + num[i][l] - sum[i - 1] [l - 1];
//		}
//	}
//	int x1, y1, x2, y2;
//	for (int i = 0; i < n; i++) {
//		scanf_s("%d %d %d %d", &x1, &y1, &x2, &y2);
//		printf("%d\n", sum[x2][y2] - sum[x2][y1 - 1] - sum[x1 - 1][y2] + sum[x1 -1 ][y1 - 1]);
//	}
//	return 0;
//}
/*输入一个n行m列的整数矩阵，再输入q个询问，每个询问包含四个整数x1, y1, x2, y2，表示一个子矩阵的左上角坐标和右下角坐标。

对于每个询问输出子矩阵中所有数的和。

输入格式
第一行包含三个整数n，m，q。

接下来n行，每行包含m个整数，表示整数矩阵。

接下来q行，每行包含四个整数x1, y1, x2, y2，表示一组询问。

输出格式
共q行，每行输出一个询问的结果。

数据范围
1≤n,m≤1000,
1≤q≤200000,
1≤x1≤x2≤n,
1≤y1≤y2≤m,
−1000≤矩阵内元素的值≤1000
输入样例：
3 4 3
1 7 2 4
3 6 2 8
2 1 2 3
1 1 2 2
2 1 3 4
1 3 3 4
输出样例：
17
27
21
*/
