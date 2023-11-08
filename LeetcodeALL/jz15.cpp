#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int hammingWeight(uint32_t n)
    {
        int ans=0;
        int here =1;
        for(int i=0;i<=31;i++)
         if(n&1<<i)
          ans++;
        return ans;
    }
};

int main()
{
    Solution S;
    S.hammingWeight(00000000000000000000000000001011);
    return 0;
}