//void downadjust(int low, int high) {//�ڵ����µ�����С�����½���
//	int i = low, j = i * 2;//iΪ�������ڵ㣬jΪ����ڵ�
//	while (j <= high) {//���Ӵ���
//		if (j + 1 <= high && heap[j + 1] > heap[j]) {//����Һ��Ӵ������Һ��Ӵ�������
//			j = j + 1;//��j�洢�Һ����±꣬��ȡ������ֵ�ϴ��
//		}
//		if (heap[j] > heap[i]) {//����������Ȩֵ���������Ľڵ�Ȩֵ��
//			swap(heap[j], heap[i]);//�����ڵ�
//			i = j;//����iΪ�������ڵ㣬jΪi������
//			j = i * 2;
//		}
//		else {
//			break;//���ӵ�Ȩֵ�ȴ������ڵ�ȨֵС
//		}
//	}
//}
//
//void upadjust(int low, int high) {//�ڵ����ϵ���
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
//void createheap(int n) {//����
//	for (int i = n / 2; i >= 1; i--) {
//		downadjust(i, n);
//	}
//}
//
//void deletetop() {//ɾ���Ѷ�Ԫ��
//	heap[1] = heap[n--];
//	downadjust(1, n);
//}
//
//void insert(int x) {//���Ԫ��
//	heap[++n] = x;
//	upadjust(1, n);
//}
//
//void heapsort() {//������
//	createheap();
//	for (int i = n; i > 1; i--) {
//		swap(heap[i], heap[1]);
//		downadjust(1, i - 1);
//	}
//}