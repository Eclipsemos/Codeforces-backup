#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll llinf = 4223372036854775807;

////////////////////////////////////////////////
void solve()
{
    int n;
    cin>>n;
    map<ll,int> mp;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        mp[x]++;
    }
    priority_queue<pair<ll,int>>q;
    for(auto [key,value]:mp)
    {
        q.push({value,key});
    }
    int num=n;
    while(q.size()>=2)
    {
        auto [v1,k1] = q.top();
        q.pop();
        auto [v2,k2] = q.top();
        q.pop();
        v1--;
        v2--;
        num=num-2;
        if(v1)
        {
            q.push({v1,k1});
        }
        if(v2)
        {
            q.push({v2,k2});
        }
    }
    cout<<num<<endl;
    return;
}

int main()
{
  int number = 0;
  cin >> number;
  for (ll i = 0; i < number; i++)
    solve();
  return 0;
}