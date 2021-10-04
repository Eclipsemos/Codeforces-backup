//Xinyun Ye UWMADISON CS 2021
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vc vector<int>
//
class Solution
{
public:
    int minimumMoves(string s)
    {
        int ans=0;
        int count=0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='X')
            {
                ans++;
                for(int j=i+1;j<=i+2&&j<s.size();j++)
                s[j]='O';
            }
        }
        return ans;
    }
};
//
int main()
{
    Solution S;
    //vc v={};
    cout<<S.minimumMoves("XXOX");
    return 0;
}
