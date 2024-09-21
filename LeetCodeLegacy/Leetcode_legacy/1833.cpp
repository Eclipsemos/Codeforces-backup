#include <bits/stdc++.h>
using namespace std;
////

class Solution
{
public:
    int maxIceCream(vector<int> &costs, int coins)
    {
        int ans=0;
        sort(costs.begin(),costs.end());
        for(int price:costs)
        {
            if(coins>=price)
             {
                 coins-=price;
                 ans++;
             }
             else
             {
                 return ans;
             }
        }
        return ans;
    }
};

int main()
{
    Solution S;
    return 0;
}
