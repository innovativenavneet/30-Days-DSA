/* what is an Anagram ?
Definition of Anagram:
Two strings are anagrams if they contain the same characters with the same frequency, just in a different order.
*/
#include <bits/stdc++.h>
using namespace std;

class Soultion
{
public:
    // Tc = O (n log n)
    bool Anagram1(string s, string t)
    {
        sort(s.begin(), s.end());
        sort(t.begin(), t.end());
        if (s == t)
        {
            cout << "the string is anagram";
        }
        else
        {
            cout << "the string is not anagram";
        }
    }

    // Tc = O (n)
    bool Anagram2(string s, string v)
    {
        // lets try to solve this through hasing into a map
        // intializing it like that because store it in the form of key value pair
        // where key = every char , value = its frequency
        unordered_map<char, int> count;

        if (s.size() != v.size())
        {
            cout << "the string is not anagram";
            return false;
        }

        for (char a : s)
        {
            // first storing every character and its frequency for listen like for (l , 1) ,(s,1)
            count[a]++;
        }
        for (char b : v)
        {
            // then removing the frequency for every visited char , like for 's' in silent it is already present int the
            // map so we will make its value 0
            count[b]--;
        }
        for (auto it : count)
        {
            if (it.second != 0)
            {
                cout << "the string is not anagram";

                return false;
            }
        }
        cout << "the string is anagram";
        return true;
    }
};

int main()
{
    Soultion s;
    string x = "listen";
    string v = "silent";

    s.Anagram1(x, v);

    return 0;
}