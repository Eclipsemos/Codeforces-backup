//Xinyun Ye UWMADISON CS 2021
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vc vector<int>
//
class Solution
{
public:
    vector<int> missingRolls(vector<int> &rolls, int mean, int n)
    {
        vector<int> ans;
        int sum=0;
        for(int it:rolls)
        {
            sum+=it;
        }
        int res = mean*(n+rolls.size())-sum;
        if(res>6*n||res<0||res<n)
         return ans;
        int curr=6;
        while(n>0)
        {
            if(res-curr>=n-1)
            {
                res-=curr;
                ans.push_back(curr);
                n--;
            }
            else
            {
                curr--;
            }
        }
    
        return ans;
    }
};
//
int main()
{
    Solution S;
    vc v={4,2,2,5,4,5,4,5,3,3,6,1,2,4,2,1,6,5,4,2,3,4,2,3,3,5,4,1,4,4,5,3,6,1,5,2,3,3,6,1,6,4,1,3};
    S.missingRolls(v,2,53);
    
    return 0;
}
