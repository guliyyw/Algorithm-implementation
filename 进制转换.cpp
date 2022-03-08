//#include <iostream>
//
//using namespace std;
//
//void p_to_ten(int num, int x) {//x为原num的进制
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
//void ten_to_p(int num, int x) {//x进制,num为10进制
//    int n = num;
//    int i = 0;
//    int str1[100];
//    while (n >= x)
//    {
//        str1[i] = n % x;      //取余放入数组
//        n = n / x;
//        i++;
//    }
//    str1[i] = n;              //最后无法除的商放入数组第一个数
//    for (; i > -1; i--)
//    {
//        if (str1[i] >= 10)
//        {
//            cout << (char)('A' + str1[i] - 10);      //将十及其以上的数字转化为A~F，再转化为char类型输出
//        }
//        else
//            cout << str1[i];
//    }
//    return ;
//}
//
//int main() {
//    int num, x;//num待转换数字，x进制
//    scanf_s("%d %d", &num, &x);
//    p_to_ten(num, x);
//    ten_to_p(num, x);
//}