//#include "cstdio"
//#include "cstring"
//#include "algorithm"
//#include "vector"
//#include "queue"
//
//using namespace std;
//typedef long long ll;
//typedef pair<int, int> pii;//将2个数据和为一个
//const int maxn = 1e5 + 10;
//const ll inf = (ll)1e16;
//
//int n, m;
//bool vis[maxn];
//ll dis[maxn];
//vector <pii> g[maxn];
//
//struct Node {//结构体定义
//	int id; ll d;
//	Node() {}
//	Node(int id, ll d) :id(id), d(d) {}
//	bool operator < (const Node& A) const {//重载函数，优先队列排序（默认大的优先）
//		return d > A.d;//排序规则，更改为小的优先
//	}
//};
//
//void dijkstra(int st) {
//	for (int i = 1; i <= n; i++) {
//		vis[i] = 0;
//		dis[i] = inf;
//	}//vis数组记录节点是否被访问，dis记录到当前节点最短距离
//
//	dis[st] = 0;//定义起点到自身距离为0
//	priority_queue <Node> Q;//定义优先队列
//	Q.push(Node(st, 0));//将起点加入队列
//	Node nd;//定义结构体
//
//	while (!Q.empty()) {//检查优先队列是否为空，当不为空时进入循环
//		nd = Q.top(); //记录优先队列中距离队首的node
//		Q.pop();//弹出队首
//		if (vis[nd.id]) continue;//
//		vis[nd.id] = true;//
//		for (int i = 0; i < g[nd.id].size(); i++) {//循环当前点所连接边的个数次
//			int j = g[nd.id][i].first;//边的终点
//			int k = g[nd.id][i].second;//边权
//			if (nd.d + k < dis[j] && !vis[j]) {//终点未被访问且距离更短
//				dis[j] = nd.d + k;//更新最短距离
//				Q.push(Node(j, dis[j]));//优先队列插入该终点和到其的最短距离
//			}
//		}
//	}
//}
//
//int main() {
//	int x, y, z, st, ed, cas = 0;
//	scanf_s("%d", &cas);
//	while (cas--) {
//		scanf_s("%d%d%d", &n, &m, &st);
//		for (int i = 1; i <= n; i++) g[i].clear();
//		while (m--) {
//			scanf_s("%d%d%d", &x, &y, &z);//x边的起点，y边的终点，z边权
//			g[x].push_back(make_pair(y, z));//合并2个数据并存储
//			//g[y].push_back(make_pair(x, z));//双向链表
//		}
//		dijkstra(st);
//		for (int i = 1; i <= n; i++)
//			printf("%d", dis[i]);
//	}
//	return 0;
//}
