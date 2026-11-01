#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int secondSmallest(vector<int> &arr, int n)
{
    int smallest = INT_MAX;
    int ssmallest = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < smallest)
        {
            ssmallest = smallest;
            smallest = arr[i];
        }
        else if (arr[i] != smallest && arr[i] < ssmallest)
        {
            ssmallest = arr[i];
        }
    }
    return (ssmallest == INT_MAX) ? -1 : ssmallest;
}

int main()
{
    int n;
    cout<<"Enter size of array : ";
    cin >> n;
    vector<int> arr(n);
    cout<<"Enter elements of array : ";
    for (int i = 0; i < n; i++)
    {
      
        cin >> arr[i];
    }

    cout << "Second smallest number is :"<<secondSmallest(arr, n) << endl;

    return 0;
}