// Problem Link:

#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl '\n'
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    vector<string> v;
    for (int i = 1; i <= n; i++)
    {
        string s;
        cin >> s;
        v.push_back(s);
    }
    for (int i = 0; i < n; i++)
    {
        cout << v[i] << endl;
    }
    cout << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < v[i].size(); j++)
        {
            cout << v[i][j] << " ";
        }
        cout << endl;
    }
    cout<<endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <v[i].size() ; j++)
        {
            
        }
        
    }
    

    return 0;
}
