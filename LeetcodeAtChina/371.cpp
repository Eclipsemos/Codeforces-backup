#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vc vector<int>

//
class Solution
{
public:
    int getSum(int a, int b)
    {
        while(b!=0)
        {
            unsigned int carry = (unsigned int) (a&b)<<1;
            a = a^b;
            b = carry;
        }
        return a;
    }
};
//
int main()
{
    Solution S;

    return 0;
}
