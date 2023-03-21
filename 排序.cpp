////计算一段程序运行的时间
//#include<stdio.h>
//#include<vector>
//#include<iostream>
//using namespace std;
//const int maxn = 100;
//
//void maopao(vector<int> a) {//冒泡排序
//	int n = a.size();
//	for (int i = 1; i <= n; i++) {//将未被排序的元素中最大值移至未排序数组最后（已排序数组之前）
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
//void selectsort(vector<int> a) {//选择排序
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
//void insertsort(vector<int> a) {//插入排序
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
//void merge(vector<int>& a, int l1, int r1, int l2, int r2) {//合并子区间
//	int i = l1, j = l2;
//	int temp[maxn];
//	int index = 0;
//	while (i <= r1 && j <= r2) {//数组合并排序
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
//void mergesort(vector<int>& a, int l, int r) {//归并排序
//	if (l < r) {
//		int mid = (l + r) / 2;
//		mergesort(a, l, mid);
//		mergesort(a, mid + 1, r);
//		merge(a, l, mid, mid + 1, r);
//	}
//}
//
//
//int partition(vector<int>& a, int l, int r) {//划分区间
//	int temp = a[l];
//	while (l < r) {
//		while (l<r && a[r]>temp)r--;//反复左移r
//		a[l] = a[r];
//		while (l < r && a[l] <= temp)l++;//反复右移l
//		a[r] = a[l];
//	}
//	a[l] = temp;//temp放到l与r相遇的地方
//	return l;
//}
//
//void quicksort(vector<int>& a, int l, int r) {//快速排序
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
//	maopao(nums);//冒泡排序
//	selectsort(nums);//选择排序
//	insertsort(nums);//插入排序
//	mergesort(nums, 0, n - 1);//数组首尾下标，归并排序
//	quicksort(nums, 0, n - 1);//数组首尾下标，快速排序
//	for (int i = 0; i < n; i++) {
//		printf("%d ", nums[i]);
//	}
//	return 0;
//}