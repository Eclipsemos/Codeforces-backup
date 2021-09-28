#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll llinf = 4223372036854775807;
//greedy
////////////////////////////////////////////////
void solve()
{
  int n,k;
  cin>>n>>k;
  string str;
  cin>>str;
  int fi = str.find_first_of('*');
  int pointer = 0;
  int ans=0;
  while(pointer<=n-1)
  {
    int curr=pointer;
    if(str[pointer]=='*')
    {
      ans++;
      int pos=pointer;
      for(int i=1;i<=k;i++)
      {
        if((pointer+i)<n)
        {
          if(str[pointer+i]=='*')
            pos = pointer+i;
        }
      }
      pointer = pos;
    }
    if(curr==pointer)
    pointer++;
  }
  cout<<ans<<endl;
}

int main()
{
  int number = 0;
  cin >> number;
  for (ll i = 0; i < number; i++)
    solve();
  return 0;
}