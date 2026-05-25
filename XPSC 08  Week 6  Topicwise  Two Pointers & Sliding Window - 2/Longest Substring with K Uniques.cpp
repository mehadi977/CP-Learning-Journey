// Problem Link:https://www.geeksforgeeks.org/problems/longest-k-unique-characters-substring0853/1

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

class Solution
{
public:
    int longestKSubstr(string &s, int k)
    {
        // code here
        int ans = -1, l = 0, r = 0;
        map<char, int> cnt;
        while (r < s.size())
        {
            cnt[s[r]]++;
            if (cnt.size() == k)
            {
                ans = max(ans, r - l + 1);
            }
            else
            {
                while (cnt.size() > k)
                {
                    cnt[s[l]]--;
                    if (cnt[s[l]] == 0)
                        cnt.erase(s[l]);
                    l++;
                }
            }
            r++;
        }
        return ans;
    }
};

void solve()
{
    string s;
    cin >> s;
    int k;
    cin >> k;
    Solution obj;
    int ans = obj.longestKSubstr(s, k);
    cout << ans << endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();

    return 0;
}