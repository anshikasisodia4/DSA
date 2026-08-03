#include <iostream>
using namespace std;

 int decimalToBinary(int num){
    int ans=0,pow=1;

    while(num>0){
        int rem=num%2;
        num=num/2;
        ans=ans+(rem*pow);
        pow=pow*10;
    }
    return ans;
 }
 
int main(){
    int num;
    cin>>num;
    cout<<decimalToBinary(num)<<endl;

    // for(int i=0;i<=10;i++){
    //     cout<<decimalToBinary(i)<<endl;
    // }
    
    return 0;
}