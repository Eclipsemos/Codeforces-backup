// Xinyun Ye UWMADISON CS 2021
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vc vector<int>
//
struct Node
{
    // 因为只有小写字母，所以用26即可
    Node* children[26];

    bool isWord;
    Node()
    {
        isWord = false;
        memset(children, 0, sizeof(children));
    }
};

class StreamChecker {
private:
    Node* root;
    string currStr = "";
public:
    StreamChecker(vector<string>& words) {
        root = new Node();
        for (string& word : words)
        {
            Node* curr = root;
            for (int i = word.size()-1; i >= 0; --i)
            {
                if (curr->children[word[i]-'a'] == nullptr)
                {
                    curr->children[word[i]-'a'] = new Node();
                }
                curr = curr->children[word[i]-'a'];
            }
            curr->isWord = true;
        }
    }
    
    bool query(char letter) {
        currStr += letter;
        Node* curr = root;
        for (int i = currStr.size()-1; i >= 0; --i)
        {
            int c = currStr[i] - 'a';
            if (curr->children[c] == nullptr)
            {
                return false;
            }
            else
            {
                curr = curr->children[c];
                // 找到一个单词即可返回
                if (curr->isWord)
                {
                    return true;
                }
            }
        }

        // 默认返回fakse
        return false;
    }
};



/**
 * Your StreamChecker object will be instantiated and called as such:
 * StreamChecker* obj = new StreamChecker(words);
 * bool param_1 = obj->query(letter);
 */
//
int main()
{
    // vc v={};
    vector<string> v = {"ab","ba","aaab","abab","baa"};
    StreamChecker s(v);
    ///["a"],["a"],["a"],["a"],["a"],["b"],["a"],["b"],["a"]
    s.query('a');
    s.query('a');
    s.query('a');
    s.query('a');
    s.query('a');
    s.query('b');
    s.query('a');
    s.query('b');
    s.query('a');
    return 0;
}
