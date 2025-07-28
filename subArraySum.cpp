#include <bits/stdc++.h>
using namespace std;

class A
{
public:
    void pairSum(int arr[], int n)
    {
        int largestSum = 0;
        int tempSum = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = i; j < n; j++)
            {
                tempSum = arr[i] + arr[j];
                largestSum = max(largestSum, tempSum);
            }
        }
        cout << "largestSum : " << largestSum;
    }
};

int main()
{
    A obj;

    int n = 5;
    int arr[n] = {12, 25, 48, 56, 89};
    obj.pairSum(arr, n);
    return 0;
}