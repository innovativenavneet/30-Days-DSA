#include <bits/stdc++.h>
using namespace std;

class A
{
public:
    void intrest(int array[])
    {
        /*  this is the classical decay situation here the array in the argument does not ocntain the orginal array
        but the address of the array , if we want to pass the actual array we should pass it like int *array and also have to
        pass the size also  */
        cout << "the array in function : " << sizeof(array) << endl;
    }
};

int main()
{
    A obj;
    int array[] = {45, 12, 25, 23};
    cout << "the orginal of array: " << sizeof(array) << endl;

    obj.intrest(array);

    return 0;
}