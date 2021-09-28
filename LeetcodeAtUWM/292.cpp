#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vc vector<int>

//
class Solution
{
public:
    bool canWinNim(int n)
    {
       
        if(n%4!=0)
        return false;

        return true;
    }
};
//
int main()
{
    Solution S;
    cout<<S.canWinNim();
    return 0;
}
