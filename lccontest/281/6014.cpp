// Xinyun Ye UWMADISON CS 2021
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vc vector<int>
//
class Solution
{
public:
    string repeatLimitedString(string s, int repeatLimit)
    {
        int count[26];
        memset(count, 0, sizeof(count));
        for (int i = 0; i < s.size(); i++)
            count[s[i] - 'a']++;
        string ans = "";
        int c = 0;
        int i = 25;
        while (true)
        {
            while(i>=0&&count[i]==0)
             i--;
            if(i==-1)
             break;
            while(count[i]>0&&c<repeatLimit)
            {
                c++;
                ans += (i+'a');
                count[i]--;
            }
            c=0;
            if(count[i]==0)
             continue;
            else
            {
                int j=i-1;
                while(j>=0&&count[j]==0)
                 j--;
                if(j>=0)
                 {
                     ans+=(j+'a');
                     count[j]--;
                 }
                 else
                 break;
            }
        }
        return ans;
    }
};
//
int main()
{
    Solution S;
    S.repeatLimitedString("cczazcc", 3);

    return 0;
}
