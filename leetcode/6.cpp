#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    string convert(string s, int numRows)
    {
        if(numRows==1)
         return s;
        int space = 2 * numRows - 2;
        int index = 0;
        int len = s.size();
        int add = 0;
        string ans;
        for (int i = 0; i < numRows; i++)
        {
            index = i;
            add = i * 2;
            while (index < len)
            {
                ans += s[index];
                add = space - add;
                if (i == 0 || i == numRows - 1)
                {
                    index+=space;
                }
                else 
                 index+=add;
            }
        }
        return ans;
    }
};

int main()
{
    Solution S;
    return 0;
}