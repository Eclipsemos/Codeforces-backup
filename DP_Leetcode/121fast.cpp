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
        int n = prices.size();
        int p[n + 1];
        int maxd = 0;
        int maxa = prices[0];
        int mina = prices[0];
        for (int i = 1; i < n; i++)
        {
            if(prices[i]<mina)
            {
                mina =prices[i];
                maxa = prices[i];
            }
            else
            {
                maxa = prices[i];
            }
            maxd = max(maxd,maxa-mina);
        }
        return maxd;
    }
};
//
int main()
{
    Solution S;
   //vc v={};

    return 0;
 }
