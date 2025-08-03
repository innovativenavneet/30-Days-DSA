#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    void grAnagram(vector<string> &str)
    {
        unordered_map<string, vector<string>> mp;

        // step 1 : we will loop to every string and sort
        for (string &a : str)
        {
            // storing inside a container for every string to do sorting operation
            string sortedWord = a;
            sort(sortedWord.begin(), sortedWord.end());

            // step 2: storing the sorted word into key and the relevant string like ["ate","eat","tea"] as value
            mp[sortedWord].push_back(a);
        }

        // step 3 : store the made char array string into 2-D array
        vector<vector<string>> result;
        for (auto &s : mp)
        {
            result.push_back(s.second);
        }

        // lets print the result
        for (int i = 0; i < result.size(); i++)
        {
            cout << "[ ";
            for (int j = 0; j < result[i].size(); j++)
            {
                cout << "\"" << result[i][j] << "\"";
                if (j != result[i].size() - 1)
                    cout << ", ";
            }
            cout << " ]" << endl;
        }
    }
    void grAnagram2(vector<string> &strs)
    {
        unordered_map<string, vector<string>> mp;

        for (string &s : strs)
        {
            // Build a character count key
            vector<int> count(26, 0);
            for (char c : s)
            {
                count[c - 'a']++;
            }

            // Convert count to a string key
            string key;
            for (int i = 0; i < 26; ++i)
            {
                key += "#" + to_string(count[i]);
            }

            mp[key].push_back(s);
        }

        // Print result
        for (auto &group : mp)
        {
            cout << "[ ";
            for (auto &word : group.second)
            {
                cout << "\"" << word << "\", ";
            }
            cout << "]\n";
        }
    }
};

int main()
{
    Solution s;
    vector<string> str = {"eat", "tea", "tan", "ate", "nat", "bat"};
    /*Output: [["bat"],["nat","tan"],["ate","eat","tea"]]
      Explanation:
      There is no string in strs that can be rearranged to form "bat".
      The strings "nat" and "tan" are anagrams as they can be rearranged to form each other.
      The strings "ate", "eat", and "tea" are anagrams as they can be rearranged to form each other.*/

    s.grAnagram(str);
    s.grAnagram2(str);
    return 0;
}