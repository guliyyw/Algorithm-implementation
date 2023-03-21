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
//	//�޲ι���
//	SeqList() {
//		length = 0;
//		rev = false;//Ĭ�ϴ�С��������
//	}
//
//	//���ι��죬reverse����ת����˳��Ĭ�ϴ�С����
//	SeqList(int a[], int n, bool reverse = false) {
//		rev = reverse;
//		length = n;
//		//����
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
//			cout << "�����±����" << endl;
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
//	//չʾ���Ա�
//	void show()
//	{
//		cout << "�����Ա���Ϊ" << length << endl;
//		string sort_func = (rev) ? "�Ӵ�С" : "��С����";
//		cout << "�����Ա����з�ʽΪ" << sort_func << endl;
//		for (int i = 0; i < length; i++)
//		{
//			cout << "��" << i + 1 << "��Ԫ��Ϊ��" << data[i] << endl;
//		}
//	}
//
//	//��λɾ��Ԫ��
//	void del_index(int index)
//	{
//		if (index<0 || index>length - 1)
//		{
//			cout << "�±�������޷�ɾ����" << endl;
//			throw 1;
//		}
//
//		for (int i = index; i < length - 1; i++)
//		{
//			data[i] = data[i + 1];
//		}
//		length--;//����-1
//	}
//
//public:
//	//��ֵɾ��Ԫ��
//	void del_num(int num, bool all = false) {
//		int index = get_num(num);
//		if (index == -1)
//		{
//			cout << "ɾ��ʧ�ܣ����Ա��в�����Ԫ��" << num << endl;
//			throw 1;
//		}
//		if (!all)
//		{
//			del_index(index);
//		}
//		else
//		{
//			//�ҵ�������ȫɾ��
//			int ind[MaxSize];//������Ҳ��ȫ��һ����
//			int count = 0;
//			for (int i = index; i < length; i++)
//			{
//				if (data[i] == num)
//				{
//					ind[count++] = i;
//				}
//			}
//			//����ɾ��
//			for (int i = 0; i <= count; i++)
//			{
//				del_index(ind[i] - i);
//			}
//		}
//	}
//		//��λ����
//	void insert(int num, int index) {
//
//		if (index<0 || index>length)
//		{
//			cout << "�����±������Χ��" << endl;
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
//				length++; //����󳤶�+1
//			}
//			//���ڱ�ĩ���������
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