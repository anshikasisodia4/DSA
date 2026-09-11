#include <iostream>
using namespace std;

void reverseArr(int arr[], int i, int n)
{
    if (i >= n / 2)
    {
        return;
    }
    swap(arr[i], arr[n - i - 1]);
    reverseArr(arr, i + 1, n);
}

int main()
{
    int arr[5];
    for (int i = 0; i < 5; i++)
    {
        cin >> arr[i];
    }
    reverseArr(arr, 0, 5);
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}