//#include <iostream>
//
//using namespace std;
//
//long long int binarypow(long long int x, long long int y, long long int m) {
//	long long int ans = 1;
//	while (y > 0) {
//		if (y % 2) {//如果为奇次方，则乘以x，弥补x/2少的一
//			ans = ans * x % m;
//		}
//		x = x * x;//x平方
//		y = y / 2;//y/2
//	}
//	return ans;
//}
//
//int main() {
//	long long int x, y, m;
//	cin >> x >> y >> m;
//	long long int ans = binarypow(x, y, m);
//	cout << ans << endl;
//}