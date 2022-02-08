// Xinyun Ye UWMADISON CS 2021
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vc vector<int>
//
class Solution
{
public:
    string truncateSentence(string s, int k)
    {
        istringstream is(s);
        string str="";
        vector<string> ans;
        while(is>>str)
        {
            ans.push_back(str);
        }
        return ans[0];
    }
};
//
int main()
{
    Solution S;
    // vc v={};

    return 0;
}
