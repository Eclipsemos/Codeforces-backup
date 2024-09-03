#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll llinf = 4223372036854775807;

////////////////////////////////////////////////
void solve()
{
  ll n,m,x;
  cin>>n>>m>>x;
  ll n_1,m_1;
  n_1 = x%n;
  m_1 = x/n;
  if(x%n!=0)
   m_1++;
  else
  {
    n_1=n;
  }
  cout<<(n_1-1)*m+m_1<<endl; 
}

int main()
{
  int number = 0;
  cin >> number;
  for (ll i = 0; i < number; i++)
    solve();
  return 0;
}