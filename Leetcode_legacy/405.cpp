//Xinyun Ye UWMADISON CS 2021
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vc vector<int>
//
class Solution
{
public:
    string toHex(int num1)
    {
        if(num1==0)
         return "0";
        string hex = "0123456789abcdef";
        unsigned int num = num1;
        string ans;
        while(num!=0)
        {

            int temp  = num&15;
            num>>=4;
            ans.push_back(hex[temp]);
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};
//
int main()
{
    Solution S;
    //vc v={};
    cout<<S.toHex(16);
    return 0;
}
