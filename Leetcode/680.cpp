// Eclipsemos UWMADISON CS 2022
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vc vector<int>
//
class Solution
{
public:
    bool validPalindrome(string s)
    {
        bool flag = false;
        int l = 0, r = s.size()-1;
        while(l<=r)
        {
            if(s[l]!=s[r])
            {
                if(flag)
                {
                    return false;
                }
                else
                {
                    flag = true;
                    l++;r--;
                }
            }
            else
            {
                l++;r--;
            }
        }
        return true;
    }
};
//
int main()
{
    Solution S;
    cout<<S.validPalindrome("cbbcc");
    // vc v={};

    return 0;
}
