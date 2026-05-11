// Problem Link:https://codeforces.com/problemset/problem/2005/B2

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
        int n, m, q;
        cin >> n >> m >> q;
        set<int> st;
        for (int i = 0; i < m; i++)
        {
            int techer;
            cin >> techer;
            st.insert(techer);
        }
        while (q--)
        {
            int david_pos;
            cin >> david_pos;
            int move = 0;

            int kacher_boro = -1, kacher_choto = -1;
            auto it = st.upper_bound(david_pos);
            if (it != st.end())
                kacher_boro = *it;

            auto it2 = st.lower_bound(david_pos);
            if (it2 != st.begin())
            {
                it2--;
                kacher_choto = *it2;
            }
            if (kacher_boro != -1 && kacher_choto != -1)
            {
                // int diff_boro = kacher_boro - david_pos;
                // int diff_choto = david_pos - kacher_choto;

                move = (kacher_boro - kacher_choto) / 2;
            }
            else if (kacher_boro == -1)
            {
                move = n - kacher_choto;
            }
            else if (kacher_choto == -1)
            {

                move = kacher_boro - 1;
            }
            cout << move << endl;
        }

        // for (auto a : st)
        //     cout << a << " ";
        // cout << endl;
    }

    return 0;
}
