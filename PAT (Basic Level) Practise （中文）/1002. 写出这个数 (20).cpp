/*
1002. д������� (20)

ʱ������
400 ms
�ڴ�����
65536 kB
���볤������
8000 B
�������
Standard
����
CHEN, Yue
����һ����Ȼ��n���������λ����֮�ͣ��ú���ƴ��д���͵�ÿһλ���֡�

�����ʽ��ÿ�������������1��������������������Ȼ��n��ֵ�����ﱣ֤nС��10100��

�����ʽ����һ�������n�ĸ�λ����֮�͵�ÿһλ��ƴ�����ּ���1 �ո񣬵�һ�������һ��ƴ�����ֺ�û�пո�

����������
1234567890987654321123456789
���������
yi san wu

���˵Ĵ������������ջ���

*/
#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s;
    cin >> s;

    int len = s.length();

    int *a = new int [len];

    int sum = 0;

    string str[10] = {"ling","yi","er","san","si","wu","liu","qi","ba","jiu"};

    for(int i = 0; i < len; i++){
        a[i] = s[i] - '0';
        sum += a[i];
    }

    int *b = new int [len];
    int j = 0;
    if(sum == 0){
        cout<<"ling";
    }
    else{
        while(sum != 0){
            b[j++] = sum % 10;
            sum /= 10;
        }
    }

    for(int i = j-1;i >= 1; i--){
        cout<<str[b[i]]<<" ";
    }
    cout<<str[b[0]];
    delete [] a;
    delete [] b;




    return 0;
}
