// Xinyun Ye UWMADISON CS 2021
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vc vector<int>
//
unordered_map<string, int> used;
unordered_map<string, vector<string>> mp;

ostringstream ostr;
//
void dfs(string now)
{
    ostr << now << " ";
    for (string x : mp[now])
    {
        if (!used.count(x))
        {
            used[x]++;
            dfs(x);
        }
    }
}

int main()
{
    int T;
    cin >> T;
    cin.ignore();
    while (T--)
    {
        ostr.str("");
        used.clear();
        mp.clear();
        int num;
        cin >> num;
        cin.ignore();
        ostr.clear();
        string ans;
        map<string, int> points;
        for (int i = 0; i < num; i++)
        {
            string input;
            getline(cin, input);
            istringstream istr(input);
            string curr;
            istr >> curr;
            if (!points.count(curr))
                points[curr]++;
            string next;
            while (istr >> next)
            {
                if (!mp.count(curr) || find(mp[curr].begin(), mp[curr].end(), next) == mp[curr].end())
                {
                    mp[curr].push_back(next);
                }
            }
        }
        //
        for (auto x : points)
        {
            if (!used.count(x.first))
            {
                used[x.first]++;
                dfs(x.first);
            }
        }
        ans = ostr.str();
        ans = ans.substr(0,ans.size()-1);
        cout<<ans;
    }
    // vc v={};
    return 0;
}
