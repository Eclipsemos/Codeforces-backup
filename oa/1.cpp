//Xinyun Ye UWMADISON CS 2021
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vc vector<int>
string str = "";

void ins(string content)
{
    str += content;
}
string newTextEditor(vector<string> operations)
{
    string last = "";
    string cpstr = "";
    string del = "";
    string add = "";
    string paste = "";
    stack<string> used;
    int index;
    used.push(str);
    for (string s : operations)
    {
        if (s[0] == 'I')
        {
            ins(s.substr(7));
            last = "I";
            add = s.substr(7);
            used.push(str);
        }
        else if (s[0] == 'D')
        {
            if (str.size() != 0)
            {
                del = str[str.size() - 1];
                str.resize(str.size() - 1);
            }
             used.push(str);
        }
        else if (s[0] == 'C')
        {
             index= s[5] - '0';
            cpstr = str.substr(index);
        }
        else if (s[0] == 'P')
        {
            str = str + cpstr;
            last = "P";
            paste = cpstr;
           
            used.push(str);
        }
        else if (s[0] == 'U')
        {
            used.pop();
            str = used.top();
        }
    }
    return str;
}

int main()
{
    vector<string> v = {"INSERT a",
                        "DELETE",
                        "DELETE",
                        "COPY 0",
                        "UNDO",
                        "PASTE",
                        "UNDO",
                        "INSERT b",
                        "COPY 0",
                        "PASTE",
                        "COPY 2",
                        "PASTE",
                        "UNDO",
                        "DELETE",
                        "UNDO"};
    cout << newTextEditor(v);
    return 0;
}
