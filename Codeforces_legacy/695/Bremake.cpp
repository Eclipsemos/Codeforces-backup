#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MAX = 0x3f3f3f3f;


////////////////////////////////////////////////
vector<ll> arrcopy;

ll check(ll index)
{
  ll ans=0;
  if(index>1&&index<arrcopy.size()-1)
  {
    if(arrcopy[index]>arrcopy[index-1]&&arrcopy[index]>arrcopy[index+1])
     ans++;
    if(arrcopy[index]<arrcopy[index-1]&&arrcopy[index]<arrcopy[index+1])
     ans++;
  }
  return ans;
}

void solve()
{
  ll arr_size;
  ll sum=0;
  cin>>arr_size;
  vector<ll> arr(1,0);
  for(int i=1;i<=arr_size;i++)
  {
    ll item;
    cin>>item;
    arr.push_back(item);
  }
  arrcopy = arr;
  //1-n
  for(int i=1;i<=arr_size;i++)
    sum+=check(i);
  ll res=sum;
  for(int i=2;i<=arr_size-1;i++)
  {
    ll temp = sum - check(i)-check(i-1)-check(i+1);
    ll curr = arrcopy[i];
    arrcopy[i]=arrcopy[i-1];
    temp += check(i)+check(i-1)+check(i+1);
    arrcopy[i]=curr;
    res=min(res,temp);

    temp = sum - check(i)-check(i-1)-check(i+1);
    curr = arrcopy[i];
    arrcopy[i]=arrcopy[i+1];
    temp += check(i)+check(i-1)+check(i+1);
    arrcopy[i]=curr;
    res=min(res,temp);
  }
  cout<<res<<endl;
}

int main()
{
  int number = 0;
  cin >> number;
  for (ll i = 0; i < number; i++)
    solve();
  return 0;
}