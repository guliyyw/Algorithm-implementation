//#include <iostream>
//#include <vector>
//#include <algorithm>
//#include <queue>
//#include <string>
//
//using namespace std;
//
//int n;//棋盘大小
//int nums[14][14];
//int ans = 0;//结果
//
//bool istrue(int row, int col) {
//	if (nums[row][col] == 2) {
//		return false;
//	}
//	for (int i = 1; i < row; i++) {
//		if (nums[i][col] == 1) {//列
//			return false;
//		}
//	}
//	for (int i = row - 1, j = col - 1; i >= 1 && j >= 1; i--, j--) {
//		if (nums[i][j] == 1) {//左对角线
//			return false;
//		}
//	}
//	for (int i = row - 1, j = col + 1; i >= 1 && j <= n; i--, j++) {
//		if (nums[i][j] == 1) {//右对角线
//			return false;
//		}
//	}
//	return true;
//}
//
//void back(int row) {//row层数
//	if (row == n + 1) {
//		ans += 1;
//		return;
//	}
//	for (int col = 1; col <= n; col++) {
//		if (istrue(row, col)) {
//			nums[row][col] = 1;
//			back(row + 1);
//			nums[row][col] = 0;
//		}
//	}
//}
//
//int main() {
//	int x, y;
//	cin >> n >> x >> y;
//	nums[x - 1][y - 1] = 2;
//	nums[x - 1][y] = 2;
//	nums[x - 1][y + 1] = 2;
//	nums[x][y - 1] = 2;
//	nums[x][y] = 2;
//	nums[x][y + 1] = 2;
//	nums[x + 1][y - 1] = 2;
//	nums[x + 1][y] = 2;
//	nums[x + 1][y + 1] = 2;
//	back(1);
//	cout << ans << endl;
//	return 0;
//}