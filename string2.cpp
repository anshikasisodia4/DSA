#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str1 = "hello world"; // dynamic : resize in size
    string str2 = " hi";

    string str3 = str1 + str2; // concatenation

    cout << str3 << endl;
    cout << (str1 == str2) << endl;
    cout << str1.length() << endl;

    string str;
    getline(cin, str);

    cout << "Output : " << str << endl;
    for (int i = 0; i < str.length(); i++)
    {
        cout << str[i] << " ";
    }
    cout << endl;
    
    return 0;
}