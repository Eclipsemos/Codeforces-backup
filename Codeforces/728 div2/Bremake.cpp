 #include <bits/stdc++.h>
 using namespace std;
 typedef long long ll;
 typedef vector<int> vi;
 #define re register int
 #define tst cout<<'x'<<endl;
 //EDGE
 #define N 2e+5 
 
 void solve()
 {
     int n;
     cin>>n;
     vector<ll> arr(n+1,0);
     map<ll,int> mp;
     for(int i=1;i<=n;i++)
     {
         cin>>arr[i];
         mp[arr[i]]=i;
     }
      
     sort(arr.begin(),arr.end());
     int ans=0;
     for(int i=1;i<=n;i++)
      {
          for(int j=i+1;j<=n;j++)
          {
              ll l = arr[i]*arr[j];
              ll r = mp[arr[i]]+mp[arr[j]];
              if(l>2*n)
                break;
              if(l==r)
               ans++;
               
          }
      }
      cout<<ans<<endl;
 }
 
 int main()
 {
  int T;
  cin >> T;
  while (T--)
  solve();
  return 0;
 }
 