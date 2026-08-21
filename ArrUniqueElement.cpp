#include <iostream>
using namespace std;

int main()
{
    int arr[] = {2, 3, 4, 2, 5, 3, 6, 7, 6};
    int size = sizeof(arr) / sizeof(arr[0]);

    cout << "unique elements : " << endl;

    for (int i = 0; i < size; i++)
    {
        bool isDuplicate = false;
        for (int j = 0; j < i; j++)
        {
            if (arr[i] == arr[j])
            {
                isDuplicate = true;
                break;
            }
        }
        if (!isDuplicate)
        {
            cout << arr[i] << " ";
        }
    }

    cout << endl
         << "element occring once : " << endl;
    for (int i = 0; i < size; i++)
    {
        int count = 0;
        for (int j = 0; j < size; j++)
        {
            if (arr[i] == arr[j])
            {
                count++;
            }
        }
        if (count == 1)
        {
            cout << arr[i] << " ";
        }
    }
    
    return 0;
}