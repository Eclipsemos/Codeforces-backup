// Xinyun Ye UWMADISON CS 2021
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vc vector<int>
//
class Solution
{
public:
    vector<string> findRelativeRanks(vector<int> &score)
    {
        vector<string> ans;
        int n=score.size();
        map<int,int> mp;
        vector<int> v = score;
        sort(v.begin(),v.end());
        reverse(v.begin(),v.end());
        for(int i=0;i<n;i++)
         mp[v[i]]=i+1;
        for(int val:score)
        {
            if(mp[val]==1)
            {
                ans.push_back("Gold Medal");
            }
            else if(mp[val]==2)
            {
                ans.push_back("Silver Medal");
            }
            else if(mp[val]==3)
            {
                ans.push_back("Bronze Medal");
            }
            else
                ans.push_back(to_string(mp[val]));
        }
        return ans;
    }
};
//
int main()
{
    Solution S;
    // vc v={};

    return 0;
}
