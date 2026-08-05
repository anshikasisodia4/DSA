#include <iostream>
#include <climits>

using namespace std;

int main()
{
    int arr[] = {12, 67, 88, 4, 20};
    int size = 5;

    int largest = INT_MIN;
    int largestIndex = -1;

    for (int i = 0; i < size; i++)
    {
        if (largest < arr[i])
        {
            largest = arr[i];
            largestIndex = i;
        }
    }
    cout << "Largest value is " << largest << endl;
    cout << "Index of largest value is " << largestIndex << endl;

    return 0;
}