#include<bits/stdc++.h>
using namespace std;    

class Solution {
    public:
    // by usng pointer 
        bool canJump(vector<int>& nums) {
            int finalflag = nums.size() - 1;
            for (int target = nums.size() - 2; target >= 0; target--) {
                if (target + nums[target] >= finalflag) {
                    finalflag = target;
                }
            } 
            return finalflag == 0;
        }

        bool canuJump2(vector<int>& nums) {
            int n = nums.size();
            int maxReach = 0;
            for (int i = 0; i < n; i++) {
                if (i > maxReach) {
                    return false;
                }
                maxReach = max(maxReach, i + nums[i]);
                cout << "maxReach: " << maxReach << endl;
            }
            return true;
        }
};

int main() {
    Solution s;
    // example array 
    vector<int> nums = {2, 3, 1, 1, 4};
    bool ans = s.canJump(nums);
    if (ans) {
        cout << "The array is valid and can jump" << endl;
    } else {
        cout << "The array is invalid and cannot jump" << endl;
    }

    bool ans2 = s.canuJump2(nums);
    if (ans2) {
        cout << "The array is valid and can jump" << endl;
    } else {
        cout << "The array is invalid and cannot jump" << endl;
    }
    return 0;
}
