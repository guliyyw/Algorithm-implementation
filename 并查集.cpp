//#include "iostream"//���鼯�ṹ����ʽ
//using namespace std;
//
//const int MAXV = 110;
//
//int n, m, fa[MAXV][2], num = 0;
//bool vis[MAXV] = { false };
//
//int find(int x) {//���鼯��ѯ���ڵ㣬�����·��ѹ��
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

//���鼯������ʽ
//int father[MAXV];
//
//int findfa(int x) {//���鼯��ѯ���ڵ�
//	if (x == father[x]) return x;
//	else return findfa(father[x]);
//}
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
//void unoin(int a, int b) {//�ϲ�2������
//	int faA = findfather(a);
//	int faB = findfather(b);
//	if (faA != faB) {
//		father[faA] = faB;
//	}
//}
//void init(int n) {//���鼯��ʼ��
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
//	}// ����
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

//const int  N = 1005					//ָ�����鼯���ܰ���Ԫ�صĸ����������������
//int pre[N];     					//�洢ÿ������ǰ����� 
//int rank[N];    					//���ĸ߶� 
//void init(int n)     				//��ʼ����������¼��� n�������г�ʼ�� 
//{
//	for (int i = 0; i < n; i++) {
//		pre[i] = i;     			//ÿ�������ϼ������Լ� 
//		rank[i] = 1;    			//ÿ����㹹�ɵ����ĸ߶�Ϊ 1 
//	}
//}
//int find(int x)     	 		    //���ҽ�� x�ĸ���� 
//{
//	if (pre[x] == x) return x;  		//�ݹ���ڣ�x���ϼ�Ϊ x������ xΪ����� 
//	return find(pre[x]); 			//�ݹ���� 
//}
//
//int find(int x)     				//�Ľ������㷨�����·��ѹ������ x���ϼ�ֱ�ӱ�Ϊ����㣬��ô���ĸ߶Ⱦͻ��󽵵� 
//{
//	if (pre[x] == x) return x;		//�ݹ���ڣ�x���ϼ�Ϊ x������ xΪ����� 
//	return pre[x] = find(pre[x]);   //�˴����൱�����ҵ������ rootx��Ȼ�� pre[x]=rootx 
//}
//
//bool isSame(int x, int y)      		//�ж���������Ƿ���ͨ 
//{
//	return find(x) == find(y);  	//�ж��������ĸ���㣨������Ԫ���Ƿ���ͬ 
//}
//
//bool join(int x, int y)
//{
//	x = find(x);						//Ѱ�� x�Ĵ���Ԫ
//	y = find(y);						//Ѱ�� y�Ĵ���Ԫ
//	if (x == y) return false;			//��� x�� y�Ĵ���Ԫһ�£�˵�����ǹ���ͬһ���ϣ�����Ҫ�ϲ������� false����ʾ�ϲ�ʧ�ܣ�����ִ��������߼�
//	if (rank[x] > rank[y]) pre[y] = x;		//��� x�ĸ߶ȴ��� y������ y���ϼ�Ϊ x
//	else								//����
//	{
//		if (rank[x] == rank[y]) rank[y]++;	//��� x�ĸ߶Ⱥ� y�ĸ߶���ͬ������ y�ĸ߶ȼ�1
//		pre[x] = y;						//�� x���ϼ�Ϊ y
//	}
//	return true;						//���� true����ʾ�ϲ��ɹ�
//}

