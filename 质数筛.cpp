//#include <iostream>
//#include <cstring>
//#include <fstream>
//using namespace std;
//
//bool isPrime[10000000000] = { 0 };//������� ������ʾ�����Ƿ������� true-������ false-��������
//
//void aiPrime(int n)
//{// ����ɸ����n�ڵ�����
	//memset(isPrime, true, sizeof(isPrime));//�������֣�Ĭ�ϱ��Ϊ���� 
	//isPrime[1] = false;//�޸�1��״̬��1��������

	//for (int i = 2; i <= n; i++)//��2��ʼ��ö�ٷ�Χn�ڵ�ÿ������ 
	//{
	//	if (isPrime[i])//���i������
	//	{//��n��Χ������i�ı��������Ϊ������ 
	//		for (int j = 2; j * i <= n; j++)
	//		{//��״�������ʼ,j*i����i�ı��� 
	//			isPrime[i * j] = false;// ��Ǳ���Ϊ������ 
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
