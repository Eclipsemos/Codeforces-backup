//Eclipsemos UWMADISON CS 2023
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vc vector<int>
//
class Solution {
public:
    int divide(int a, int b) {

        assert(b != 0); // 断言除数不能为0 否则下面while会死循环
        bool flag = ((a >> 31) & 1) == ((b >> 31) & 1); // flag为true表示最终答案为正

        // 把a b先转为无符号整数 负数位移会计算错
        unsigned _a = a < 0 ? ~a + 1U : a; // 负数是补码形式 取反+1得到相反数
        unsigned _b = b < 0 ? ~b + 1U : b;
        unsigned ret = 0U;
        int pos = 31; // b不能为0 a右移32位必定为0 必定小于b 所以pos初始为31

        // 该循环执行位运算乘法的逆运算
        while (_a >= _b) {
            while ((_a >> pos) < _b) pos--; 
            _a -= (_b << pos);
            ret |= (1U << pos);
        }

        // 判断是否溢出
        if (ret > INT_MAX) {
            return flag ? INT_MAX : INT_MIN;
        }

        return flag ? (int)ret : -(int)ret;
    }
};

//
int main()
{
    Solution S;
   //vc v={};

    return 0;
 }
