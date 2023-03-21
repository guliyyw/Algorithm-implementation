//#include "iostream"
//#include "algorithm"
//#include "string"
//using namespace std;
//
//const int MaxSize = 100;
//
//class SeqList {
//private:
//	int data[MaxSize];
//	int length;
//	bool rev;
//
//public:
//	//无参构造
//	SeqList() {
//		length = 0;
//		rev = false;//默认从小到大排序
//	}
//
//	//带参构造，reverse代表反转排序顺序，默认从小到大
//	SeqList(int a[], int n, bool reverse = false) {
//		rev = reverse;
//		length = n;
//		//排序
//		sort(a, a + n);
//		if (!reverse) {
//			for (int i = 0; i < n; i++) {
//				data[i] = a[i];
//			}
//		}
//		else {
//			for (int i = 0; i < n; i++) {
//				data[i] = a[n - 1 - i];
//			}
//		}
//	}
//
//	bool empty() {
//		return (length == 0) ? true : false;
//	}
//
//	void get_data(int a[]) {
//		for (int i = 0; i < length; i++) {
//			a[i] = data[i];
//		}
//	}
//
//	int get_length() {
//		return length;
//	}
//
//	bool get_rev() {
//		return rev;
//	}
//
//	int get_index(int index) {
//		if (index <0 || index > length - 1) {
//			cout << "所给下标溢出" << endl;
//		}
//		else {
//			return data[index];
//		}
//	}
//
//	int get_num(int x) {
//		int index = -1;
//		for (int i = 0; i < length; i++) {
//			if (data[i] == x) {
//				return i;
//			}
//		}
//		return index;
//	}
//
//	//展示线性表
//	void show()
//	{
//		cout << "该线性表长度为" << length << endl;
//		string sort_func = (rev) ? "从大到小" : "从小到大";
//		cout << "该线性表排列方式为" << sort_func << endl;
//		for (int i = 0; i < length; i++)
//		{
//			cout << "第" << i + 1 << "个元素为：" << data[i] << endl;
//		}
//	}
//
//	//按位删除元素
//	void del_index(int index)
//	{
//		if (index<0 || index>length - 1)
//		{
//			cout << "下标溢出，无法删除！" << endl;
//			throw 1;
//		}
//
//		for (int i = index; i < length - 1; i++)
//		{
//			data[i] = data[i + 1];
//		}
//		length--;//长度-1
//	}
//
//public:
//	//按值删除元素
//	void del_num(int num, bool all = false) {
//		int index = get_num(num);
//		if (index == -1)
//		{
//			cout << "删除失败！线性表中不存在元素" << num << endl;
//			throw 1;
//		}
//		if (!all)
//		{
//			del_index(index);
//		}
//		else
//		{
//			//找到了再来全删除
//			int ind[MaxSize];//逆天了也就全是一个数
//			int count = 0;
//			for (int i = index; i < length; i++)
//			{
//				if (data[i] == num)
//				{
//					ind[count++] = i;
//				}
//			}
//			//进行删除
//			for (int i = 0; i <= count; i++)
//			{
//				del_index(ind[i] - i);
//			}
//		}
//	}
//		//按位插入
//	void insert(int num, int index) {
//
//		if (index<0 || index>length)
//		{
//			cout << "所给下标溢出范围！" << endl;
//			throw 1;
//		}
//		else
//		{
//			if (index != length)
//			{
//				for (int j = length; j >= index + 1; j--) {
//					data[j] = data[j - 1];
//				}			
//				data[index] = num;
//				length++; //插入后长度+1
//			}
//			//插在表末，特殊情况
//			else
//			{
//				data[length] = num;
//				length++;
//			}
//		}
//	}
//
//	void insert(int num) {
//		if (!rev) {
//			for (int i = 0; i < length; i++) {
//				if (data[i] > num) {
//					insert(num, i);
//					break;
//				}
//			}
//		}
//		else {
//			for (int i = 0; i < length; i++) {
//				if (data[i] < num) {
//					insert(num, i);
//					break;
//				}
//			}
//		}
//	}
//};
//
//
//int main() {
//
//	return 0;
//}