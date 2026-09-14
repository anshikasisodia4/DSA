#include <iostream>
using namespace std;

int main(){
             // character hashing
    string s ;
    cin>>s;

    //precompute
    int hash[26]={0};
    //int hash[256]={0}  : to hash all the characters
    for(int i=0;i<s.size();i++){
        hash[s[i]-'a']++;
    }

    int q;
    cin>>q;
    while(q--){
        char c;
        cin>>c;
        //fetch
        cout<<hash[c-'a']<<endl;

    }

    return 0;
}