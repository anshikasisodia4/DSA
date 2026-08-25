#include <iostream>
#include <vector>
using namespace std;

vector<int> pairSum(vector<int> v, int target)
{
    vector<int> ans;
    int n = v.size();

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (v[i] + v[j] == target)
            {
                ans.push_back(i);
                ans.push_back(j);
                return ans;
            }
        }
    }

    return ans;   
}

int main()
{
    vector<int> v = {2, 7, 11, 15};
    int target = 13;

    vector<int> ans = pairSum(v, target);

    cout << ans[0] << " , " << ans[1] << endl;

    return 0;
}