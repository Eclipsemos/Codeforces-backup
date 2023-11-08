// Xinyun Ye UWMADISON CS 2021
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vc vector<int>
//
class Solution
{
public:
    bool checkString(string s)
    {
        int a = -1;
        int b = s.size();
        for (int i = 0; i < s.size(); i++)
        {
            if(s[i]=='a')
             a=max(i,a);
            if(s[i]=='b')
             b=min(b,i);
        }
        if(a>b)
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
