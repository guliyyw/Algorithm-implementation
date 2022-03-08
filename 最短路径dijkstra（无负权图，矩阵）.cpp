//#include "cstdio"
//#include "cstring"
//#include "algorithm"
//using namespace std;
//
//const int MAXV = 1010;
//const int INF = 1000000000;
//n��������m������s��㣬t�յ�
//G�������cost���Ѿ���
//d[]������̾���
//
//int n, m, s, t, G[MAXV][MAXV],cost[MAXV][MAXV];
//int d[MAXV], c[MAXV], pre[MAXV];
//bool vis[MAXV] = { false };//�����Ƿ����
//
//void Dijkstra(int s) { //sΪ���
//	fill(d, d + MAXV, INF);
//	d[s] = 0;//��㵽�Լ��ľ���Ϊ0
//	for (int i = 0; i < n; i++) {
//		int u = -1, MIN = INF;
//		for (int j = 0; j < n; j++) {
//			if (!vis[j] && d[j] < MIN) {
//				u = j;
//				MIN = d[j];
//			}
//		}
//		if (u == -1) {
//			return;
//		}
//		vis[u] = true;
//		for (int v = 0; v < n; v++) {
//			if (!vis[v] && G[u][v] != INF) {
//				if (d[u] + G[u][v] < d[v]) {
//					d[v] = d[u] + G[u][v];//����v�����С����
//				}
//				else if (d[u] + G[u][v] == d[v] && c[v] > c[u] + cost[u][v]) {
//					c[v] = c[u] + cost[u][v];
//					pre[v] = u;
//				}
//			}
//		}
//	}
//	return;
//}
//
//int main() {
//	scanf_s("%d%d", &n, &m);
//	int u, v, l;
//	fill(G[0], G[0] + MAXV * MAXV, INF);
//	for (int i = 0; i < m; i++) {
//		scanf_s("%d%d%d", &u, &v, &l);
//		if (G[u][v] > l) {//ȥ��
//			G[u][v] = l;
//			G[v][u] = l;
//		}
//	}
//	scanf_s("%d%d", &s, &t);
//	Dijkstra(s);
//	printf("%d\n", d[t]);
//	return 0;
//}
