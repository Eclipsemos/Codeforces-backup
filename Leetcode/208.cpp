//Xinyun Ye UWMADISON CS 2021
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vc vector<int>
//
class Trie
{
public:
    vector<Trie *> children;
    string word;
    Trie() : children(26)
    {
    }

    void insert(string word)
    {
        Trie *now = this;
        for (int i = 0; i < word.size(); i++)
        {
            char curr = word[i];
            if (!now->children[curr - 'a'])
                now->children[curr - 'a'] = new Trie();
            now = now->children[curr - 'a'];
        }
        now->word = word;
    }

    bool search(string word)
    {
        string res = "";
        Trie *now = this;
        for (int i = 0; i < word.size(); i++)
        {
            if (now->children[word[i] - 'a'])
            {
                now = now->children[word[i] - 'a'];
            }
            else
                return false;
        }
        if(now->word!=word)
        return false;
        return true;
    }

    bool startsWith(string prefix)
    {
        string res = "";
        Trie *now = this;
        for (int i = 0; i < prefix.size(); i++)
        {
            if (now->children[prefix[i] - 'a'])
            {
                now = now->children[prefix[i] - 'a'];
            }
            else 
                return false;
        }
        return true;
    }
};
//
int main()
{
    Trie *obj = new Trie();
    obj->insert("apple");
    //vc v={};
    cout << obj->search("app");
    return 0;
}
