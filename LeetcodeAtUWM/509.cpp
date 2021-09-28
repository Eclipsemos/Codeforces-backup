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
        return fib(n-1)+fib(n-2);
    }
};
//
int main()
{
    Solution S;

    return 0;
}
