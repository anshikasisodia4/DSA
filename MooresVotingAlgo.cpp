#include <iostream>
#include <vector>

using namespace std;
int majorityElement(vector<int> &num)
{
    int n = num.size();
    int freq = 0, ans = 0;
    for (int i = 0; i < n; i++)
    {
        if (freq == 0)
        {
            ans = num[i];
        }
        if (ans == num[i])
        {
            freq++;
        }
        else
        {
            freq--;
        }
    }
    int count=0;
    for(int val:num){
        if(val==ans){
            count++;
        }
    }if(count>n/2){
        return ans;
    }else{
        return -1;
    }
    return ans;
}

int main()
{
    vector<int> num = {2, 2, 1, 1, 1, 2, 2};
    cout << "Majority Element = " << majorityElement(num);

    return 0;
}