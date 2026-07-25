#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x;
        cin >> n >> x;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        sort(arr, arr + n, greater<int>());
        int c = 0, ans = 0;
        for (int i = 0; i < n; i++)
        {
            c++;
            if (c * arr[i] >= x)
            {
                ans++;
                c = 0;
            }
        }
        cout << ans << endl;
    }
}