#include "iostream"

using namespace std;


//gcd a,b�����Լ��
int gcd(int a, int b) {
	return b == 0 ? a : gcd(b, a % b);
}

//��������a,b�����������b���� ab mod p = 1����˵b��a��ģp�˷���Ԫ 
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

//������ ����С���� �Ƴ� a * a ^ (p - 2) % p = 1
int q_exgcd(int a, int b, int p) {
	int ans = 1;
	while (b > 0) {
		if (b % 2) {//���Ϊ��η��������x���ֲ�x/2�ٵ�һ
			ans = ans * a % p;
		}
		a = a * a;//xƽ��
		b = b / 2;//y/2
	}
	return ans;
}

int main() {
	int a; //����
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