#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve()
{
    ll sum=0;
    ll divx,size;
    cin>>size>>divx;
    vector<ll> arr;
    for(ll i=0;i<size;i++)
      {
          ll item=0;
          cin>>item;
          arr.push_back(item);
      }
    //
    ll p=0;
    ll flag[1000]={0};
    for(ll i=0;i<arr.size();i++)
    if(arr[i]%divx!=0)
    {
      if(i==0)
       flag[0]=1;
      flag[1]=1;
     break;
    }
    
    while(p<arr.size())
    {
        if(arr[p]%divx==0&&flag[0]==0)
        { 
        ll item=arr[p];
        ll level=0;
        while(item%divx==0&&flag[level]==0)
        {
            item=item/divx;
            level++;
            if(item%divx!=0&&item!=0)
              flag[level]=1;
            if(flag[level-1]==0)
            {
              sum+=arr[p];
            }
        }
        }
        else
        {
          flag[0]=1;
        }  
        sum+=arr[p];
        p++;
    }
    cout<<sum<<endl;
    return; 
}


int main()
{
  ll number = 0;
  cin>>number;
  for(size_t i=0;i<number;i++)
    solve();
  return 0;
}