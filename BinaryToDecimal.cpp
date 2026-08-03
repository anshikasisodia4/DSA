#include <iostream>
using namespace std;

int BinaryToDecimal(int n){
     int pow = 1, ans = 0;

    while(n > 0){
       int rem = n%10;
        ans = ans + (rem * pow);

        n /= 10;
        pow = pow*2;
    }
    return ans;
}

int main(){
    int n;
    cin >> n;
    
    cout << BinaryToDecimal(n) << endl;
    
    return 0;
}