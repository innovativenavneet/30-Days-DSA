#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    bool containsDuplicate(vector<int> &nums)
    {
        unordered_map<int, bool> duplicate;
        for (int i = 0; i < nums.size(); i++)
        {

            if (duplicate[nums[i]])
            {
                cout << "the duplicate value is : " << nums[i];
                return true;
            }
            // marking every value to true initially
            duplicate[nums[i]] = true;
        }
        return false;
    }
};
int main()
{
    Solution s;
    vector<int> array = {45, 56, 25, 65, 56};

    bool ans = s.containsDuplicate(array);
    if (ans == 1)
    {
        cout << " so this array contains duplicates value ";
    }
    else
    {
        cout << "the array does not contains duplicates value ";
    }
    return 0;
}