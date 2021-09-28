#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MAX = 0x3f3f3f3f;

////////////////////////////////////////////////
void solve()
{
    int num,d;
    cin>>num>>d;
    if (!d) d+=10;
    int max_d= 10*d;
    bool dp[207];
    memset(dp,0,sizeof(dp));
    dp[0]=1;

    for(int i=0;i*10+d<=max_d;++i)
    {
        for(int j=0;j+i*10+d<=max_d;++j)
        {
            if(dp[i*10+j+d]==1||dp[j]==1)
             dp[i*10+j+d]=1;
        }
    }
/*
for (int i=0;10*i+d<=mx;++i)
{
    for (int j=0;10*i+d+j<=mx;++j)
    {
        dp[10*i+d+j]|=dp[j];
    }
}
*/
    for(int i=0;i<num;i++)
    {
        int curr;
        cin>>curr;
        if(curr>=max_d||dp[curr])
           cout<<"YES"<<endl;
        else
        {
            cout<<"NO"<<endl;
        }
        
    }
}

int main()
{
  int number = 0;
  cin >> number;
  for (ll i = 0; i < number; i++)
    solve();
  return 0;
}