//Xinyun Ye UWMADISON CS 2021
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vc vector<int>
//
class Solution {
public:
    int integerReplacement(int n) 
    {
       vector<long long> dp;
       dp.resize(n+2);
       dp[0]=0;
       for(int i=1;i<=n;i++)
       {
           dp[i]=i-1;
       }
       for(int i=2;i<=n;i++)
       {
           if(!(i%2))
           {
               dp[i]=min(dp[i],dp[i/2]+1);
           }
           dp[i]=min(dp[i-1]+1,dp[i]);
       }
     return dp[n];
    }
};
//
int main()
{
    Solution S;
   //vc v={};
    S.integerReplacement(5);
    return 0;
 }
