// Xinyun Ye UWMADISON CS 2021
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vc vector<int>
//
class Solution
{
public:
    string decodeString(string s)
    {
        stack<int> num;
        stack<string> str;
        int n = s.size();
        int number = 0;
        string strs = "";
        string res = "";
        for (int i = 0; i < n; i++)
        {
            char curr = s[i];
            if (curr == '[')
            {
                num.push(number);
                number = 0;
                str.push(strs);
                strs = "";
            }
            else if ((curr >= 'A' && curr <= 'Z') || (curr >= 'a' && curr <= 'z'))
            {
                strs += curr;
            }
            else if (curr >= '0' && curr <= '9')
            {
                number = number * 10 + curr - '0';
            }
            else if (curr == ']')
            {

                int c_num = num.top();
                num.pop();
                for (int i = 0; i < c_num; i++)
                {
                    str.top() += strs;
                }
                strs = str.top();
                str.pop();
            }
        }
        return strs;
    }
};
//
int main()
{
    Solution S;
    // vc v={};
    cout << S.decodeString("3[a2[c]]");
    return 0;
}
