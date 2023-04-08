//Eclipsemos UWMADISON CS 2023
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vc vector<int>
//
class Solution {
public:
    string addBinary(string a, string b) {
        reverse(a.begin(), a.end());
        reverse(b.begin(), b.end());
        string ans = "";
        if(a.size()>b.size())
            swap(a,b);
        if(a.size()<b.size())
        {
            int k = b.size()-a.size();
            for(int i=1;i<=k;i++)
                a+="0";
        }
        //add
        int carr = 0;
        for(int i=0;i<a.size();i++)
        {
            carr += (a.at(i)=='1') ? 1:0;
            carr += (b.at(i)=='1') ? 1:0;
            ans.push_back((carr % 2)? '1':'0');
            carr /=2;
        }
        if(carr)
            ans.push_back('1');
        
        reverse(ans.begin(),ans.end());
        return ans;
    }
};
//
int main()
{
    Solution S;
   //vc v={};
   cout<<S.addBinary("1","111");
    return 0;
 }
