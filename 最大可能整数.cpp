//#include <iostream>
//#include <vector>
//#include <algorithm>
//#include <queue>
//#include <string>
//
//using namespace std;
//
//bool cmp(string s1,string s2) {
//	if (s1 + s2 > s2 + s1) {
//		return true;
//	}
//	return false;
//}
//int main() {
//	int n;
//	cin >> n;
//	vector<string> nums(n);
//	for (int i = 0; i < n; i++) {
//		cin >> nums[i];
//	}
//	sort(nums.begin(), nums.end(), cmp);
//	string ans;
//	for (int i = 0; i < n; i++) {
//		//cout << nums[i] << endl;
//		ans += nums[i];
//	}
//	cout << ans;
//	return 0;
//}