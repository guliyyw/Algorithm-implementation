//#include <iostream>
//#include <algorithm>
//#include <vector>
//
//using namespace std;
////二重背包问题
//int main() {
//	int bagv, bagw;
//	scanf_s("%d %d", &bagv, &bagw);
//	int n;
//	scanf_s("%d", &n);
//	vector<int> value(n), weight(n), power(n);//体积质量卡路里
//	for (int i = 0; i < n; i++) {//物品重量（相当于体积）
//		scanf_s("%d %d %d",&value[i], &weight[i], &power[i]);
//	}
//	vector<vector<int>> dp(bagv + 1, vector<int>(bagw + 1, 0));
//	for (int i = 0; i < n; i++) {
//		for (int j = bagv; j >= value[i]; j--) {
//			for (int k = bagw; k >= weight[i]; k--) {
//				dp[j][k] = max(dp[j][k], dp[j - value[i]][k - weight[i]] + power[i]);
//			}
//		}
//	}
//	printf("%d", dp[bagv][bagw]);
//}