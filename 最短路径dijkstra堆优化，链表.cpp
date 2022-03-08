//#include "cstdio"
//#include "cstring"
//#include "algorithm"
//#include "vector"
//#include "queue"
//
//using namespace std;
//typedef long long ll;
//typedef pair<int, int> pii;//��2�����ݺ�Ϊһ��
//const int maxn = 1e5 + 10;
//const ll inf = (ll)1e16;
//
//int n, m;
//bool vis[maxn];
//ll dis[maxn];
//vector <pii> g[maxn];
//
//struct Node {//�ṹ�嶨��
//	int id; ll d;
//	Node() {}
//	Node(int id, ll d) :id(id), d(d) {}
//	bool operator < (const Node& A) const {//���غ��������ȶ�������Ĭ�ϴ�����ȣ�
//		return d > A.d;//������򣬸���ΪС������
//	}
//};
//
//void dijkstra(int st) {
//	for (int i = 1; i <= n; i++) {
//		vis[i] = 0;
//		dis[i] = inf;
//	}//vis�����¼�ڵ��Ƿ񱻷��ʣ�dis��¼����ǰ�ڵ���̾���
//
//	dis[st] = 0;//������㵽�������Ϊ0
//	priority_queue <Node> Q;//�������ȶ���
//	Q.push(Node(st, 0));//�����������
//	Node nd;//����ṹ��
//
//	while (!Q.empty()) {//������ȶ����Ƿ�Ϊ�գ�����Ϊ��ʱ����ѭ��
//		nd = Q.top(); //��¼���ȶ����о�����׵�node
//		Q.pop();//��������
//		if (vis[nd.id]) continue;//
//		vis[nd.id] = true;//
//		for (int i = 0; i < g[nd.id].size(); i++) {//ѭ����ǰ�������ӱߵĸ�����
//			int j = g[nd.id][i].first;//�ߵ��յ�
//			int k = g[nd.id][i].second;//��Ȩ
//			if (nd.d + k < dis[j] && !vis[j]) {//�յ�δ�������Ҿ������
//				dis[j] = nd.d + k;//������̾���
//				Q.push(Node(j, dis[j]));//���ȶ��в�����յ�͵������̾���
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
//			scanf_s("%d%d%d", &x, &y, &z);//x�ߵ���㣬y�ߵ��յ㣬z��Ȩ
//			g[x].push_back(make_pair(y, z));//�ϲ�2�����ݲ��洢
//			//g[y].push_back(make_pair(x, z));//˫������
//		}
//		dijkstra(st);
//		for (int i = 1; i <= n; i++)
//			printf("%d", dis[i]);
//	}
//	return 0;
//}
