//#include <iostream>
//#include <string>
//#include <vector>
//
//using namespace std;
//
//int main() {
//	string strsm;//文本串
//	cin >> strsm;
//	string strsn;//模式串
//	cin >> strsn;
//	if (strsn.size() == 0) {
//		return 0;
//	}
//	//next数组
//	int n = strsn.size();
//	vector<int> next(n);
//	int j = 0;//i后缀末尾，j前缀末尾
//	next[0] = 0;
//	for (int i = 1; i < n; i++) {
//		while (strsn[i] != strsn[j] && j >= 1) {
//			j = next[j - 1];
//		}
//		if (strsn[i] == strsn[j]) {
//			j++;
//		}
//		next[i] = j;
//	}
//	//for (int i = 0; i < n; i++) {
//	//	printf("%d ",next[i]);
//	//}
//
//	j = 0;
//	for (int i = 0; i < strsm.size(); i++) {
//		while (strsm[i] != strsn[j] && j >= 1) {
//			j = next[j - 1];
//		}
//		if (strsm[i] == strsn[j]) {
//			j++;
//		}
//		if (j == strsn.size()) {
//			cout << i - n + 1 << endl;//j如果是子串时的起始位置
//			break;
//		}
//	}
//	return 0;
//}