// Xinyun Ye UWMADISON CS 2021
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vc vector<int>
//
class Solution
{
public:
    const int MOD = 1337;
    int dfs(int a, vector<int> b, int u)
    {
        if (u == -1)
            return 1;
        return qpow(dfs(a, b, u - 1),10) * qpow(a, b[u])%MOD;
    }

    int qpow(int a, int b)
    {
        int ans=1;
        a %= MOD;
        while(b!=0)
        {
            if((b&1)!=0) ans = ans*a%MOD;
            a = a*a%MOD;
            b >>=1;
        }
        return ans;
    }

    int superPow(int a, vector<int> &b)
    {
        return dfs(a, b, b.size() - 1);
    }
};
//
int main()
{
    Solution S;
    // vc v={};

    return 0;
}
