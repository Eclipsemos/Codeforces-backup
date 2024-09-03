#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vc vector<int>

//
class Solution
{
private:
    vector<int> cal(string str)
    {
        vector<int> ans;
        string s = "";
        for (int i = 0; i < str.size(); i++)
        {
            if (str[i] == '.' || i == str.size() - 1)
            {
                if (i == str.size() - 1)
                    s += str[i];
                ans.push_back(atoi(s.c_str()));
                s = "";
            }
            else
            {
                s += str[i];
            }
        }
        return ans;
    }

public:
    int compareVersion(string version1, string version2)
    {
        vector<int> v1;
        vector<int> v2;
        v1 = cal(version1);
        v2 = cal(version2);
        int i1 = 0;
        int i2 = 0;
        int l1=v1.size();
        int l2=v2.size();
        if (l1 != l2)
        {
            if (l1 < l2)
            {
                for (int i = 1; i <= l2-l1; i++)
                    v1.push_back(0);
            }
            else
            for (int i = 1; i <= l1-l2; i++)
                    v2.push_back(0);
        }
        if(l2>l1)
         l1=l2;
        for (int i = 0; i < l1; i++)
        {
            if (v1[i] > v2[i])
                return 1;
            else if (v1[i] < v2[i])
                return -1;
        }

        return 0;
    }
};
//
int main()
{
    Solution S;
    string s1 = "1.05";
    string s2 = "1.1";
    cout << S.compareVersion(s1, s2);
    return 0;
}
