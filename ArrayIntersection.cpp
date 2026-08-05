#include <iostream>
using namespace std;

int main()
{
    int arr1[] = {2, 4, 6, 8, 9};
    int arr2[] = {1, 2, 3, 4, 5, 9};

    int size1 = sizeof(arr1) / sizeof(arr1[0]);
    int size2 = sizeof(arr2) / sizeof(arr2[0]);

    cout << "Intersection " << endl;
    for (int i = 0; i < size1; i++)
    {
        for (int j = 0; j < size2; j++)
        {
            if (arr1[i] == arr2[j])
            {
                cout << arr1[i] << " ";
                break;
            }
        }
    }

    return 0;
}