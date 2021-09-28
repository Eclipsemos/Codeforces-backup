#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vc vector<int>

//
class Solution
{
public:
    int balancedStringSplit(string s)
    {
        int r=0;
        int l=0;
        int res=0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='L')
             l++;
            else
             r++;
            if(r==l)
             res++;
        }
        return res;
    }
};
//
int main()
{
    Solution S;
    cout<<S.balancedStringSplit("LLLLRRRR");
    return 0;
}
