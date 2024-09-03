// Eclipsemos UWMADISON CS 2024
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vc vector<int>
//
class Solution
{
public:
    int countPrefixSuffixPairs(vector<string> &words)
    {
        int ans = 0;
        int n = words.size();
        for(int i=0;i<n-1;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                string str1 = words[i];
                string str2 = words[j];
                if(str1.size()>str2.size())
                    swap(str1, str2);
                int n = str1.size();
                int m = str2.size();
                if(words[i]== words[j].substr(0,n)&& words[i]==words[j].substr(m-n,n))
                    ans++;
            }
        }
        return ans;
    }
};
//
int main()
{
    Solution S;
    // vc v={};

    return 0;
}
