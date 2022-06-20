// Eclipsemos UWMADISON CS 2022
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vc vector<int>
//
class Solution
{
public:
    string minRemoveToMakeValid(string s)
    {
        int left = 0;
        int right = count(s.begin(), s.end(), ')');
        string ans = "";
        for (auto &c : s)
        {
            if (c == '(')
            {
                if (right > 0)
                {
                    ans += c;
                    left++;
                    right--;
                }
            }
            else if (c == ')')
            {
                if (left > 0)
                {
                    ans += c;
                    left--;
                }
                else
                {
                    right--;
                }
            }
            else
                ans += c;
        }
        return ans;
    }
};
//
int main()
{
    Solution S;
    // vc v={};
    cout << S.minRemoveToMakeValid("())()(((");
    return 0;
}
