// Xinyun Ye UWMADISON CS 2021
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vc vector<int>
//
class Solution
{
public:
    bool canConstruct(string ransomNote, string magazine)
    {
        map<char,int> mp;
        for(auto& c:magazine)
         mp[c]++;
        for(auto& c:ransomNote)
         if(mp[c]>0)
          mp[c]--;
         else
          return false;
        return true;
    }
};
//
int main()
{
    Solution S;
    // vc v={};

    return 0;
}
