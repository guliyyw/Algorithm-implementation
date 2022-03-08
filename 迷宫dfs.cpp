//#include <iostream>
//#include <string>
//#include <algorithm>
//
//using namespace std;
//
//const int MAXV = 105;
//int G[MAXV][MAXV];
//int m, n;
//
//void dfs(int x,int y) {
//	if (x > 0 && y > 0 && x <= m && y <= n && G[x][y] == 1) {
//		G[x][y] = 0;
//		dfs(x, y - 1);
//		dfs(x, y + 1);
//		dfs(x - 1, y);
//		dfs(x - 1, y + 1);
//		dfs(x - 1, y - 1);
//		dfs(x + 1, y);
//		dfs(x + 1, y + 1);
//		dfs(x + 1, y - 1);
//	}
//	else {
//		return;
//	}
//}
//int main() {
//	while (scanf_s("%d %d",&m,&n)!= EOF && m + n != 0) {
//		for (int i = 1; i <= m; i++) {
//			string x;
//			cin >> x;
//			for (int j = 0; j < n; j++) {
//				if (x[j] == '*') {
//					G[i][j] = 0;
//				}
//				else {
//					G[i][j] = 1;
//				}
//			}
//		}
//		int ans = 0;
//		for (int i = 1; i <= m; i++) {
//			for (int j = 1; j <= n; j++) {
//				if (G[i][j] == 1) {
//					dfs(i, j);
//					ans++;
//				}
//			}
//		}
//		printf("%d\n", ans);
//	}
//	return 0;
//}