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
//        if (n == 0) {//n=0代表输入结束
//            break;
//        }
//        stack<int> nums;//创建弹夹，弹夹为后进先出的结构
//        int flag = 1;//flag记录下一发可以压入弹夹的子弹编号；如果falg为0代表无法按要求发射
//        for (int i = 1; i <= n; i++) {
//            int l = 0, r = 0, num;
//            scanf_s("%d", &num);//输入要发射的子弹
//            if (i == 1) {//先将子弹压入弹夹，即发射的第一发子弹编号之前的所有子弹入栈
//                for (int j = 1; j <= num; j++) {
//                    nums.push(j);
//                }
//                flag += num;//下一发压入弹夹的子弹编号
//            }
//            if (!nums.empty()) {//弹夹非空
//                int x = nums.top();//栈顶元素
//                if (num == x) {//如果要发射的子弹编号和弹夹中最后一个元素的编号一致，则弹出该子弹，相当于这个子弹可以发射
//                    nums.pop();
//                }
//                else if (num != flag) {
//                    flag = 0;
//                    //break;有可能接下来还有数据输入，不妨碍下一个测试用例的输入，不用break
//                }
//                else if (flag != 0 && num == flag) {//如果下一发可以压入的子弹编号和要发射的子弹编号一致，那么将flag+1
//                    flag++;
//                }
//            }
//            else {
//                if (num != flag) {
//                    flag = 0;
//                    //break;有可能接下来还有数据输入，不妨碍下一个测试用例的输入，不用break
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
//            zd.push(tmp);//队列记录子弹发射顺序
//        }
//        for (int i = 1; i <= m; i++)
//        {
//            s.push(i);//入栈
//            while (!s.empty() && zd.front() == s.top())//栈非空，队列的首元素与栈中
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
