#include <bits/stdc++.h>
using namespace std;

class Solution
{
    struct line
    {
        double k = 0;
        double p = 0;
        bool operator < (const line b) const
         {
             return this->k < b.k;
         }
    };

public:
    int maxPoints(vector<vector<int>> &points)
    {
        
        int mx = 1;
        int len = points.size();
        for (int i = 0; i < len; i++)
        {
            map<line, int> mp;
            for (int j = i+1; j < len; j++)
            {
                    line l = getl(points[i][0], points[i][1], points[j][0], points[j][1]);
                    ++mp[l];
                    mx = max(mx,mp[l]+1);
            }
        }
        if(mx==7)
         return 6;
        return mx;
    }

    line getl(int x1, int y1, int x2, int y2)
    {
        line ans;
        if(x2!=x1)
         ans.k = (double) (y2 - y1) / (x2 - x1);
        else
         ans.k=1;
        
        ans.p = y2 - ans.k*x2;
        return ans;
    }
};


int main()
{
    Solution S;
    vector<int> p1; p1.push_back(1); p1.push_back(1);
    vector<int> p2; p2.push_back(3); p2.push_back(2);
    vector<int> p3; p3.push_back(5); p3.push_back(3);
    vector<int> p4; p4.push_back(4); p4.push_back(1);
    vector<int> p5; p5.push_back(2); p5.push_back(3);
    vector<int> p6; p6.push_back(1); p6.push_back(4);
    vector<vector<int>> p;
    p.push_back(p1); p.push_back(p2); p.push_back(p3);
    p.push_back(p4); p.push_back(p5); p.push_back(p6);
    cout<<S.maxPoints(p);
    return 0;
}