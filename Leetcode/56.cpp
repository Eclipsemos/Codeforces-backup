//Xinyun Ye UWMADISON CS 2021
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vc vector<int>
//
class Solution
{
public:
    bool static cmp(vector<int> a,vector<int> b)
    {
        return a[0]<b[0];
    };
    vector<vector<int>> merge(vector<vector<int>> &intervals)
    {
        sort(intervals.begin(),intervals.end(),cmp);
        vector<int> book;
        book.resize(intervals.size());
        vector<vector<int>> ans;
        for(int i=1;i<intervals.size();i++)
        {
            if(intervals[i][0]<=intervals[i-1][1])
            {
                book[i-1]=1;
                intervals[i][0]=min(intervals[i-1][0],intervals[i][0]);
                intervals[i][1]=max(intervals[i-1][1],intervals[i][1]);
            }
        }
        for(int i=0;i<intervals.size();i++)
        {
            if(book[i-1]!=1)
            ans.push_back(intervals[i]);
        }
        return  ans;
    }
};
//
int main()
{
    Solution S;
    //vc v={};

    return 0;
}
