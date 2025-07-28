#include <bits/stdc++.h>
using namespace std;

class A
{
public:
    // Brute-force O(n^2) solution
    vector<int> twoSum1(vector<int> nums, int target, int n)
    {
        vector<int> ans = {};
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < i; j++)
            {
                if (nums[i] + nums[j] == target)
                {
                    ans.push_back(i);
                    ans.push_back(j);
                    // return ans;
                }
            }
        }
        return ans;
    }

    // lets solve this using optimal method
    vector<int> twoSum2(vector<int> nums, int target, int n)
    {
        unordered_map<int, int> mp;
        for (int i = 0; i < n; i++)
        {
            int compliment = target - nums[i];
            if ((mp.find(compliment)) != mp.end())
            {
                cout << "compliment " << mp[compliment] << endl;
                cout << "index " << i << endl;
                return {mp[compliment], i};
            }
            // we will store the key value pair in map such that key == indices , value == array ele
            mp[nums[i]] = i;
        }
        return {};
    }
};

int main()
{
    A obj;
    vector<int> nums = {2, 7, 11, 15};
    int n = nums.size();
    int target = 9;

    // vector<int> result = obj.twoSum1(nums, target, n);
    vector<int> result = obj.twoSum2(nums, target, n);

    for (int i = 0; i < result.size(); i++)
    {
        cout << "The answer index is: " << result[i] << endl;
    }

    return 0;
}
