//#include "iostream"
//#include "algorithm"
//using namespace std;
//
//const int MAXV = 1000;//最大顶点数
//const int MAXE = 10000;//最大边数
////边集定义
//struct edge {
//	int u, v;//边的2个顶点编号
//	int cost;//边权
//}E[MAXE];
//
//bool cmp(edge a, edge b) {//sort排序规则
//	return a.cost < b.cost;
//}
////并查集部分
//int father[MAXV];
//
//int findfather(int x) {//并查集查询父节点，并完成路径压缩
//	if (x == father[x]) return x;
//	else {
//		int F = findfather(father[x]);
//		father[x] = F;
//		return F;
//	}
//}
//
//int kruskal(int n, int m) {
//	int ans = 0, num_edge = 0;//ans所求边权之和，num_edge为当前生成树的边数
//	for (int i = 1; i <= n; i++) { //顶点范围[1,n]
//	//for (int i = 0; i < n; i++) { //顶点范围[0,n-1]
//		father[i] = i;//并查集初始化
//	}
//	sort(E, E + m, cmp);//所有边权按从小到大排序
//	for (int i = 0; i < m; i++) { // 枚举所有边
//		int fau = findfather(E[i].u);//查询测试两个端点所在集合的根节点
//		int fav = findfather(E[i].v);
//		if (fau != fav) {
//			father[fau] = fav;//合并集合，将测试边加入集合
//			ans = max(ans,E[i].cost);//更新边权
//			num_edge++;//当前生成树边数加一
//			if (num_edge == n - 1)break;//边数等于顶点数减一时结束
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
//	}// 输入
//	int ans = kruskal(n, m);
//	cout << ans;
//	return 0;
//}
