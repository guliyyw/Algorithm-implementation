//#include <iostream>
//
//using namespace std;
//
//void p_to_ten(int num, int x) {//xΪԭnum�Ľ���
//	int y = 0, product = 1;
//	while (num != 0) {
//		y = y + (num % 10) * product;
//		num = num / 10;
//		product = product * x;
//	}
//    cout << y << endl;
//	return ;
//}
//
//void ten_to_p(int num, int x) {//x����,numΪ10����
//    int n = num;
//    int i = 0;
//    int str1[100];
//    while (n >= x)
//    {
//        str1[i] = n % x;      //ȡ���������
//        n = n / x;
//        i++;
//    }
//    str1[i] = n;              //����޷������̷��������һ����
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
//    int num, x;//num��ת�����֣�x����
//    scanf_s("%d %d", &num, &x);
//    p_to_ten(num, x);
//    ten_to_p(num, x);
//}