#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool search(string &str, char ch)
    {
        for (int i = 0; i < str.length(); i++)
        {
            if (str[i] == ch)
            {
                return true;
            }
        }
        return false;
    }
};

int main()
{
    Solution s;

    string str = "navneet";
    char ch = 'k';
    int ans = s.search(str, ch);
    if (ans == 1)
    {
        cout << "the character " << ch << " is found";
    }
    else
    {
        cout << "the ch has not found";
    }
    return 0;
}