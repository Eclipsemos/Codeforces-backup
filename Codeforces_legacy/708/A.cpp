#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define N 1002001

void solve()
{
  int n;
  cin>>n;
  map<int,int> mp;
  for(size_t i=0;i<n;i++)
  {
        int curr;
        cin>>curr;
        mp[curr]++;
  }
  for(int i=0;i<=100;i++)
  {
      if(mp[i]>0)
      {
          cout<<i<<" ";
          mp[i]--;
      }
  }
  for(int i=0;i<=100;i++)
  {
      while(mp[i]>0)
      {
          cout<<i<<" ";
          mp[i]--;
      }
  }
  cout<<endl;
}

int main()
{
  int t;
  cin>>t;
  while(t--)
  {
    solve();
  }
  return 0;
}