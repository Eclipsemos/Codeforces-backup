//Xinyun Ye UWMADISON CS 2021
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vc vector<int>
//
class Solution
{
public:
    int maxProfit(vector<int> &prices)
    {
        int maxn=prices[0];
        int minn=prices[0];
        int maxd=0;
        for(int i=1;i<prices.size();i++)
        {
            if(prices[i]>prices[i-1])
             maxd+=prices[i]-prices[i-1];
        }
        return maxd ;
    }
};
//
int main()
{
    Solution S;
    vc v={7,1,5,3,6,4};
    cout<<S.maxProfit(v);
    return 0;
}
