/*   Author: Encode_Hridoy  Date: 27/02/2026 [22:07:51]   */
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;

template<typename T> using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>; //order_of_key() //find_by_order
#define fast_IO ios_base::sync_with_stdio(false);cin.tie(NULL)
#define ll long long
#define ld long double
#define all(v) (v).begin(),(v).end()
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define fi first 
#define se second
#define pb push_back
#define endl "\n"

/*_____________________________ Push past your Limits !! _____________________________*/
const ll infl = 1e17 + 7;
const int inf = 1e8 + 7;
const int mod = 1e9 + 7;


void Hrid_solve(){
    int n, l,r;
    cin >> n >> l >> r;

    vector<int> a(n+1);
    for(int i=1; i<=n; i++) cin >> a[i];

    int idx=l+1, mn=n+1;
    for(int i=l+1; i<=r; i++){
        if(a[i]<mn){
            mn=a[i];
            idx = i;
        }
    }

    // middle
    vector<int> middle;
    for(int i=idx; i<=r; i++) middle.pb(a[i]);
    for(int i=l+1; i<idx; i++) middle.pb(a[i]);

    vector<int> premax(n+1), sufmin(n+2,a[n]);
    for(int i=1; i<=n; i++) premax[i]=max(premax[i-1], a[i]);
    // for(int i=n; i>=1; i--) sufmin[i]=min(sufmin[i+1], a[i]);


    // left
    int id=l;
    vector<int> tmp;
    while(id>0 && premax[id]>middle[0]){
        tmp.pb(a[id]);
        id--;
    }
    reverse(all(tmp));
    vector<int> left;
    for(int i=1; i<=id; i++) left.pb(a[i]);


    // right
    vector<int> right = tmp;
    
    if(tmp.size()==0){
        vector<int> tmp2;
        id = r+1;
        while(id<=n && middle.front()>a[id]){
            tmp2.pb(a[id]);
            id++;
        }
        for(int i=id; i<=n; i++) right.pb(a[i]);
        for(auto x: tmp2) left.pb(x);
    }
    else{
        for(int i=r+1; i<=n; i++) right.pb(a[i]);
    }




    // final touch
    for(auto i: left) cout << i << " ";
    for(auto i: middle) cout << i << " ";
    for(auto i: right) cout << i << " "; cout << endl;
}



/*_______________ Hardwork beats Talent, when Talent doesn't work hard!! _______________*/
int32_t main(){
    fast_IO;
    // #ifndef ONLINE_JUDGE
    //     freopen("input.txt", "r", stdin);
    //     // freopen("output.txt", "w", stdout);
    // #endif

    int tc = 1;
    cin >> tc;
    for(int kase = 1; kase <= tc; kase++){
        // cout << "Case " << kase << ": \n";
        Hrid_solve();
    }

    return 0;
}