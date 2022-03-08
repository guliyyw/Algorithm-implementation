//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//vector<float> fbi;
//float a, b;
//
//float f(float x) {
//	return x * x - x + 2;
//}
//
//void fibonacci_num()//求解斐波那契数列
//{
//	for (int i = 0; i <= 255; i++) {
//		if (i == 0) {
//			fbi.push_back(1);
//		}else if (i == 1) {
//			fbi.push_back(1);
//		}
//		else {
//			fbi.push_back(fbi[i - 1] + fbi[i - 2]);
//		}
//	}
//	return;
//}
//
//void fibonacci_search(float e)
//{
//	int n = 0;
//	fibonacci_num();
//	for (int i = 0; i < 255; i++) {//求n
//		if (fbi[i] >= 1 / e) {
//			n = i;
//			break;
//		}
//	}
//	cout << n << endl;
//	float x, y;
//	for (int k = 1; k < n - 1; k++) {//n迭代次数，
//		if (k == 1) {
//			x = a + (fbi[n - k - 1] / fbi[n - k + 1]) * (b - a);
//			y = a + (fbi[n - k] / fbi[n - k + 1]) * (b - a);
//		}
//		if (f(x) <= f(y)) {
//			a = a;
//			b = y;
//			y = x;
//			x = a + (fbi[n - k - 2] / fbi[n - k]) * (b - a);
//		}
//		else if(f(x) > f(y) ) {
//			a = x;
//			b = b;
//			x = y;
//			y = b + (fbi[n - k - 1] / fbi[n - k]) * (b - a);
//		}
//		printf("%f %f\n", a, b);
//	}
//	printf("%f %f\n", x, y);
//	x = y;
//	y = y + 0.01;
//	if (f(x) < f(y)) {
//		a = a;
//		b = y;
//		cout << 0 <<endl;
//	}
//	else if (f(x) > f(y)) {
//		a = x;
//		b = b;
//		cout << 1 << endl;
//	}
//
//}
//
//int main()
//{
//	float x, y, e;
//	scanf_s("%f %f %f", &x, &y, &e);
//	a = x;
//	b = y;
//	fibonacci_search(e);
//	printf("%f %f", a, b);
//	return 0;
//}
