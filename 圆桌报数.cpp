//#include<iostream>
//#include<queue>
//
//using namespace std;
//
///*ʹ��һ������������Բ����ÿ���ˡ����ţ����ΰѴӶ�ͷ��ʼ��
//��ǰm - 1���˳��Ӳ���push������β����Ȼ��Ѷ�ͷ�ĵ�һ��Ԫ��pop�����һ���˵���ɱ��
//һֱѭ����ֱ������ֻ��һ����Ϊֹ���������Ϊ�����ɱ���Ǹ���*/
//int main() {
//	int n, m;
//	scanf_s("%d %d", &n, &m);
//	queue<int> nums;
//	for (int i = 0; i < n; i++)
//		nums.push(i + 1);
//	while (nums.size() != 1) {
//		for (int j = 0; j < m - 1; j++) {
//			nums.push(nums.front());
//			nums.pop();
//		}
//		nums.pop();
//	}
//	cout << "last:" << nums.front() << endl;
//	return 0;
//}