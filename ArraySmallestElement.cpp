#include <iostream>
#include <climits>
// #include <algorithm>
using namespace std;

int main()
{
    int nums[] = {5, 15, 22, 1, -15, 24};
    int size = 6;

    int smallest = INT_MAX;
    int smallestIndex = -1;

    for (int i = 0; i < size; i++)
    {
        // smallest = min(nums[i], smallest);
        if (smallest > nums[i])
        {
            smallest = nums[i];
            smallestIndex = i;
        }
    }
    
    cout << "Smallest is " << smallest << endl;
    cout << "Index of smallest element is " << smallestIndex << endl;

    return 0;
}