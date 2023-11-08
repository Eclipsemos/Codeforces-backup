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
       if(n<=1)
        return n;
       int p=0,q=0,r=1;
       for(int i=2;i<=n;i++)
       {
           p=q;
           q=r;
           r=p+q;
       }
       return r;
    }
};
//
int main()
{
    Solution S;

    return 0;
 }
