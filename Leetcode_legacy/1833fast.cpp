#include <bits/stdc++.h>
using namespace std;
//// fast version

class Solution
{
public:
    int maxIceCream(vector<int> &costs, int coins)
    {
       vector<int> c(100001);
       int ans=0;
       for(int& cost:costs)
       {
           c[cost]++;
       }
       for(int i=1;i<=100000;i++)
       {
           if(coins>=i)
           {
               int use = min(c[i],coins/i);
               ans+=use;
               coins-=i*use;
           }
           else
           {
               break;
           }
           
       }
       return ans;
    }
};
int main()
{
    Solution S;
    vector<int> costs = {1,3,2,4,1};
    cout<<S.maxIceCream(costs,7);
    return 0;
}
