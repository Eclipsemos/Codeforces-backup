#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MAX=0x3f3f3f3f;


void solve()
{
    ll n1,n2,n3;
    cin>>n1>>n2>>n3;
    vector<ll>s(n1+n2+n3,0);
    
    //
    for(ll i =0;i<n1+n2+n3;i++)
      cin>>s[i];
    sort(s.begin(),s.end(),less<ll>());
    ll sum=s[0];
    for(ll i=s.size()-1;i>=1;i--)
    {
        if(i==1)
        {
            sum=abs(sum)-abs(s[i]);
            break;
        }
        else
        {
            sum=sum-s[i];
        }
        
    }
    cout<<sum<<endl;
    /////////
    
}


int main()
{
    solve();
  return 0;
}