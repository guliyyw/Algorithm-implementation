#include "iostream"

using namespace std;


//gcd a,b的最大公约数
int gcd(int a, int b) {
	return b == 0 ? a : gcd(b, a % b);
}

//对于整数a,b如果存在整数b满足 ab mod p = 1，则说b是a的模p乘法逆元 
int exgcd(int a, int b, int& x, int& y) {
	if (b == 0) {
		x = 1;
		y = 0;
		return a;
	}
	int r = exgcd(b, a % b, y, x);
	y -= a / b * x;
	return r;
}

//快速幂 费马小定理 推出 a * a ^ (p - 2) % p = 1
int q_exgcd(int a, int b, int p) {
	int ans = 1;
	while (b > 0) {
		if (b % 2) {//如果为奇次方，则乘以x，弥补x/2少的一
			ans = ans * a % p;
		}
		a = a * a;//x平方
		b = b / 2;//y/2
	}
	return ans;
}

int main() {
	int a; //整数
	int b; //mod
	int x;
	int y;
	int moudle = 0;
	while (true) {
		cin >> moudle >> a >> b;
		if (moudle == 1) {
			cout << gcd(a, b) << endl;
		}
		else if (moudle == 2) {
			if (exgcd(a, b, x, y) == 1) {
				//cout << x << y << endl;
				cout << (x % b + b) % b << endl;
			}
			else {
				cout << 0 << endl;
			}
			cout << q_exgcd(a, b - 2, b) << endl;
		}
		else if (moudle == 0) {
			break;
		}
	}
	return 0;
}