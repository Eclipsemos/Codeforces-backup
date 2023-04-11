// Eclipsemos UWMADISON CS 2023
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vc vector<int>
//
class Solution
{
public:
    vector<int> twoSum(vector<int> &numbers, int target)
    {
        // Hashtable
        // map<int,int> mp;
        // vector<int> ans;
        // for(int i=0;i<numbers.size();i++)
        // {
        //     if(mp.count(target-numbers[i])!=0)
        //     {

        //         ans.push_back(mp[target-numbers[i]]);
        //         ans.push_back(i);
        //         return ans;
        //     }

        //     mp[numbers[i]] = i;
        // }
        // return ans;

        // Double pointer
        int l = 0, r = numbers.size() - 1;
        int len = r + 1;
        while(l<r)
        {
            int v = numbers[l]+numbers[r];
            if(v==target)
                return {l,r};
            else if(v<target)
                l++;
            else
                r--;
        }
        return {};
    }
};
//
int main()
{
    Solution S;
    // vc v={};

    return 0;
}
