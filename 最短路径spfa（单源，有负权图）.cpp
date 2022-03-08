//#include <iostream>
//#include "algorithm"
//#include "vector"
//#include "queue"
//using namespace std;
//
//const int maxv = 1010;//最大顶点数
//const int inf = 1000000000;
//
//struct node {
//	int v, dis;//v为临接边的目标顶点，dis临接边的边权
//	node(int _v, int _dis) : v(_v), dis(_dis) { }//构造函数
//};
//
//int n, m, st, ed, weight[maxv];//n顶点数,m边数，st和ed分别为起点和终点，weight数组为点权
//vector<node> adj[maxv];//图g的邻接表
//int d[maxv], num[maxv], w[maxv];
//bool inq[maxv];
//
//bool spfa(int s) {
//	memset(inq, false, maxv);
//	memset(num, 0, sizeof(num));
//	fill(d, d + maxv, inf);
//	queue<int> q;
//	q.push(s);
//	inq[s] = true;
//	num[s]++;
//	d[s] = 0;
//	while (!q.empty()) {
//		int u = q.front();//获取队首元素
//		q.pop();
//		inq[u] = false;
//		for (int j = 0; j < adj[u].size(); j++) {//遍历所以u的临界边
//			int v = adj[u][j].v;
//			int dis = adj[u][j].dis;
//			if (d[u] + dis < d[v]) {//更新数组
//				d[v] = d[u] + dis;
//				if (!inq[v]) {
//					q.push(v);
//					inq[v] = true;
//					num[v]++;
//					if (num[v] >= n) {
//						return false;//有可达负循环
//					}
//				}
//			}
//		}
//	}
//	return true;
//}
//
//int main() {
//	scanf_s("%d%d%d%d", &n, &m, &st, &ed);
//	//for (int i = 0; i < n; i++) {
//	//	scanf_s("%d", &weight[i]);
//	//}
//	int u, v, wt;
//	for (int i = 0; i < m; i++) {//邻接矩阵存储图
//		scanf_s("%d%d%d", &u, &v, &wt);
//		adj[u].push_back(node(v, wt));
//		adj[u].push_back(node(u, wt));
//	}
//	if (spfa(st)) {
//		printf("%d %d\n", num[ed], w[ed]);
//	}
//	else {
//		printf("有可达负环");
//	}
//	return 0;
//}