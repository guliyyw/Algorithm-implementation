//#include <iostream>
//#include <cstring>
//#include <fstream>
//using namespace std;
//
//bool isPrime[10000000000] = { 0 };//标记数组 用来表示数字是否是质数 true-是质数 false-不是质数
//
//void aiPrime(int n)
//{// 埃氏筛处理n内的质数
	//memset(isPrime, true, sizeof(isPrime));//所有数字，默认标记为质数 
	//isPrime[1] = false;//修改1的状态，1不是质数

	//for (int i = 2; i <= n; i++)//从2开始，枚举范围n内的每个数字 
	//{
	//	if (isPrime[i])//如果i是质数
	//	{//将n范围内所有i的倍数，标记为非质数 
	//		for (int j = 2; j * i <= n; j++)
	//		{//打底从两倍开始,j*i就是i的倍数 
	//			isPrime[i * j] = false;// 标记倍数为非质数 
	//		}

	//	}
	//}
//}
//
//
//int main(int argc, char** argv) {
//	//int n, m, x;
//	//cin >> n >> m;
//	int n = 100000000;
//	aiPrime(n);
//	//for (int i = 1; i <= m; i++)
//	//{
//	//	cin >> x;
//	//	if (isPrime[x])
//	//	{
//	//		cout << "yes\n";
//	//	}
//	//	else
//	//	{
//	//		cout << "no\n";
//	//	}
//	//}
//	for (int i = 1; i < n; i++) {
//		if (isPrime[i]) {
//			cout << i << endl;
//		}
//	}
//	return 0;
//}
