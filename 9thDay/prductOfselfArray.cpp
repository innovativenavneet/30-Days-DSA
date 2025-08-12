/*
238. Product of Array Except Self

Given an integer array nums, return an array answer such that answer[i] is equal to the product of all the elements of nums except nums[i].

The product of any prefix or suffix of nums is guaranteed to fit in a 32-bit integer.

You must write an algorithm that runs in O(n) time and without using the division operation.

Example 1:

Input: nums = [1,2,3,4]
Output: [24,12,8,6]
Example 2:

Input: nums = [-1,1,0,-3,3]
Output: [0,0,9,0,0]
*/

#include <iostream>
#include <vector>
using namespace std;

class A
{
public:
  void product(vector<int> nums, int n)
  {
    // aproaching this quest in such a way that the left array contains the ele left of array which containes 1 for better multiplication
    vector<int> left(n, 1);
    vector<int> right(n, 1);
    for (int i = 1; i <= n; i++)
    {
      // such that for indices of left-array contains ele for left side of every ele
      left[i] = nums[i - 1] * left[i - 1];
    }

    for (int i = n - 2; i >= 0; i--)
    {
      // traversing from back and containes all the ele from
      right[i] = nums[i + 1] * right[i + 1];
    }

    vector<int> ans(n);
    for (int i = 0; i < n; i++)
    {
      ans[i] = left[i] * right[i];
      cout << ans[i] << ",";
    }
  }
};

int main()
{
  A obj;
  vector<int> nums = {1, 2, 3, 4};
  int n = nums.size();
  obj.product(nums, n);

  return 0;
}