// Xinyun Ye UWMADISON CS 2021
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vc vector<int>
//
class Solution
{
public:

    int gcd(int x,int y)
    {
        if(x%y==0)
         return y;
        else
        return (gcd(y,x%y));
    }
    vector<string> simplifiedFractions(int n)
    {
        vector<string> ans;

        for(int i=2;i<=n;i++)
        {
            for(int j=1;j<i;j++)
            {
                if(j==1||gcd(i,j)==1)
                {
                    string curr="";
                    curr= curr+ to_string(j)+"/"+to_string(i);
                    ans.push_back(curr);
                }
            }
        }
        return ans;
    }
};
//
int main()
{
    Solution S;
    // vc v={};
    S.simplifiedFractions(4);
    return 0;
}
