// Problem Link:https://www.codechef.com/START234D/problems/NONNEGSUM

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tc;
    cin >> tc;
    while (tc--)
    {
        int n;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            // cout << v[i] << " ";
        }
        sort(v.begin(), v.end());
        // for (int i = 0; i < n; i++)
        // {
        //     cout << v[i] << " ";
        // }
        int cnt=0,sum=0;
        for (int i = n-1; i >=0; i--)
        {
            
            if((sum+v[i] )>=0)
            {
                sum+=v[i];
                cnt++;
            }
        }
        cout<<cnt<<endl;
    }

    return 0;
}
