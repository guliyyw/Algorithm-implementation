//#include "cstdio"
//#include "cstring"
//#include "algorithm"
//#include "vector"
//#include "set"
//using namespace std;
//
//const int MAXV = 1010;//��󶥵���
//const int INF = 1000000000;
//
//struct Node {
//	int v, dis;//vΪ�ٽӱߵ�Ŀ�궥�㣬dis�ٽӱߵı�Ȩ
//	Node(int _v, int _dis) : v(_v), dis(_dis) { }//���캯��
//};
//vector<Node> Adj[MAXV];//ͼG���ڽӱ�
//
//int n, m, st, ed, weight[MAXV];//n������,m������st��ed�ֱ�Ϊ�����յ㣬weight����Ϊ��Ȩ
//int d[MAXV], w[MAXV], num[MAXV];//d��㵽��������·�����ȣ�w����Ȩ֮�ͣ�num���·������
//set<int> pre[MAXV];
//
//void bellman(int s) { //sΪ���
//	fill(d, d + MAXV, INF);
//	memset(num, 0, sizeof(num));
//	memset(w, 0, sizeof(w));
//	d[s] = 0;//��㵽�Լ��ľ���Ϊ0
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
//	//for (int u = 0; u < n; u++) {//��ÿ�����ж�
//	//	for (int j = 0; j < Adj[u].size(); j++) {
//	//		int v = Adj[u][j].v;
//	//		int dis = Adj[u][j].dis;
//	//		if (d[u] + dis == d[v]) {//���·�������Լ��٣�֤���и���
//	//			return false;
//	//		}
//	//	}
//	//}
//	//return true;//����d������ֵ�ﵽ����
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