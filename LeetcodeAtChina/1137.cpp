#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vc vector<int>

//
class Solution
{
public:
    int tribonacci(int n)
    {
        if (n <= 1)
            return n;
        if (n == 2)
            return 1;

        int a = 0, b = 0, c = 1, d = 1;
        for (int i = 3; i <= n; i++)
        {
            a = b;
            b = c;
            c = d;
            d = a + b + c;
        }
        return d;
    }
};
//
int main()
{
    Solution S;

    return 0;
}
