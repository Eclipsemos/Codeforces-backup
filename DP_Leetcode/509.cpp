// Xinyun Ye UWMADISON CS 2021
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vc vector<int>
//
class Solution
{
public:
    int fib(int n)
    {
        if(n<=1) {
            return n;
        }
        int a =0, b=0 ,ans=1;
        for(int i=2;i<=n;i++) {
            a = b;
            b = ans;
            ans = a + b;
        }
        return ans;
    }
};
//
int main()
{
    Solution S;
    // vc v={};
    cout<<S.fib(4);
    return 0;
}
