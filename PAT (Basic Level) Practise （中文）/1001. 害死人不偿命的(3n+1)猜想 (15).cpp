/*
1001. 害死人不偿命的(3n+1)猜想 (15)

时间限制
400 ms
内存限制
65536 kB
代码长度限制
8000 B
判题程序
Standard
作者
CHEN, Yue
卡拉兹(Callatz)猜想：

对任何一个自然数n，如果它是偶数，那么把它砍掉一半；如果它是奇数，那么把(3n+1)砍掉一半。这样一直反复砍下去，最后一定在某一步得到n=1。卡拉兹在1950年的世界数学家大会上公布了这个猜想，传说当时耶鲁大学师生齐动员，拼命想证明这个貌似很傻很天真的命题，结果闹得学生们无心学业，一心只证(3n+1)，以至于有人说这是一个阴谋，卡拉兹是在蓄意延缓美国数学界教学与科研的进展……

我们今天的题目不是证明卡拉兹猜想，而是对给定的任一不超过1000的正整数n，简单地数一下，需要多少步（砍几下）才能得到n=1？

输入格式：每个测试输入包含1个测试用例，即给出自然数n的值。

输出格式：输出从n计算到1需要的步数。

输入样例：
3
输出样例：
5

n % 2 != 0
测试点	结果	用时(ms)	内存(kB)	得分/满分
4	答案正确	6	384	1/1
3	答案正确	6	384	1/1
2	答案正确	8	384	2/2
1	答案正确	6	384	2/2
0	答案正确	7	384	9/9

n & 1

测试点	结果	用时(ms)	内存(kB)	得分/满分
0	答案正确	4	376	9/9
1	答案正确	5	380	2/2
2	答案正确	10	384	2/2
3	答案正确	10	384	1/1
4	答案正确	12	368	1/1

测试点	结果	用时(ms)	内存(kB)	得分/满分
0	答案正确	4	376	9/9
1	答案正确	5	380	2/2
2	答案正确	10	384	2/2
3	答案正确	10	384	1/1
4	答案正确	12	368	1/1

好像没什么用 = =
*/
#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int count = 0;

    while(n != 1){
        if(n & 1 ){     //判断奇数同 n % 2 != 0
            n = n * 3 + 1;
        }
        n = n / 2;

        count++;
    }

    cout << count;




    return 0;

}
