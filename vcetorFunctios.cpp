#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> vec = {1, 2, 3, 4, 5};
    cout << "size : " << vec.size() << endl;

    vec.push_back(25);
    vec.push_back(45);
    cout << "size after push back : " << vec.size() << endl;

    for (int val : vec)
    {
        cout << val << " ";
    }

    vec.pop_back();
    cout << endl
         << "size after pop back : " << vec.size() << endl;
    cout << "front value : " << vec.front() << endl;
    cout << "last value : " << vec.back()<<endl;

    cout << "vector at 4 index : " << vec.at(4) << endl;
    return 0;
}