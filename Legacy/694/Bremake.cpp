#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MAX=0x3f3f3f3f;


void solve()
{
    ll sum=0;
    ll arr_size, divx;
    cin>>arr_size>>divx;
    vector<ll> arr,arr_copy;
    for(ll i=0;i<arr_size;i++)
    {
      ll item;
      cin>>item;
      arr.push_back(item);
      sum+=item;
    }
    arr_copy = arr;
    //pre proecess finished.
  for(;;)
  {
    int flag=0;
    for(ll i=0;i<arr_size;i++)
    {
      if (arr_copy[i]%divx==0)
      {
        sum+=arr[i];
        arr_copy[i]/=divx;
      }
      else
      {
        flag=1;
        break;
      }
      
    }
    if(flag==1)
     break;
  }
  cout<<sum<<endl;
  return;
}


int main()
{
  int number = 0;
  cin>>number;
  for(size_t i=0;i<number;i++)
    solve();
  return 0;
}