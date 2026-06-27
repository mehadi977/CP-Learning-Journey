// Problem Link:

#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define pb push_back
#define fi first
#define se second
#define endl '\n'
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define yes cout << "YES\n"
#define no cout << "NO\n"

void solve__()
{
    int h, w;
    cin >> h >> w;
    vector<string> a(h);
    for (int i = 0; i < h; i++)
    {
        cin >> a[i];
    }
    int start_row = h, start_collam = w, end_row = -1, end_collam = -1;

    for (int i = 0; i < h; i++)
    {
        for (int j = 0; j < w; j++)
        {
            if (a[i][j] == '#')
            {
                start_row = min(start_row, i);
                start_collam = min(start_collam, j);
                end_row = max(end_row, i);
                end_collam = max(end_collam, j);
            }
        }
    }

    for (int i = start_row; i <= end_row; i++)
    {
        for (int j = start_collam; j <= end_collam; j++)
        {
            cout << a[i][j];
        }
        cout << endl;
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve__();

    return 0;
}