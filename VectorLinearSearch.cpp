#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> v = {10, 20, 30, 40, 50};
    int key = 30;
    bool found = false;

    for (int i = 0; i < v.size(); i++)
    {
        if (v[i] == key)
        {
            cout << " Element found at index " << i << endl;
            found = true;
            break;
        }
    }
    if (!found)
    {
        cout << "element not found" << endl;
    }
    return 0;
}