#include<stdio.h>
#include<algorithm>
#include<iostream>
#include<stack>
using namespace std;

int bb0(int a, int b, char c)//运算
{
    if (c == '+')
        return a + b;
    if (c == '-')
        return a - b;
    if (c == '*')
        return a * b;
    if (c == '/')
        return a / b;
}

void bb1(const char* a, char* b, char* c)
{
    int k = 0, l = 0, flag = 0;
    for (int i = 0; a[i] != '\0'; i++)//扫描字符串
    {
        if (a[i] >= '0' && a[i] <= '9')//如果是数字入b栈
        {
            b[k++] = a[i];
            if (a[i + 1] < '0' || a[i + 1]>'9')//如果下一个字符是运算符，#入b栈
                b[k++] = '#';
        }
        else if (a[i] == ')')//如果是右括号
        {
            while (c[--l] != '(')
            {
                b[k++] = c[l];
            }
        }
        else//运算符
        {
            if (l > 0)//c栈内有元素，比较优先级
            {
                if (a[i] == '+' || a[i] == '-')//扫描的运算符是+，-
                {
                    while (c[l - 1] != '(' && l > 0)//栈顶元素不为（
                    {
                        b[k++] = c[--l];//c出栈入b栈
                    }
                }
                if (a[i] == '*' || a[i] == '/')//扫描的是*，/
                {
                    if (c[i - 1] == '*' || c[i - 1] == '/')//c栈顶为*/优先级相同
                        b[k++] = c[--l];//c出栈入b栈
                }
            }
            c[l++] = a[i];//扫描的运算符入c栈
        }
    }
    while (l > 0)//如果c栈中仍有元素全部入b栈
    {
        b[k++] = c[--l];
    }
    b[k] = '\0';
}

void bb2(char* b, int* d)//后缀表达式计算
{
    int c = 0, l = 0;
    for (int i = 0; b[i] != '\0'; i++)//扫描后缀表达式
    {
        if (b[i] <= '9' && b[i] >= '0')//如果是数字
        {
            c = c * 10 + (b[i] - '0');//原来的数字*10+现在的数字
        }
        else if (b[i] == '#')//如果是#
        {
            d[l++] = c;//数字入d栈
            c = 0;//缓冲数组清零
        }
        else//运算符
        {
            d[l - 2] = bb0(d[l - 2], d[l - 1], b[i]);//次顶元素op栈顶元素，结果入d栈
            l = l - 1;//d栈长度-1,(两个数变成一个数)
        }
    }
}

int main()
{
    char a[105];//输入的字符串
    stack<char> midre;
    stack<char> opera;
    char b[105] = { ' ' };//中间结果栈
    char c[100] = { ' ' };//运算符栈
    int d[50];
    cin >> a;
    bb1(a, b, c);
    //bb1(a,midre,opera);
    bb2(b, d);
    //bb2()
    cout << d[0] << endl;
    return 0;
}