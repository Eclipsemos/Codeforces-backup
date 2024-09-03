//Eclipsemos UWMADISON CS 2023
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vc vector<int>
//
class Solution {
public:
    int minimumDeletions(string word, int k) {
        map<char,int> mp;
        for(auto c:word)
            mp[c]++;
        vector<int> v;
        for(auto x:mp)
        {
            v.push_back(x.second);
            //cout<<x.second<<endl;
        }
        sort(v.begin(),v.end());
        int n = v.size();
        int ans = 0;
        int index = 0;
        int i = n-1;
        while(i>=index)
        {
            //cout<<ans<<endl;
            int diff = v[i] - v[index];
            if(diff<=k)
                return ans;
            //v[0] <= diff - k;
            if(diff-k<v[index])
            {
                ans += diff-k;
                i--;
            }
            else if(diff-k>v[index])
            {
                ans += v[index];
                index++;
            }
            else
            {
                int large = lower_bound(v.begin(),v.end(),v[index]+k+1)-v.begin();
                if(large-index>1)
                {
                    ans += diff-k;
                    i--;
                }
                else
                {
                    ans += v[index];
                    index++;
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
   //vc v={};
    S.minimumDeletions("zzfzzzzppfp",1);
    return 0;
 }
