#include <bits/stdc++.h>
using namespace std;

struct node
{
    node(string name): name(name){};
    string name;
    vector<int> child;
    bool alive = 1;
};

class ThroneInheritance
{
public:
    vector<node> nodes;
    map<string, int> mp;
    ThroneInheritance(string kingName)
    {
        nodes.push_back(kingName);
        mp[kingName] = 0;
    }

    void birth(string parentName, string childName)
    {
        mp[childName] = nodes.size();
        nodes[mp[parentName]].child.push_back(nodes.size());
        nodes.push_back(childName);
    }

    void death(string name)
    {
        nodes[mp[name]].alive = 0;
    }

    vector<string> getInheritanceOrder()
    {
        vector<string> res;
        dfs(res,0);
        return res;
    }
    void dfs(vector<string>& res,int k)
    {
        if(nodes[k].alive)
         res.push_back(nodes[k].name);
        for(int c: nodes[k].child)
         dfs(res,c);
        return;
    }
};

/**
 * Your ThroneInheritance object will be instantiated and called as such:
 * ThroneInheritance* obj = new ThroneInheritance(kingName);
 * obj->birth(parentName,childName);
 * obj->death(name);
 * vector<string> param_3 = obj->getInheritanceOrder();
 */

int main()
{
    Solution S;
    return 0;
}