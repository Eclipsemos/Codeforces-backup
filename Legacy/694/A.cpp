#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MAX=0x3f3f3f3f;

void solve()
{
   ll minans=0,maxans=0;
   ll size,divx=0;
   cin>>size>>divx;
   vector<ll> a;
   ll sum=0;
   for(ll j=0;j<size;j++)
   {
       ll item;
       cin>>item;
       a.push_back(item);
       if(item%divx!=0)
        maxans+=item/divx+1;
       else
        maxans+=item/divx;
        sum+=item;
   }
   if(sum%divx!=0)
     minans=sum/divx+1;
   else
     minans=sum/divx;
    cout<<minans<<" "<<maxans<<endl;
  return;
}

int main()
{
  int number;
  cin>>number;
  for(int i=0;i<number;i++)
    solve();
  return 0;
}

