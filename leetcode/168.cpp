#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    string convertToTitle(int columnNumber)
    {
        string ans;
        int index = 1;
        while (columnNumber > 0)
        {
            int index;
            if (columnNumber > 26)
            {
                index = columnNumber % 26;
                if (index == 0)
                {
                    ans = 'Z' + ans;
                    columnNumber = columnNumber / 26 - 1;
                }
                else
                {
                    ans = char(64 + index) + ans;
                    columnNumber /= 26;
                }
            }
            else
            {
                index = columnNumber;
                ans = char(64 + index) + ans;
                return ans;
            }
        }
        return ans;
    }
};

int main()
{
    Solution S;
    cout << S.convertToTitle(52);
    return 0;
}