//Xinyun Ye UWMADISON CS 2021
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vc vector<int>
//
class Solution
{
public:
    int kthFactor(int n, int k)
    {
        vector<int> factors;
        for(int i=1;i<=n;i++)
        {
            if(n%i==0)
            {
                factors.push_back(i);
            }
        }
        if(factors.size()<k)
        return -1;
        return factors[k-1];
    }
};
//
int main()
{
    Solution S;
    //vc v={};

    return 0;
}
