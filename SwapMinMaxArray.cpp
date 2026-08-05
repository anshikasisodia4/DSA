#include <iostream>

using namespace std;

int main()
{
    int arr[] = {1, 6, 2, 7, 8};
    int size = 5;

    int minIndex = 0, maxIndex = 0;

    for (int i = 0; i < size; i++)
    {
        if (arr[i] < arr[minIndex])
        {
            minIndex = i;
        }
        if (arr[i] > arr[maxIndex])
        {
            maxIndex = i;
        }
    }

    int temp = arr[minIndex];
    arr[minIndex] = arr[maxIndex];
   arr[ maxIndex] = temp;

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}