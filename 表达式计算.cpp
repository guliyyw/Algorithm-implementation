#include<stdio.h>
#include<algorithm>
#include<iostream>
#include<stack>
using namespace std;

int bb0(int a, int b, char c)//����
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
    for (int i = 0; a[i] != '\0'; i++)//ɨ���ַ���
    {
        if (a[i] >= '0' && a[i] <= '9')//�����������bջ
        {
            b[k++] = a[i];
            if (a[i + 1] < '0' || a[i + 1]>'9')//�����һ���ַ����������#��bջ
                b[k++] = '#';
        }
        else if (a[i] == ')')//�����������
        {
            while (c[--l] != '(')
            {
                b[k++] = c[l];
            }
        }
        else//�����
        {
            if (l > 0)//cջ����Ԫ�أ��Ƚ����ȼ�
            {
                if (a[i] == '+' || a[i] == '-')//ɨ����������+��-
                {
                    while (c[l - 1] != '(' && l > 0)//ջ��Ԫ�ز�Ϊ��
                    {
                        b[k++] = c[--l];//c��ջ��bջ
                    }
                }
                if (a[i] == '*' || a[i] == '/')//ɨ�����*��/
                {
                    if (c[i - 1] == '*' || c[i - 1] == '/')//cջ��Ϊ*/���ȼ���ͬ
                        b[k++] = c[--l];//c��ջ��bջ
                }
            }
            c[l++] = a[i];//ɨ����������cջ
        }
    }
    while (l > 0)//���cջ������Ԫ��ȫ����bջ
    {
        b[k++] = c[--l];
    }
    b[k] = '\0';
}

void bb2(char* b, int* d)//��׺���ʽ����
{
    int c = 0, l = 0;
    for (int i = 0; b[i] != '\0'; i++)//ɨ���׺���ʽ
    {
        if (b[i] <= '9' && b[i] >= '0')//���������
        {
            c = c * 10 + (b[i] - '0');//ԭ��������*10+���ڵ�����
        }
        else if (b[i] == '#')//�����#
        {
            d[l++] = c;//������dջ
            c = 0;//������������
        }
        else//�����
        {
            d[l - 2] = bb0(d[l - 2], d[l - 1], b[i]);//�ζ�Ԫ��opջ��Ԫ�أ������dջ
            l = l - 1;//dջ����-1,(���������һ����)
        }
    }
}

int main()
{
    char a[105];//������ַ���
    stack<char> midre;
    stack<char> opera;
    char b[105] = { ' ' };//�м���ջ
    char c[100] = { ' ' };//�����ջ
    int d[50];
    cin >> a;
    bb1(a, b, c);
    //bb1(a,midre,opera);
    bb2(b, d);
    //bb2()
    cout << d[0] << endl;
    return 0;
}