#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MAX = 0x3f3f3f3f;

////////////////////////////////////////////////
void solve()
{
  int number,ans=0,max_same=0;
  cin>>number;
  vector<int> ball(number,0);
  for(int i=0;i<number;i++)
     cin>>ball[i];
  
  for(int i=0;i<number;i++)
  {
     if(i==0)
     {
         ans++;
     }
     else
     {
         if(ball[i]==ball[i-1])
         {
             ans++;
         }
         else
         {
             ans=1;
         }
     }
     max_same=max(ans,max_same);  
  }
  cout<<max_same<<endl;
}

int main()
{
  int number = 0;
  cin >> number;
  for (ll i = 0; i < number; i++)
    solve();
  return 0;
}