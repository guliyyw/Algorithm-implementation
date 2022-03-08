//#include "iostream"
//#include "vector"
//#include "algorithm"
//#include "set"
//using namespace std;
//
//const int MAXV = 1000;//最大顶点数
//const int INF = 1000000000;//极大值
//
//int n, m, G[MAXV][MAXV];//n顶点数，G矩阵2点之间距离（双向则对称相等，单向则各自输入）
//int d[MAXV];//顶点到集合的距离，数组下标即为顶点编号
//bool vis[MAXV] = { false };//顶点是否被访问
//
//int prim() {
//	fill(d, d + MAXV, INF);
//	d[0] = 0;
//	int num = 0;
//	for (int i = 0; i < n; i++) { //循环n次，顶点数
//		int u = -1, MIN = INF;
//		for (int j = 0; j < n; j++) { // 取离集合最小的值
//			if (!vis[j] && d[j] < MIN) {
//				u = j;
//				MIN = d[j];
//			}
//		}
//		if (u == -1) return -1; //没有就返回-1，剩下的点与集合不连接
//		vis[u] = true;//该顶点访问过
//		num += d[u];//求最短路径长度，可以改为求其他
//		for (int v = 0; v < n; v++) {//更新剩下点与集合的距离
//			if (!vis[v] && G[u][v] != INF && G[u][v] < d[v]) {
//				d[v] = G[u][v];
//			}
//		}
//	}
//	return num;
//}
//
//int main() {
//	int u, v, w;
//	cin >> n >> m;
//	fill(G[0], G[0] + MAXV * MAXV, INF);//邻接矩阵全部取极大值
//	for (int i = 0; i < m; i++) {
//		cin >> u >> v >> w;
//		G[u][v] = w;//顶点编号0到n-1
//		G[v][u] = w;//双向加上
//	}// 输入
//	int num = prim();
//	cout << num;
//	return 0;
//}
