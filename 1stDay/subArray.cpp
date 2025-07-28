#include <bits/stdc++.h>
using namespace std;

class A
{
public:
    void subArray(int arr[], int n)
    {
        for (int i = 0; i < n; i++)
        {
            int x = arr[i];
            for (int k = i + 1; k < n; k++)
            {
                int y = arr[k];
                cout << "First element: " << x << ", Second element: " << y << ", Sum: " << x + y << endl;
            }
        }
    }
};

int main()
{
    A obj;

    int n = 5;
    int array[n] = {12, 15, 24, 17, 18};

    obj.subArray(array, n);

    return 0;
}
