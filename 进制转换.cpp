//#include <iostream>
//#include <string>
//using namespace std;
//
//int p_to_ten(int num, int x) {//xΪԭnum�Ľ��ƣ�ת��Ϊ10����
//	int y = 0, product = 1;
//	while (num != 0) {
//		y = y + (num % 10) * product;
//		num = num / 10;
//		product = product * x;
//	}
//	return y;
//}
//
//void ten_to_p(int num, int x) {//x����,numΪ10���ƣ�ת��Ϊx����
//    int n = num;
//    int i = 0;
//    int str1[100];
//    while (n >= x)
//    {
//        str1[i] = n % x;      //ȡ���������
//        n = n / x;
//        i++;
//    }
//    str1[i] = n;     
//    //����޷������̷��������һ����
//    cout << "ת�������֣�";
//    for (; i > -1; i--)
//    {
//        if (str1[i] >= 10)
//        {
//            cout << (char)('A' + str1[i] - 10);      //��ʮ�������ϵ�����ת��ΪA~F����ת��Ϊchar�������
//        }
//        else
//            cout << str1[i];
//    }
//    return ;
//}
//
//int main() {
//    int n;
//    cout << "��ת�����ָ�����";
//    cin >> n;
//    cout << endl;
//    while (n--) {
//        int x, y;//num��ת�����֣�x����
//        int num;
//        cout << "��ת�����֣�";
//        cin >> num;
//        cout << "��ת�����ֽ��ƣ�";
//        cin >> x;
//        cout << "Ŀ����ƣ�";
//        cin >> y;
//        if (x == 10) {
//            ten_to_p(num, y);
//            cout << endl;
//        }
//        else {
//            ten_to_p(p_to_ten(num, x), y);
//            cout << endl;
//        }
//        cout << "-----" << endl;
//    }
//    return 0;
//}