//#include "iostream"
//#include "algorithm"
//using namespace std;
//
//const int MAXV = 1000;//��󶥵���
//const int MAXE = 10000;//������
////�߼�����
//struct edge {
//	int u, v;//�ߵ�2��������
//	int cost;//��Ȩ
//}E[MAXE];
//
//bool cmp(edge a, edge b) {//sort�������
//	return a.cost < b.cost;
//}
////���鼯����
//int father[MAXV];
//
//int findfather(int x) {//���鼯��ѯ���ڵ㣬�����·��ѹ��
//	if (x == father[x]) return x;
//	else {
//		int F = findfather(father[x]);
//		father[x] = F;
//		return F;
//	}
//}
//
//int kruskal(int n, int m) {
//	int ans = 0, num_edge = 0;//ans�����Ȩ֮�ͣ�num_edgeΪ��ǰ�������ı���
//	for (int i = 1; i <= n; i++) { //���㷶Χ[1,n]
//	//for (int i = 0; i < n; i++) { //���㷶Χ[0,n-1]
//		father[i] = i;//���鼯��ʼ��
//	}
//	sort(E, E + m, cmp);//���б�Ȩ����С��������
//	for (int i = 0; i < m; i++) { // ö�����б�
//		int fau = findfather(E[i].u);//��ѯ���������˵����ڼ��ϵĸ��ڵ�
//		int fav = findfather(E[i].v);
//		if (fau != fav) {
//			father[fau] = fav;//�ϲ����ϣ������Ա߼��뼯��
//			ans = max(ans,E[i].cost);//���±�Ȩ
//			num_edge++;//��ǰ������������һ
//			if (num_edge == n - 1)break;//�������ڶ�������һʱ����
//		}
//	}
//	if (num_edge != n - 1) return -1;
//	else return ans;
//}
//
//int main() {
//	int n, m;
//	cin >> n >> m;
//	for (int i = 0; i < m; i++) {
//		cin >> E[i].u >> E[i].v >> E[i].cost;
//	}// ����
//	int ans = kruskal(n, m);
//	cout << ans;
//	return 0;
//}
