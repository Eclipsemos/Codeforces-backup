// Xinyun Ye UWMADISON CS 2021
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vc vector<int>
//
class Solution {
public:
    string dayOfTheWeek(int d, int m, int y) {
        vector<string> weeks = {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};
        if(m < 3) m += 12, y -=1;
        int c = y/100;
        y %= 100;
        int D = c/4 - 2*c + y + y/4 + 13*(m+1)/5 + d - 1 + 210;//加上30*7防止出现负数
        return weeks[D%7];
    }
};
/*
c 是世纪数减一，也就是年份的前两位。
y 是年份的后两位。
m 是月份。m 的取值范围是 3 至 14，因为某年的 1、2 月要看作上一年的 13、14月，
比如 2019 年的 1 月 1 日要看作 2018 年的 13 月 1 日来计算。
d 是日数。
W = D%7 是结果代表一周中第几天, 0 为周日
由于最后计算 D 可能为负数，需要处理一下。
方法很多：这里由 D 计算式发现减的内容最大为 199 
所以可以加上一个大于 199 且是 7 的倍数的数，
我随便取一个 210 加上保证结果为正。
*/
int main()
{
    Solution S;
    // vc v={};

    return 0;
}
