// Xinyun Ye UWMADISON CS 2021
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vc vector<int>
//
class Solution
{
public:
    string originalDigits(string s)
    {
        map<char, int> m1;
        for (auto &c : s)
            m1[c]++;
        map<int, int> m2;
        while (m1['z'] > 0)
        {
            m1['z']--;
            m1['e']--;
            m1['r']--;
            m1['o']--;
            m2[0]++;
        }
        while (m1['g'] > 0)
        {
            m1['e']--;
            m1['i']--;
            m1['g']--;
            m1['h']--;
            m1['t']--;
            m2[8]++;
        }
        while (m1['h'] > 0)
        {
            m1['t']--;
            m1['h']--;
            m1['r']--;
            m1['e']--;
            m1['e']--;
            m2[3]++;
        }
        while(m1['t']>0)
        {
            m1['t']--;
            m1['w']--;
            m1['o']--;
            m2[2]++;
        }
        while(m1['x']>0)
        {
            m1['s']--;
            m1['i']--;
            m1['x']--;
            m2[6]++;
        }
        while(m1['u']>0)
        {
            m1['f']--;
            m1['o']--;
            m1['u']--;
            m1['r']--;
            m2[4]++;
        }
        while(m1['o']>0)
        {
            m1['o']--;
            m1['n']--;
            m1['e']--;
            m2[1]++;
        }
        while(m1['s']>0)
        {
            m1['s']--;
            m1['e']--;
            m1['v']--;
            m1['e']--;
            m1['n']--;
            m2[7]++;
        }
        while(m1['f']>0)
        {
            m1['f']--;
            m1['i']--;
            m1['v']--;
            m1['e']--;
            m2[5]++;
        }
        while(m1['i']>0)
        {
            m1['n']--;
            m1['i']--;
            m1['n']--;
            m1['e']--;
            m2[9]++;
        }
        string ans="";
        for(int i=0;i<=9;i++)
        {
            if(m2[i]>0)
             ans+=to_string(i);
        }
        return ans;
    }
};
//
int main()
{
    Solution S;
    // vc v={};
    cout<<S.originalDigits("owoztneoer")<<endl;
    return 0;
}
