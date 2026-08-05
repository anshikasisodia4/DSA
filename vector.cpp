#include <iostream>
#include <vector>
using namespace std;

int main()
{ // syntax
    // vector<int> vec={1,2,3};
    // cout<<vec[0]<<endl;

    // vector<int> vec(5, 0);
    // cout<<vec[0]<<endl;
    // cout<<vec[1]<<endl;
    // cout<<vec[2]<<endl;
    // cout<<vec[3]<<endl;
    // cout<<vec[4]<<endl;

    // for each loop


    // for (int i : vec)
    // {
    //     cout << i << endl;
    // }

    vector<char> vec = {'a', 'b', 'c', 'd', 'e'};

    for (char value : vec)
    {
        cout << value << endl;
    }
    return 0;
}