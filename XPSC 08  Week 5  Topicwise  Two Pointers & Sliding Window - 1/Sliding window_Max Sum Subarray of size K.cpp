#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl '\n'
class Solution
{
public:
    int maxSubarraySum(vector<int> &arr, int k)
    {
        // code here
        long long ans = 0, sum = 0;
        int l = 0, r = 0;
        while (r < arr.size())
        {
            sum += 1LL * arr[r];
            if (r - l + 1 == k)
            {
                ans = max(ans, sum);
                sum -= 1LL * arr[l];
                l++;
                r++;
            }
            else
                r++;
        }
        return ans;
    }
};
// Problem Link:https://www.geeksforgeeks.org/problems/max-sum-subarray-of-size-k5313/1

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    Solution obj;

    int ans = obj.maxSubarraySum(a, k);
    cout << ans << endl;
    return 0;
}
