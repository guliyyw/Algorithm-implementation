//#include <iostream>
//#include <string>
//using namespace std;
//
//int p_to_ten(int num, int x) {//x为原num的进制，转换为10进制
//	int y = 0, product = 1;
//	while (num != 0) {
//		y = y + (num % 10) * product;
//		num = num / 10;
//		product = product * x;
//	}
//	return y;
//}
//
//void ten_to_p(int num, int x) {//x进制,num为10进制，转换为x进制
//    int n = num;
//    int i = 0;
//    int str1[100];
//    while (n >= x)
//    {
//        str1[i] = n % x;      //取余放入数组
//        n = n / x;
//        i++;
//    }
//    str1[i] = n;     
//    //最后无法除的商放入数组第一个数
//    cout << "转换后数字：";
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
//    int n;
//    cout << "待转换数字个数：";
//    cin >> n;
//    cout << endl;
//    while (n--) {
//        int x, y;//num待转换数字，x进制
//        int num;
//        cout << "待转换数字：";
//        cin >> num;
//        cout << "待转换数字进制：";
//        cin >> x;
//        cout << "目标进制：";
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