#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
#define re register
//EDGE
#define N 2e+5
int a, b;

void solve()
{
    
    cin >> a >> b;
    int n = a + b;
    vi arr(n + 1, -1);
    arr[0] = 0;
    string s;
    cin >> s;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '1')
        {
            arr[i + 1] = 1;
            b--;
        }
        if (s[i] == '0')
        {
            arr[i + 1] = 0;
            a--;
        }
        if (s[i] == '?')
            arr[i + 1] = -1;
    }
    int flag = 1;

    for (int i = 1; i <= n; i++)
    {
        int x = i;
        int y = n + 1 - i;
        if(x!=y)//not the mid one
        if (arr[x]!=-1)//this one is not ?
        {
            //if the corresponding is ?
            if(arr[y]==-1)
            {
                if(arr[])
            }
        }
    }

    //remain check

    //judge
    if (flag)
    {
        string ans;
        for (int i = 1; i <= n; i++)
        {
            if (arr[i] == 1)
                ans += "1";
            if (arr[i] == 0)
                ans += "0";
        }
        cout << ans << endl;
        return;
    }
    else
    {
        cout << "-1" << endl;
    }
}

int main()
{
    int T;
    cin >> T;
    while (T--)
        solve();
    return 0;
}
/*
 even: 01?????0
*/