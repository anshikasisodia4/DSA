#include <iostream>
#include<string>
#include<algorithm>
using namespace std;

int main(){
    string str;
    getline(cin,str);

    int n=str.length();
    bool palindrome=true;

    for(int i=0;i<n/2;i++){
        if(str[i]!=str[n-i-1]){
            palindrome=false;
            break;
        }
    }
    if(palindrome){
        cout<<"Palindrome";
    }else{
        cout<<"Not palindrome";
    }
    return 0;
}