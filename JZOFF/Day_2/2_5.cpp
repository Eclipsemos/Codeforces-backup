// Eclipsemos UWMADISON CS 2023
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vc vector<string>
//
class Solution
{
public:
    int maxProduct(vector<string> &words)
    {
        int len = words.size();
        int index = 0;
        vector<int> arr(len, 0);
        for (string word : words)
        {
            int current_v = 0;
            for (int i = 0; i < word.size(); i++)
            {
                int bit = word[i] -'a';
                current_v |= 1<<bit; 
            }
            arr[index++] = current_v;
        }
        int ans =0;
        for(int i=0;i<len-1;i++)
            for(int j=i+1;j<len;j++)
            {
                if((arr[i]&arr[j])==0)
                {
                   if((words[i].size()*words[j].size())>ans)
                    ans = words[i].size()*words[j].size();
                }
            }
        return ans;
    }
};
//
int main()
{
    Solution S;
    vc v={"abcw","baz","foo","bar","fxyz","abcdef"};
    S.maxProduct(v);
    return 0;
}
