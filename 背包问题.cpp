//#include <iostream>
//#include <algorithm>
//#include <vector>
//
//using namespace std;
//
////01���������ά����ⷨ
//int erwei(int n,int bagweight,vector<int> weight,vector<int>value) {//�Ƽ���һά
//	vector<vector<int>> dp(weight.size(), vector<int>(bagweight + 1, 0));
//	for (int i = weight[0]; i < bagweight; i++) {
//		dp[0][i] = value[0];
//	}
//	for (int i = 1; i < n; i++) {//�ȱ�����Ʒ���ٱ������������Ի���˳��
//		for (int j = 0; j <= bagweight; j++) {
//			if (j < weight[i]) {
//				dp[i][j] = dp[i - 1][j];
//			}
//			else {
//				dp[i][j] = max(dp[i - 1][j], dp[i - 1][j - weight[i]] + value[i]);
//			}
//		}
//	}
//	return dp[n - 1][bagweight];
//}
//
////01��������һά����ⷨ
//int yiwei(int n, int bagweight, vector<int> weight, vector<int>value) {//�Ƽ�ʹ��
//	vector<int> dp(bagweight + 1, 0);
//	for (int i = 0; i < n; i++) {//�ȱ�����Ʒ���ٱ������������ɻ���
//		for (int j = bagweight; j >= weight[i]; j--) {//���������ʼ��ǰ����
//			dp[j] = max(dp[j], dp[j - weight[i]] + value[i]);
//		}
//	}
//	return dp[bagweight];
//}
//
////��ȫ�������⣬ÿ����Ʒ���Է����� 
//int wanquan(int n, int bagweight, vector<int> weight, vector<int>value) {
//	vector<int> dp(bagweight + 1, 0);
//	for (int i = 0; i < weight.size(); i++) { //������Ʒ
//		for (int j = weight[i]; j <= bagweight; j++) { //������������
//			dp[j] = max(dp[j], dp[j - weight[i]] + value[i]);
//		}
//	}
//	//for (int j = 0; j <= bagWeight; j++) { // ������������
//	//	for (int i = 0; i < weight.size(); i++) { // ������Ʒ
//	//		if (j - weight[i] >= 0) dp[j] = max(dp[j], dp[j - weight[i]] + value[i]);
//	//	}
//	//}
//	return dp[bagweight];
//}
//
////���ر�������
//int duochong(int n, int bagweight, vector<int> weight, vector<int>value,vector<int> nums) {
//	for (int i = 0; i < nums.size(); i++) {
//		if (nums[i] != 0) {
//			weight.push_back(weight[i]);
//			value.push_back(value[i]);
//			nums[i]--;
//		}
//	}
//	vector<int> dp(weight.size());
//	for (int i = 0; i < weight.size(); i++) {
//		for (int j = bagweight; j >= weight[i]; j--) {
//			dp[j] = max(dp[j], dp[j - weight[i]] + value[i]);
//		}
//	}
//	return dp[n];
//}
//
//int main() {
//	int n, bagweight;
//	scanf_s("%d %d", &n, &bagweight);
//	vector<int> weight(n), value(n);
//	for (int i = 0; i < n; i++) {//��Ʒ�������൱�������
//		scanf_s("%d %d", &weight[i], &value[i]);
//	}
//	int mmax;
//	//mmax = erwei(n, bagweight, weight, value);
//	//mmax = yiwei(n, bagweight, weight, value);
//	//mmax = wanquan(n, bagweight, weight, value);
//	//printf("%d", mmax);
//	vector<int> nums(n);
//	for (int i = 0; i < n; i++) {
//		scanf_s("%d", &nums[i]);
//	}
//	mmax = duochong(n, bagweight, weight, value, nums);
//	printf("%d", mmax);
//	return 0;
//}