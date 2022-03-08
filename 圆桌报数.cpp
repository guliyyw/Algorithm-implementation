//#include<iostream>
//#include<queue>
//
//using namespace std;
//
///*使用一个队列来保存圆桌的每个人。接着，依次把从队头开始，
//把前m - 1个人出队并给push到队列尾部，然后把队头的第一个元素pop，完成一个人的自杀。
//一直循环，直到队列只有一个人为止，则这个人为最后自杀的那个。*/
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