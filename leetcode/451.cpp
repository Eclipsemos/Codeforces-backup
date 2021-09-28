#include <bits/stdc++.h>
using namespace std;
////
class Solution
{
public:
    string frequencySort(string s)
    {
        map<char,int> record;
        string ans;
        for(char c:s)
            record[c]++;
        map<char,int>::iterator iter;
        iter = record.begin();
        multimap<int,char,greater<int>> data;
        while(iter!=record.end())
        {
            pair<int,char> p(iter->second,iter->first);
            data.insert(p);
            iter++;
        }
        multimap<int,char,greater<int>>::iterator iter2;
        iter2 = data.begin();
        while(iter2!=data.end())
        {
            int num = iter2->first;
            for(int i=0;i<num;i++)
             ans+=iter2->second;
            iter2++;
        }
        return "";
    }
};
int main()
{
    Solution S;
    S.frequencySort("Aabb");
    return 0;
}
