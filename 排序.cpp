////����һ�γ������е�ʱ��
//#include<stdio.h>
//#include<vector>
//#include<iostream>
//using namespace std;
//const int maxn = 100;
//
//void maopao(vector<int> a) {//ð������
//	int n = a.size();
//	for (int i = 1; i <= n; i++) {//��δ�������Ԫ�������ֵ����δ���������������������֮ǰ��
//		for (int j = 0; j < n - i; j++) {
//			if (a[j] > a[j + 1]) {
//				int temp = a[j];
//				a[j] = a[j + 1];
//				a[j + 1] = temp;
//			}
//		}
//	}
//	for (int i = 0; i < n; i++) {
//		printf("%d ", a[i]);
//	}
//}
//
//void selectsort(vector<int> a) {//ѡ������
//	int n = a.size();
//	for (int i = 0; i < n; i++) {
//		int k = i;
//		for (int j = i; j < n; j++) {
//			if (a[j] < a[k]) {
//				k = j;
//			}
//		}
//		int temp = a[i];
//		a[i] = a[k];
//		a[k] = temp;
//	}
//	for (int i = 0; i < n; i++) {
//		printf("%d ", a[i]);
//	}
//}
//
//void insertsort(vector<int> a) {//��������
//	int n = a.size();
//	for (int i = 1; i < n; i++) {
//		int temp = a[i], j = i;
//		while (j > 1 && temp < a[j - 1]) {
//			a[j] = a[j - 1];
//			j--;
//		}
//		a[j] = temp;
//	}
//	for (int i = 0; i < n; i++) {
//		printf("%d ", a[i]);
//	}
//}
//
//void merge(vector<int>& a, int l1, int r1, int l2, int r2) {//�ϲ�������
//	int i = l1, j = l2;
//	int temp[maxn];
//	int index = 0;
//	while (i <= r1 && j <= r2) {//����ϲ�����
//		if (a[i] <= a[j]) {
//			temp[index++] = a[i++];
//		}
//		else {
//			temp[index++] = a[j++];
//		}
//	}
//	while (i <= r1)temp[index++] = a[i++];
//	while (j <= r2)temp[index++] = a[j++];
//	for (i = 0; i < index; i++) {
//		a[l1 + i] = temp[i];
//	}
//}
//
//void mergesort(vector<int>& a, int l, int r) {//�鲢����
//	if (l < r) {
//		int mid = (l + r) / 2;
//		mergesort(a, l, mid);
//		mergesort(a, mid + 1, r);
//		merge(a, l, mid, mid + 1, r);
//	}
//}
//
//
//int partition(vector<int>& a, int l, int r) {//��������
//	int temp = a[l];
//	while (l < r) {
//		while (l<r && a[r]>temp)r--;//��������r
//		a[l] = a[r];
//		while (l < r && a[l] <= temp)l++;//��������l
//		a[r] = a[l];
//	}
//	a[l] = temp;//temp�ŵ�l��r�����ĵط�
//	return l;
//}
//
//void quicksort(vector<int>& a, int l, int r) {//��������
//	if (l < r) {
//		int pos = partition(a, l, r);
//		quicksort(a, l, pos - 1);
//		quicksort(a, pos + 1, r);
//	}
//}
//
//int main() {
//	//int a[10] = { 3,1,4,6,2 };
//	vector<int> nums = { 3,1,4,6,2 };
//
//	int n = nums.size();
//	maopao(nums);//ð������
//	selectsort(nums);//ѡ������
//	insertsort(nums);//��������
//	mergesort(nums, 0, n - 1);//������β�±꣬�鲢����
//	quicksort(nums, 0, n - 1);//������β�±꣬��������
//	for (int i = 0; i < n; i++) {
//		printf("%d ", nums[i]);
//	}
//	return 0;
//}