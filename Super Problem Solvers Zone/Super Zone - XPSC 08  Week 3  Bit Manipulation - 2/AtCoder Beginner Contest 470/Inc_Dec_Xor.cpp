#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define fi first
#define se second
#define all(x) (x).begin(),(x).end()
#define rall(x) (x).rbegin(),(x).rend()
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
typedef long long ll;

void solve__(){
    int n; int q;
    cin >> n >> q;

    vector<int> val(n+1, 0);
    vector<int> active;
    active.reserve(n+5);

    ll xorAll = 0;
    string res;
    res.reserve(q*7);

    while(q--){
        int type; cin >> type;
        if(type == 1){
            int x; cin >> x;
            int oldv = val[x];
            int newv = oldv + 1;
            xorAll ^= oldv;
            xorAll ^= newv;
            val[x] = newv;
            if(oldv == 0) active.pb(x);   // নতুন active হলো
        } else {
            int w = 0;
            int sz = active.size();
            for(int i = 0; i < sz; i++){
                int x = active[i];
                int oldv = val[x];
                int newv = oldv - 1;
                xorAll ^= oldv;
                xorAll ^= newv;
                val[x] = newv;
                if(newv > 0) active[w++] = x; // এখনো positive → রাখো
            }
            active.resize(w);
        }
        res += to_string(xorAll);
        res += '\n';
    }
    cout << res;
}

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve__();
    return 0;
}