#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MAX = 0x3f3f3f3f;
 
////////////////////////////////////////////////
void solve()
{
  ll n,k;
  cin>>n>>k;
  if(n%2==0)
  {
      if(k%n==0)
      cout<<n<<endl;
      else
      cout<<k%n<<endl;
  }
  else
  {
     if(k<=n/2)
     {
         cout<<k<<endl;
     }
     else
     {
         ll ans = ((k-1)/(n/2)+k)%n;
         if(ans==0)
         {
             cout<<n<<endl;
         }
         else
         {
             cout<<ans<<endl;
         }
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