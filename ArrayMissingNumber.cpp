#include <iostream>
using namespace std;

int main() {
    int n=5;
    int arr[]={1,2,4,5};


    int sum = 0;

    for (int i = 0; i < n - 1; i++) {
        sum += arr[i];
    }

    int total = n * (n + 1) / 2;

    int missing = total - sum;

    cout << "Missing number: " << missing;

    return 0;
}