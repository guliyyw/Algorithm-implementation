//#include<iostream>
//#include<stack>
//#include<queue>
//
//using namespace std;
//
//int main() {
//    int n = 1;
//    while (true) {
//        scanf_s("%d", &n);
//        if (n == 0) {//n=0�����������
//            break;
//        }
//        stack<int> nums;//�������У�����Ϊ����ȳ��Ľṹ
//        int flag = 1;//flag��¼��һ������ѹ�뵯�е��ӵ���ţ����falgΪ0�����޷���Ҫ����
//        for (int i = 1; i <= n; i++) {
//            int l = 0, r = 0, num;
//            scanf_s("%d", &num);//����Ҫ������ӵ�
//            if (i == 1) {//�Ƚ��ӵ�ѹ�뵯�У�������ĵ�һ���ӵ����֮ǰ�������ӵ���ջ
//                for (int j = 1; j <= num; j++) {
//                    nums.push(j);
//                }
//                flag += num;//��һ��ѹ�뵯�е��ӵ����
//            }
//            if (!nums.empty()) {//���зǿ�
//                int x = nums.top();//ջ��Ԫ��
//                if (num == x) {//���Ҫ������ӵ���ź͵��������һ��Ԫ�صı��һ�£��򵯳����ӵ����൱������ӵ����Է���
//                    nums.pop();
//                }
//                else if (num != flag) {
//                    flag = 0;
//                    //break;�п��ܽ����������������룬��������һ���������������룬����break
//                }
//                else if (flag != 0 && num == flag) {//�����һ������ѹ����ӵ���ź�Ҫ������ӵ����һ�£���ô��flag+1
//                    flag++;
//                }
//            }
//            else {
//                if (num != flag) {
//                    flag = 0;
//                    //break;�п��ܽ����������������룬��������һ���������������룬����break
//                }
//                else if (flag != 0 && num == flag) {
//                    flag++;
//                }
//            }
//        }
//        if (flag != 0) {
//            printf("Yes\n");
//
//        }
//        else {
//            printf("No\n");
//        }
//    }
//    return 0;
//}
//
//
//
//int main(void)
//{
//    int m;
//    while (cin >> m && m)
//    {
//        stack<int> s;
//        queue<int> zd;
//        for (int i = 0; i < m; i++)
//        {
//            int tmp;
//            cin >> tmp;
//            zd.push(tmp);//���м�¼�ӵ�����˳��
//        }
//        for (int i = 1; i <= m; i++)
//        {
//            s.push(i);//��ջ
//            while (!s.empty() && zd.front() == s.top())//ջ�ǿգ����е���Ԫ����ջ��
//            {
//                zd.pop();
//                s.pop();
//            }
//        }
//        if (s.empty())
//        {
//            cout << "Yes" << endl;
//        }
//        else
//        {
//            cout << "No" << endl;
//        }
//    }
//    return 0;
//}
