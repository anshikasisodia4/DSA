#include <iostream>
#include <climits>
#include <algorithm>
using namespace std;

int main()
{
    int arr[] = {12, 67, 88, 4, 20};
    int size = 5;

    int largest = INT_MIN;
    for (int i = 0; i < size; i++)
    {
        largest = max(arr[i], largest);
    }
    cout << "Largest value is " << largest << endl;

    return 0;
}