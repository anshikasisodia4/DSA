#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    // char str[6];

    // cout << "Enter character :" << endl;
    // cin.getline(str, 6);

    // for (char ch : str)
    // {
    //     cout << ch << " ";
    // }
    // cout << endl;

    // to calculate length of string
    char str[] = "hello world";
    int len = 0;
    for (int i = 0; str[i] != '\0'; i++)
    {
        len++;
    }
    cout << "length of string is " << len << endl;

    return 0;
}