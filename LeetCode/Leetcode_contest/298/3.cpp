// Eclipsemos UWMADISON CS 2022
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vc vector<int>
//
class Solution
{
public:

    int longestSubsequence(string s, int k)
    {
        int res = 0;
        for(char y:s)
            if(y=='0')
            ++res;
        long long w = 1, ans = 0;
        for(int i=s.size()-1;~i;i--,w<<=1)
        {
            if(s[i]=='1')
            {
                ans += w;
            }
            if(ans>k)
                return res;
            if(s[i]=='1')
                res++;
        }
        return res;
    }
};
//
int main()
{
    Solution S;
    // vc v={};
    S.longestSubsequence("00101001", 1);
    return 0;
}
