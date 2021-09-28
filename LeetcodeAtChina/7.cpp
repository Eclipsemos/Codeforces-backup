#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int reverse(int x)
    {
        long long ans = 0;
        while (x)
        {
            ans = ans * 10 + x % 10;
            x /= 10;
        }
        ans= (int)ans==ans?ans:0;
        return ans;
    }
};

int main()
{
    Solution S;
    S.reverse(1534236469);
    return 0;
}