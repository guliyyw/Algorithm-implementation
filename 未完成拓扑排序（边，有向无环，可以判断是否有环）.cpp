//#include<stdio.h>
//#include<vector>
//#include<iostream>
//#include<queue>
//using namespace std;
//
//const int maxv = 110;
//vector<int> G[maxv];//�ڽӱ�
//int n, indegree[maxv] = { 0 };//n�����������
//
//bool topologicalsort() {
//	int num = 0;//��¼�����������еĶ�����
//	queue<int> q;
//	for (int i = 0; i < n; i++) {
//		if (indegree[i] == 0) {
//			q.push(i);
//		}
//	}
//	while (!q.empty()) {
//		int u = q.front();
//		q.pop();
//		for (int i = 0; i < G[u].size(); i++) {
//			int v = G[u][i];
//			indegree[v]--;
//			if (indegree[v] == 0) {
//				q.push(v);
//			}
//		}
//		G[u].clear();
//		num++;
//	}
//	if (num == n)return true;
//	else return false;
//}
//
//int main() {
//	scanf_s("%d", &n);
//	int u, v;
//	for (int i = 0; i < n; i++) {
//		scanf_s("%d%d", &u, &v);
//		G[u].push_back(v);
//		indegree[v]++;
//	}
//	if (topologicalsort()) printf("1");
//	else printf("0");
//	return 0;
//}