// Problem Link: https://atcoder.jp/contests/abc071/tasks/abc071_b?lang=en

#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    string s;
    cin >> s;
    // cout << s << endl;
    char ans = 'A';
    vector<int> fre(26);
    for (int i = 0; i < s.size(); i++)
    {
        fre[s[i] - 'a']++;
    }
    // for (int i = 0; i < 26; i++)
    // {
    //     cout << i + 'a' << " " << fre[i] << endl;
    // }
    for (int i = 0; i < 26; i++)
    {
        if (fre[i] == 0)
           { ans = i + 'a';
            break;}
    }
    if (ans =='A')
        cout << "None";
    else
        cout << ans;

    return 0;
}
