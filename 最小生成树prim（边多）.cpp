//#include "iostream"
//#include "vector"
//#include "algorithm"
//#include "set"
//using namespace std;
//
//const int MAXV = 1000;//��󶥵���
//const int INF = 1000000000;//����ֵ
//
//int n, m, G[MAXV][MAXV];//n��������G����2��֮����루˫����Գ���ȣ�������������룩
//int d[MAXV];//���㵽���ϵľ��룬�����±꼴Ϊ������
//bool vis[MAXV] = { false };//�����Ƿ񱻷���
//
//int prim() {
//	fill(d, d + MAXV, INF);
//	d[0] = 0;
//	int num = 0;
//	for (int i = 0; i < n; i++) { //ѭ��n�Σ�������
//		int u = -1, MIN = INF;
//		for (int j = 0; j < n; j++) { // ȡ�뼯����С��ֵ
//			if (!vis[j] && d[j] < MIN) {
//				u = j;
//				MIN = d[j];
//			}
//		}
//		if (u == -1) return -1; //û�оͷ���-1��ʣ�µĵ��뼯�ϲ�����
//		vis[u] = true;//�ö�����ʹ�
//		num += d[u];//�����·�����ȣ����Ը�Ϊ������
//		for (int v = 0; v < n; v++) {//����ʣ�µ��뼯�ϵľ���
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
//	fill(G[0], G[0] + MAXV * MAXV, INF);//�ڽӾ���ȫ��ȡ����ֵ
//	for (int i = 0; i < m; i++) {
//		cin >> u >> v >> w;
//		G[u][v] = w;//������0��n-1
//		G[v][u] = w;//˫�����
//	}// ����
//	int num = prim();
//	cout << num;
//	return 0;
//}
