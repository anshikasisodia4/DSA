#include <iostream>
using namespace std;

int main()
{
    int arr[] = {2, 4, 5, 1, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    int product = 1;
    for (int i = 0; i < n; i++)
    {
        product *= arr[i];
    }
    cout << "prodct of elements in array is " << product << endl;
    return 0;
}