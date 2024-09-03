#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
#define re register
//EDGE
#define N 2e+5

void solve()
{
    int a, b;
    cin >> a >> b;
    string str;
    int n = a + b;
    cin >> str;
    int flag = 1;
    vi arr(a + b, -1);
    for (int i = 0; i < n; i++)
    {
        if (str[i] == '0')
        {
            arr[i] = 0;
            a--;
        }
        else if (str[i] == '1')
        {
            arr[i] = 1;
            b--;
        }
    }
    if (n == 1)
    {
        if (arr[0] == -1)
        {
            if (a)
            {
                cout << 0 << endl;
                return;
            }
            else
            {
                cout << 1 << endl;
                return;
            }
        }
        else
        {
            if(a)
            {
                if(arr[0]!=0)
                {
                    flag=0;
                }
            }
            if(b)
            {
                if(arr[0]!=1)
                {
                    flag=0;
                }
            }

        }
        
    }
    
    for (int i = 0; i < n / 2; i++)
    {
        if (arr[i] == -1 || arr[n - i - 1] == -1)
        {
            if (arr[i] == -1 && arr[n - i - 1] != -1)
            {
                if (arr[n - i - 1] == 0)
                {
                    if (a > 0)
                    {
                        arr[i] = 0;
                        a--;
                    }
                    else
                    {
                        flag = 0;
                        break;
                    }
                }
                else if (arr[n - i - 1] == 1)
                {
                    if (b > 0)
                    {
                        arr[i] = 1;
                        b--;
                    }
                    else
                    {
                        flag = 0;
                        break;
                    }
                }
            }
            else if (arr[n - i - 1] == -1 && arr[i] != -1)
            {
                if (arr[i] == 0)
                {
                    if (a > 0)
                    {
                        arr[n - i - 1] = 0;
                        a--;
                    }
                    else
                    {
                        flag = 0;
                        break;
                    }
                }
                else if (arr[i] == 1)
                {
                    if (b > 0)
                    {
                        arr[n - i - 1] = 1;
                        b--;
                    }
                    else
                    {
                        flag = 0;
                        break;
                    }
                }
            }
            else if (arr[n - i - 1] == -1 && arr[i] == -1)
            {
                if (a < 2 && b < 2)
                {
                    flag = 0;
                    break;
                }
                if (a > b)
                {
                    a -= 2;
                    arr[n - i - 1] = 0;
                    arr[i] = 0;
                }
                else
                {
                    b = b - 2;
                    arr[n - i - 1] = 1;
                    arr[i] = 1;
                }
            }
        }
        else
        {
            if (arr[i] != arr[n - i - 1])
            {
                flag = 0;
                break;
            }
        }
    }
    if (!flag)
    {
        cout << -1 << endl;
        return;
    }
    string ans;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 1)
        {
            ans += "1";
        }
        else if (arr[i] == 0)
            ans += "0";
        else if(arr[i]==-1)
        {
            if(a)
            {
                ans+="0";
            }
            if(b)
            {
                ans+="1";
            }
        }
    }
    cout << ans << endl;
}

int main()
{
    int T;
    cin >> T;
    while (T--)
        solve();
    return 0;
}

///
/*
3 3
??????

2 2
0101

2 2
01?0

0 3
1?1
*/