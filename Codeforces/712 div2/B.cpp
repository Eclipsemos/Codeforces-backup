#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
#define N 1002001

void solve()
{
    string s;
    string t;
    int n;
    cin >> n;
    cin >> s;
    cin >> t;
    int n0 = 0;
    int n1 = 0;
    bool flag=1;
    if(n&1)
    {
        if(s[n-1]!=t[n-1])
         flag=0;
        n--;
    }
    int mt=0;
    int pre=-1;
    int same=1;
    int diff=1;
    for(int i=0;i<n;i++)
    {
        if(s[i]=='1')
        {
            n1++;
            if(t[i]=='0')
            mt=1;
        }
        else
        {
            n0++;
            if(t[i]=='1')
            mt=1;
        }
        if(n0==n1)
        {
            same=1; diff=1;
            mt=0;
            for(int j=pre+1;j<=i;j++)
            {
                if(s[j]==t[j]) diff=0;
                else same=0;
            }
            if(diff==0&&same==0)
             flag=0;
            pre=i;
        }
    }

    if(mt) flag=0;
    if(flag)
     cout<<"YES"<<endl;
    else
      cout<<"NO"<<endl;
    
}

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        solve();
    }
    return 0;
}