//void downadjust(int low, int high) {//节点向下调整，小的往下交换
//	int i = low, j = i * 2;//i为待调整节点，j为其左节点
//	while (j <= high) {//孩子存在
//		if (j + 1 <= high && heap[j + 1] > heap[j]) {//如果右孩子存在且右孩子大于左孩子
//			j = j + 1;//让j存储右孩子下标，及取孩子中值较大的
//		}
//		if (heap[j] > heap[i]) {//孩子中最大的权值比欲调整的节点权值大
//			swap(heap[j], heap[i]);//交换节点
//			i = j;//保持i为待调整节点，j为i的左孩子
//			j = i * 2;
//		}
//		else {
//			break;//孩子的权值比待调整节点权值小
//		}
//	}
//}
//
//void upadjust(int low, int high) {//节点向上调整
//	int i = high, j = i / 2;
//	while (j >= low) {
//		if (heap[j] < heap[i]) {
//			swap(heap[j], heap[i]);
//			i = j;
//			j = i / 2;
//		}
//		else {
//			break;
//		}
//	}
//}
//
//void createheap(int n) {//建堆
//	for (int i = n / 2; i >= 1; i--) {
//		downadjust(i, n);
//	}
//}
//
//void deletetop() {//删除堆顶元素
//	heap[1] = heap[n--];
//	downadjust(1, n);
//}
//
//void insert(int x) {//添加元素
//	heap[++n] = x;
//	upadjust(1, n);
//}
//
//void heapsort() {//堆排序
//	createheap();
//	for (int i = n; i > 1; i--) {
//		swap(heap[i], heap[1]);
//		downadjust(1, i - 1);
//	}
//}