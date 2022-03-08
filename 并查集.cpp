//#include "iostream"//并查集结构体形式
//using namespace std;
//
//const int MAXV = 110;
//
//int n, m, fa[MAXV][2], num = 0;
//bool vis[MAXV] = { false };
//
//int find(int x) {//并查集查询父节点，并完成路径压缩
//	if (x == fa[x][0]) return x;
//	else {
//		int F = find(fa[x][0]);
//		fa[x][0] = F;
//		return F;
//	}
//}
//
//void Union(int a, int b) {
//	int faA = find(a);
//	int faB = find(b);
//	if (faA != faB) fa[faA][0] = fa[faB][0];
//}
//
//void init(int n) {
//	for (int i = 1; i <= n; i++) {
//		fa[i][0] = i;
//		fa[i][1] = 0;
//	}
//}

//并查集数组形式
//int father[MAXV];
//
//int findfa(int x) {//并查集查询父节点
//	if (x == father[x]) return x;
//	else return findfa(father[x]);
//}
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
//void unoin(int a, int b) {//合并2个集合
//	int faA = findfather(a);
//	int faB = findfather(b);
//	if (faA != faB) {
//		father[faA] = faB;
//	}
//}
//void init(int n) {//并查集初始化
//	for (int i = 0; i < n; i++) {
//		father[i] = i;
//	}
//}

//int main() {
//	int u, v, w, n , m;
//	cin >> n >> m;
//	for (int i = 0; i < m; i++) {
//		cin >> u >> v >> w;
//		fa[u][0] = v;
//		fa[u][1] = w;
//		Union(u, v);
//	}// 输入
//	for (int i = 1; i <= n; i++) {
//		vis[find(i)] = true;
//	}
//	int ans = 0;
//	for (int i = 0; i <= n; i++) {
//		ans += vis[i];
//	}
//	if (ans != 1) {
//		cout << -1;
//	}
//	else {
//		cout << num;
//	}
//	return 0;
//}

//const int  N = 1005					//指定并查集所能包含元素的个数（由题意决定）
//int pre[N];     					//存储每个结点的前驱结点 
//int rank[N];    					//树的高度 
//void init(int n)     				//初始化函数，对录入的 n个结点进行初始化 
//{
//	for (int i = 0; i < n; i++) {
//		pre[i] = i;     			//每个结点的上级都是自己 
//		rank[i] = 1;    			//每个结点构成的树的高度为 1 
//	}
//}
//int find(int x)     	 		    //查找结点 x的根结点 
//{
//	if (pre[x] == x) return x;  		//递归出口：x的上级为 x本身，则 x为根结点 
//	return find(pre[x]); 			//递归查找 
//}
//
//int find(int x)     				//改进查找算法：完成路径压缩，将 x的上级直接变为根结点，那么树的高度就会大大降低 
//{
//	if (pre[x] == x) return x;		//递归出口：x的上级为 x本身，即 x为根结点 
//	return pre[x] = find(pre[x]);   //此代码相当于先找到根结点 rootx，然后 pre[x]=rootx 
//}
//
//bool isSame(int x, int y)      		//判断两个结点是否连通 
//{
//	return find(x) == find(y);  	//判断两个结点的根结点（即代表元）是否相同 
//}
//
//bool join(int x, int y)
//{
//	x = find(x);						//寻找 x的代表元
//	y = find(y);						//寻找 y的代表元
//	if (x == y) return false;			//如果 x和 y的代表元一致，说明他们共属同一集合，则不需要合并，返回 false，表示合并失败；否则，执行下面的逻辑
//	if (rank[x] > rank[y]) pre[y] = x;		//如果 x的高度大于 y，则令 y的上级为 x
//	else								//否则
//	{
//		if (rank[x] == rank[y]) rank[y]++;	//如果 x的高度和 y的高度相同，则令 y的高度加1
//		pre[x] = y;						//让 x的上级为 y
//	}
//	return true;						//返回 true，表示合并成功
//}

