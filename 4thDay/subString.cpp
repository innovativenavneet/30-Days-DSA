#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool subString(string &str, string &ch)
    {
        int n1 = str.length();
        int n2 = ch.length();
        /*step 1 : lets run a loop (n1 - n2 ) becuse after this if no char found then there is no use for traversing more*/
        for (int i = 0; i <= n1 - n2; i++)
        {
            int count = 0;
            for (int j = 0; j < n2; j++)
            {
                // step 2 :  lets eliminate if match not found
                if (str[i + j] != ch[j])
                {
                    break;
                }
                else
                {
                    count++;
                }
            }

            if (count == n2)
            {
                cout << "the match found";
                return true;
            }
        }
        cout << "the match does not found";
        return false;
    }
};

int main()
{
    Solution s;
    string str = "navneet";
    string str2 = "vn";

    s.subString(str, str2);
    return 0;
}