#include <iostream>
using namespace std;

void reverseArr(int arr[], int left, int right)
{
    if (left >= right)
    {
        return;
    }
    else
    {
        swap(arr[left], arr[right]);
        reverseArr(arr, left + 1, right - 1);
    }
}

int main()
{
    int arr[5];
    for (int i = 0; i < 5; i++)
    {
        cin>> arr[i];
    }

    reverseArr(arr, 0, 4);

    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}