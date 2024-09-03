#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vc vector<int>

//
//
class Solution
{
private:
    struct node
    {
        string s;
        int index;
        node(string s, int index) : s(s), index(index){};
    };

public:
    string findLongestWord(string s, vector<string> &dictionary)
    {
        vector<node> v;
        int n = dictionary.size();
        for (int i = 0; i < n; i++)
            v.push_back(node(dictionary[i], 0));
        for (int i = 0; i < s.size(); i++)
        {
            char curr = s[i];
            for (int j = 0; j < n; j++)
            {
                if (v[j].s[v[j].index] == curr)
                {
                    v[j].index++;
                }
            }
        }
        string maxstr = "";
        vector<string> ans;
        for (int i = 0; i < n; i++)
        {
            if (v[i].index == v[i].s.size())
            {
                if (v[i].index > maxstr.size())
                {
                    ans.clear();
                    maxstr = v[i].s;
                    ans.push_back(v[i].s);
                }
                else if (v[i].index == maxstr.size())
                {
                    ans.push_back(v[i].s);
                }
            }
        }
        sort(ans.begin(), ans.end());
        if(ans.size()==0)
         return "";
        else
        return ans[0];
    }
};
//
int main()
{
    // "apple"
    // ["zxc","vbn"]
    Solution S;
    vector<string> v1 = {"zxc","vbn"};
    cout << S.findLongestWord("apple", v1);
    return 0;
}
