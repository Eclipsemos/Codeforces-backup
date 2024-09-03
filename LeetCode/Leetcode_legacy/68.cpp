#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vc vector<int>

//
class Solution
{
private:
    string join(vector<string>&words, int left,int right,string sep)
    {

    }
public:
    vector<string> fullJustify(vector<string> &words, int maxWidth)
    {
        vector<string> ans;
        int right=0, n = words.size();
        while(1)
        {
            int left = right;
            int sumLen =0;
            while(right<n&&sumLen+words[right].length()+right-left<=maxWidth)
             sumLen += words[right++].length();
            if(right==n)
            {
                string s = join(words,left,n," ");
                ans.emplace_back(s+string(maxWidth-s.length(),' '));
                return ans;
            }
            int numWords = right-left;
            int numSpaces = maxWidth-sumLen;
            if(numWords==1)
             {
                 ans.push_back();
             }
        }
    }
};
//
int main()
{
    Solution S;
    vector<string> s={"This", "is", "an", "example", "of", "text", "justification."};
    S.fullJustify(s,16);
    return 0;
}
