
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
#define re register
//EDGE
#define N 2e+5

void solve()
{
    deque<int> arr;
    int n, q;
    int curr;
    cin >> n >> q;
    map<int, int> mark;
    for (int i = 0; i < n; i++)
    {
        cin >> curr;
        arr.push_back(curr);
        if (mark[curr] == 0)
        {
            mark[curr] = i;
        }
    }
    int offset = 0;
    for (int i = 0; i < q; i++)
    {
        cin >> curr;
        int here;
        if (mark[curr] != 0)
        {
            here = mark[curr] + offset;
        }
        cout << here + 1 << endl;
        arr[here] = -1;
        mark[curr] = 0;
        offset++;
        for (int i = 1; i <= n; i++)
        {
            if (arr[i] == curr)
                mark[curr] = i;
        }
        arr.push_front(curr);
    }
    return;
}

int main()
{
    solve();
    return 0;
}
