#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MAX = 0x3f3f3f3f;

////////////////////////////////////////////////
void solve()
{
    int num;
    int ans=0;
    cin >> num;
    vector<int> arr(num,0);
    for(int i=0;i<num;i++)
    {
        cin>>arr[i];
    }
    //
    sort(arr.begin(),arr.end());
    for(int i=0;i<num;i++)
    {
        for(int j=0;j<num;j++)
        {
            if(arr[i]>arr[j])
            {
                ans++;
                break;
            }
             
        }
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