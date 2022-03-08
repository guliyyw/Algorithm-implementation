//#include "cstdio"
//#include "cstring"
//#include "algorithm"
//using namespace std;
//
//const int MAXV = 205;
//const int INF = 1000000000;
////n顶点数，m边数
//
//int n, m, dis[MAXV][MAXV];
//
//void Floyd() { 
//	for (int k = 0; k < n; k++) {
//		for (int i = 0; i < n; i++) {
//			for (int j = 0; j < n; j++) {
//				if (dis[i][k] != INF && dis[k][j] != INF && dis[i][k] + dis[k][j] < dis[i][j]) {
//					dis[i][j] = dis[i][k] + dis[k][j];
//				}
//			}
//		}
//	}
//}
//
//int main() {
//	scanf_s("%d%d", &n, &m);
//	int u, v, l;
//	fill(dis[0], dis[0] + MAXV * MAXV, INF);
//	for (int i = 0; i < n; i++) {
//		dis[i][i] = 0;
//	}
//	for (int i = 0; i < m; i++) {
//		scanf_s("%d%d%d", &u, &v, &l);
//		if (dis[u][v] > l) {//去重
//			dis[u][v] = l;
//		}
//	}
//	Floyd();
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < n; j++) {
//			printf("%d ", dis[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}
