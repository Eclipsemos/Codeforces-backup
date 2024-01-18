#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll llinf = 4223372036854775807;
 
////////////////////////////////////////////////
ll gcd(ll a, ll b)
{
  return b == 0 ? a : gcd(b, a % b);
}
ll big(ll num)
{
  int ans=0;
  while (num != 0)
  {
    ans += num % 10;
    num = num / 10;
  }
  return ans;
}
 
void solve()
{
  ll n;
  cin >> n;
  ll sumdig=0;
  sumdig=big(n);
  while (gcd(n,sumdig)<=1)
  {
    n=n+1;
    sumdig=big(n);
  }
  cout<<n<<endl;
}
 
int main()
{
  int number = 0;
  cin >> number;
  for (ll i = 0; i < number; i++)
    solve();
  return 0;
}