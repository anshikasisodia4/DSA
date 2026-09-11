#include <iostream>
#include <string>
using namespace std;

bool palindrome(string s, int i, int n)
{
    if (i >= n / 2)
    {
        return true;
    }
    if (s[i] != s[n])
    {
        return false;
    }
    return palindrome(s, i + 1, n - 1);
}

int main()
{
    string s;
    cin >> s;
    if (palindrome(s, 0, s.length() - 1))
    {
        cout << "Palindrome";
    }
    else
    {
        cout << "Not Palindrome";
    }
    return 0;
}