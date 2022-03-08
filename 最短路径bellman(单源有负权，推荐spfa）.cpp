//#include "cstdio"
//#include "cstring"
//#include "algorithm"
//#include "vector"
//#include "set"
//using namespace std;
//
//const int MAXV = 1010;//最大顶点数
//const int INF = 1000000000;
//
//struct Node {
//	int v, dis;//v为临接边的目标顶点，dis临接边的边权
//	Node(int _v, int _dis) : v(_v), dis(_dis) { }//构造函数
//};
//vector<Node> Adj[MAXV];//图G的邻接表
//
//int n, m, st, ed, weight[MAXV];//n顶点数,m边数，st和ed分别为起点和终点，weight数组为点权
//int d[MAXV], w[MAXV], num[MAXV];//d起点到各点的最短路径长度，w最大点权之和，num最短路径条数
//set<int> pre[MAXV];
//
//void bellman(int s) { //s为起点
//	fill(d, d + MAXV, INF);
//	memset(num, 0, sizeof(num));
//	memset(w, 0, sizeof(w));
//	d[s] = 0;//起点到自己的距离为0
//	w[s] = weight[s];
//	num[s] = 1;
//	for (int i = 0; i < n - 1; i++) {
//		for (int u = 0; u < n; u++) {
//			for (int j = 0; j < Adj[u].size(); j++) {
//				int v = Adj[u][j].v;
//				int dis = Adj[u][j].dis;
//				if (d[u] + dis < d[v]) {
//					d[v] = d[u] + dis;
//					w[v] = w[u] + weight[v];
//					num[v] = num[u];
//					pre[v].clear();
//					pre[v].insert(u);
//				}
//				else if (d[u] + dis == d[v]) {
//					if (w[u] + weight[v] > w[v]) {
//						w[v] = w[u] + weight[v];
//					}
//					pre[v].insert(u);
//					num[v] = 0;
//					set<int>::iterator it;
//					for (it = pre[v].begin(); it != pre[v].end(); it++) {
//						num[v] += num[*it];
//					}
//				}
//			}
//		}
//	}
//	//for (int u = 0; u < n; u++) {//对每条边判断
//	//	for (int j = 0; j < Adj[u].size(); j++) {
//	//		int v = Adj[u][j].v;
//	//		int dis = Adj[u][j].dis;
//	//		if (d[u] + dis == d[v]) {//最短路径还可以减少，证明有负环
//	//			return false;
//	//		}
//	//	}
//	//}
//	//return true;//数组d的所有值达到最优
//}
//
//int main() {
//	scanf_s("%d%d%d%d", &n, &m, &st, &ed);
//	for (int i = 0; i < n; i++) {
//		scanf_s("%d", &weight[i]);
//	}
//	int u, v, wt;
//	for (int i = 0; i < m; i++) {
//		scanf_s("%d%d%d", &u, &v, &wt);
//		Adj[u].push_back(Node(v,wt));
//		Adj[u].push_back(Node(u,wt));
//	}
//	bellman(st);
//	printf("%d %d\n", num[ed], w[ed]);
//	return 0;
//}