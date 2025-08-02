#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    void insertInstring(string &s, char c, int pos)
    {
        for (int i = 0; i < s.length(); i++)
        {
            if (i == pos)
            {
                s[i] = s[c];
            }
        }
    }
};

int main()
{
    Solution s;
    string str = "navnet";
    char x = 'e';
    int a = 5;
    s.insertInstring(str, x, a);

    cout << str;
    return 0;
}