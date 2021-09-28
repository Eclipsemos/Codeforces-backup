#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vc vector<int>

//
class Solution
{
public:
    int lengthOfLastWord(string s)
    {
        int flag=0;
        int maxs=0;
        for(int i=s.size()-1;i>=0;i--)
        {
            if(s[i]==' ')
            {
                if(flag==1)
                 {
                   break;   
                 }
            }
            else
            {
                flag=1;
                maxs++;
            }
        }
        return maxs;
    }
};
//
int main()
{
    Solution S;
    string  str="luffy is still joyboy";
    cout<<S.lengthOfLastWord(str);
    return 0;
}
