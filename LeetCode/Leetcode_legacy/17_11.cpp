// Eclipsemos UWMADISON CS 2022
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vc vector<int>
//
class Solution
{
public:
    int findClosest(vector<string> &words, string word1, string word2)
    {
        int la = -1;
        int lb = -1;
        int n = words.size();
        int ans = n;
        for (int i = 0; i < n; i++)
        {
            if(words[i]==word1)
            {
                la = i;
                if(lb>=0)
                {
                    ans = min(ans,la-lb);
                }
            }
            if(words[i]==word2)
            {
                lb = i;
                if(la>=0)
                {
                    ans = min(ans,lb-la);
                }
            }
        }
        return ans;
    }
};
//
int main()
{
    Solution S;
    vector<string> v ={"I","am","a","student","from","a","university","in","a","city"};
    S.findClosest(v,"a","student");
    // vc v={};

    return 0;
}
