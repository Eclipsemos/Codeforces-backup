#include <bits/stdc++.h>
using namespace std;
////

class Solution
{
public:
    vector<int> findErrorNums(vector<int> &nums)
    {
        map<int,int> mp;
        sort(nums.begin(),nums.end());
        for(int num:nums)
         mp[num]++;
        map<int,int>::iterator iter=mp.begin();
        int repeat;
        while(iter!=mp.end())
        {
            if(iter->second==2)
            {
                repeat=iter->first;
                break;
            }
            iter++;
        }
        int lost=1;
        for(int i=1;i<=nums.size();i++)
         if(mp[i]!=1&&mp[i]!=2)
         {
              lost =i;
              break;
         }
         
        vector<int>ans;
        ans.push_back(repeat); ans.push_back(lost);
        return ans;
    }
};
int main()
{
    Solution S;
    vector<int> input ={1,1};
    S.findErrorNums(input);
    return 0;
}
