#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vc vector<int>

//
class Solution
{
public:
    int finalValueAfterOperations(vector<string> &operations)
    {
        int ans=0;
        for(auto s:operations)
        {
            for(int i=0;i<s.size();i++)
            {
                if(s[i]=='+')
                {
                    ans++;
                    break;
                }
                if(s[i]=='-')
                 {
                     ans--;
                     break;
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
    vector<string> v;
    v.push_back("++X");v.push_back("X++");v.push_back("--X");
    cout<<S.finalValueAfterOperations(v);
    return 0;
}
