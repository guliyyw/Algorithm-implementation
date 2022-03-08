//#include <iostream>
//#include "algorithm"
//#include "vector"
//#include "queue"
//using namespace std;
//
//const int maxv = 1010;//��󶥵���
//const int inf = 1000000000;
//
//struct node {
//	int v, dis;//vΪ�ٽӱߵ�Ŀ�궥�㣬dis�ٽӱߵı�Ȩ
//	node(int _v, int _dis) : v(_v), dis(_dis) { }//���캯��
//};
//
//int n, m, st, ed, weight[maxv];//n������,m������st��ed�ֱ�Ϊ�����յ㣬weight����Ϊ��Ȩ
//vector<node> adj[maxv];//ͼg���ڽӱ�
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
//		int u = q.front();//��ȡ����Ԫ��
//		q.pop();
//		inq[u] = false;
//		for (int j = 0; j < adj[u].size(); j++) {//��������u���ٽ��
//			int v = adj[u][j].v;
//			int dis = adj[u][j].dis;
//			if (d[u] + dis < d[v]) {//��������
//				d[v] = d[u] + dis;
//				if (!inq[v]) {
//					q.push(v);
//					inq[v] = true;
//					num[v]++;
//					if (num[v] >= n) {
//						return false;//�пɴ︺ѭ��
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
//	for (int i = 0; i < m; i++) {//�ڽӾ���洢ͼ
//		scanf_s("%d%d%d", &u, &v, &wt);
//		adj[u].push_back(node(v, wt));
//		adj[u].push_back(node(u, wt));
//	}
//	if (spfa(st)) {
//		printf("%d %d\n", num[ed], w[ed]);
//	}
//	else {
//		printf("�пɴ︺��");
//	}
//	return 0;
//}